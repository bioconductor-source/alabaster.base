#ifndef UZUKI_PARSE_HPP
#define UZUKI_PARSE_HPP

#include <vector>
#include <memory>
#include <algorithm>
#include <cstdint>
#include <limits>

#include "unpack.hpp"
#include "Dummy.hpp"

/**
 * @file parse.hpp
 *
 * @brief Parse JSON file contents using the **uzuki** spec.
 */

namespace uzuki {

/**
 * @cond
 */
template<class CustomExternals>
struct ExternalTracker {
    ExternalTracker(CustomExternals e) : getter(std::move(e)) {}

    void* operator()(size_t i) {
        indices.push_back(i);
        return getter.get(i);
    };

    size_t size() const {
        return getter.size();
    }

    CustomExternals getter;
    std::vector<size_t> indices;
};

inline void check_external_indices(std::vector<size_t>& other_indices) {
    std::sort(other_indices.begin(), other_indices.end());
    int nother = other_indices.size();
    for (int i = 0; i < nother; ++i) {
        if (i != other_indices[i]) {
            throw std::runtime_error("set of \"index\" values for type \"other\" should be consecutive starting from zero");
        }
    }
}
/**
 * @endcond
 */

/**
 * Parse JSON file contents using the **uzuki** specification.
 *
 * @tparam Provisioner A class namespace defining static methods for creating new `Base` objects.
 * @tparam Json A [`nlohmann::json`](https://github.com/nlohmann/json)-compatible representation of JSON data.
 * @tparam Externals Class describing how to resolve external references for type `OTHER`.
 *
 * @param contents Parsed contents of the JSON file.
 * @param ext Instance of an external reference resolver class.
 *
 * @return Pointer to the root `Base` object.
 * Depending on `Provisioner`, this may contain references to all nested objects. 
 * 
 * Any invalid representations in `contents` will cause an error to be thrown.
 *
 * @section provisioner-contract Provisioner requirements
 * The `Provisioner` class is expected to provide the following static methods:
 *
 * - `Nothing* new_Nothing()`, which returns a new instance of a `Nothing` subclass.
 * - `Other* new_Other(void* p)`, which returns a new instance of a `Other` subclass.
 *   `p` is a pointer to an "other" object, generated by calling `ext.get()` (see below).
 * - `DataFrame* new_DataFrame(size_t r, size_t c)`, which returns a new instance of a `DataFrame` subclass with `r` rows and `c` columns.
 * - `UnnamedList* new_UnnamedList(size_t l)`, which returns a new instance of an `UnnamedList` with length `l`.
 * - `NamedList* new_UnnamedList(size_t l)`, which returns a new instance of a `NamedList` with length `l`.
 * - `IntegerVector* new_Integer(size_t l)`, which returns a new instance of an `IntegerVector` subclass of length `l`.
 * - `NumberVector* new_Number(size_t l)`, which returns a new instance of a `NumberVector` subclass of length `l`.
 * - `StringVector* new_String(size_t l)`, which returns a new instance of a `StringVector` subclass of length `l`.
 * - `BooleanVector* new_Boolean(size_t l)`, which returns a new instance of a `BooleanVector` subclass of length `l`.
 * - `DateVector* new_Date(size_t l)`, which returns a new instance of a `DateVector` subclass of length `l`.
 * - `Factor* new_Factor(size_t l, size_t ll)`, which returns a new instance of a `Factor` subclass of length `l` and with `ll` unique levels.
 * - `IntegerArray* new_Integer(std::vector<size_t> d)`, which returns a new instance of an `IntegerArray` subclass of dimensions `d`.
 * - `NumberArray* new_Number(std::vector<size_t> d)`, which returns a new instance of a `NumberArray` subclass of dimensions `d`.
 * - `StringArray* new_String(std::vector<size_t> d)`, which returns a new instance of a `StringArray` subclass of dimensions `d`.
 * - `BooleanArray* new_Boolean(std::vector<size_t> d)`, which returns a new instance of a `BooleanArray` subclass of dimensions `d`.
 * - `DateArray* new_Date(std::vector<size_t> d)`, which returns a new instance of a `DateArray` subclass of dimensions `d`.
 * - `FactorArray* new_Factor(std::vector<size_t> d, std::vector<size_t> dl)`, which returns a new instance of a `FactorArray` subclass of dimensions `d` and with `ll` unique levels.
 *
 * @section external-contract Externals requirements
 * The `Externals` class is expected to provide the following `const` methods:
 *
 * - `void* get(size_t i)`, which returns a pointer to an "other" object, given the index of that object.
 *   This will be stored in the corresponding `Other` subclass generated by `Provisioner::new_Other`.
 * - `size_t size()`, which returns the number of available external references.
 */
template<class Provisioner, class Json, class Externals>
std::shared_ptr<Base> parse(const Json& contents, Externals ext) {
    ExternalTracker etrack(ext);
    auto ptr = unpack<Provisioner>(contents, etrack);

    // Checking that the external indices match up.
    if (etrack.indices.size() != ext.size()) {
        throw std::runtime_error("fewer instances of type \"other\" than expected (" + std::to_string(ext.size()) + ")");
    }
    check_external_indices(etrack.indices);

    return ptr;
}

/**
 * Parse JSON file contents using the **uzuki** specification,
 * assuming that there are no external references to "other" objects.
 *
 * @tparam Provisioner A class namespace defining static methods for creating new `Base` objects.
 * @tparam Json A [`nlohmann::json`](https://github.com/nlohmann/json)-compatible representation of JSON data.
 *
 * @param contents Parsed contents of the JSON file.
 *
 * @return Pointer to the root `Base` object.
 * Depending on `Provisioner`, this may contain references to all nested objects. 
 * 
 * Any invalid representations in `contents` will cause an error to be thrown.
 */
template<class Provisioner, class Json>
std::shared_ptr<Base> parse(const Json& contents) {
    return parse<Provisioner>(contents, DummyExternals(0));
}

}

#endif
