// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// check_csv
Rcpp::RObject check_csv(std::string path, bool is_compressed, bool parallel);
RcppExport SEXP _alabaster_base_check_csv(SEXP pathSEXP, SEXP is_compressedSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type is_compressed(is_compressedSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(check_csv(path, is_compressed, parallel));
    return rcpp_result_gen;
END_RCPP
}
// check_list_hdf5
SEXP check_list_hdf5(std::string file, std::string name, int num_external);
RcppExport SEXP _alabaster_base_check_list_hdf5(SEXP fileSEXP, SEXP nameSEXP, SEXP num_externalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< int >::type num_external(num_externalSEXP);
    rcpp_result_gen = Rcpp::wrap(check_list_hdf5(file, name, num_external));
    return rcpp_result_gen;
END_RCPP
}
// check_list_json
SEXP check_list_json(std::string file, int num_external, bool parallel);
RcppExport SEXP _alabaster_base_check_list_json(SEXP fileSEXP, SEXP num_externalSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< int >::type num_external(num_externalSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(check_list_json(file, num_external, parallel));
    return rcpp_result_gen;
END_RCPP
}
// any_actually_numeric_na
bool any_actually_numeric_na(Rcpp::NumericVector x);
RcppExport SEXP _alabaster_base_any_actually_numeric_na(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(any_actually_numeric_na(x));
    return rcpp_result_gen;
END_RCPP
}
// is_actually_numeric_na
Rcpp::LogicalVector is_actually_numeric_na(Rcpp::NumericVector x);
RcppExport SEXP _alabaster_base_is_actually_numeric_na(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(is_actually_numeric_na(x));
    return rcpp_result_gen;
END_RCPP
}
// choose_numeric_missing_placeholder
double choose_numeric_missing_placeholder(Rcpp::NumericVector x);
RcppExport SEXP _alabaster_base_choose_numeric_missing_placeholder(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(choose_numeric_missing_placeholder(x));
    return rcpp_result_gen;
END_RCPP
}
// not_rfc3339
Rcpp::LogicalVector not_rfc3339(Rcpp::CharacterVector x);
RcppExport SEXP _alabaster_base_not_rfc3339(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(not_rfc3339(x));
    return rcpp_result_gen;
END_RCPP
}
// load_csv
Rcpp::List load_csv(std::string path, bool is_compressed, int nrecords, bool parallel);
RcppExport SEXP _alabaster_base_load_csv(SEXP pathSEXP, SEXP is_compressedSEXP, SEXP nrecordsSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type is_compressed(is_compressedSEXP);
    Rcpp::traits::input_parameter< int >::type nrecords(nrecordsSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(load_csv(path, is_compressed, nrecords, parallel));
    return rcpp_result_gen;
END_RCPP
}
// load_list_hdf5
Rcpp::RObject load_list_hdf5(std::string file, std::string name, Rcpp::List obj);
RcppExport SEXP _alabaster_base_load_list_hdf5(SEXP fileSEXP, SEXP nameSEXP, SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type obj(objSEXP);
    rcpp_result_gen = Rcpp::wrap(load_list_hdf5(file, name, obj));
    return rcpp_result_gen;
END_RCPP
}
// load_list_json
Rcpp::RObject load_list_json(std::string file, Rcpp::List obj, bool parallel);
RcppExport SEXP _alabaster_base_load_list_json(SEXP fileSEXP, SEXP objSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type obj(objSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(load_list_json(file, obj, parallel));
    return rcpp_result_gen;
END_RCPP
}
// validate
Rcpp::RObject validate(std::string path, Rcpp::RObject metadata);
RcppExport SEXP _alabaster_base_validate(SEXP pathSEXP, SEXP metadataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type metadata(metadataSEXP);
    rcpp_result_gen = Rcpp::wrap(validate(path, metadata));
    return rcpp_result_gen;
END_RCPP
}
// register_validate_function
Rcpp::RObject register_validate_function(std::string type, Rcpp::Function fun);
RcppExport SEXP _alabaster_base_register_validate_function(SEXP typeSEXP, SEXP funSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type fun(funSEXP);
    rcpp_result_gen = Rcpp::wrap(register_validate_function(type, fun));
    return rcpp_result_gen;
END_RCPP
}
// deregister_validate_function
Rcpp::RObject deregister_validate_function(std::string type);
RcppExport SEXP _alabaster_base_deregister_validate_function(SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(deregister_validate_function(type));
    return rcpp_result_gen;
END_RCPP
}
// register_height_function
Rcpp::RObject register_height_function(std::string type, Rcpp::Function fun);
RcppExport SEXP _alabaster_base_register_height_function(SEXP typeSEXP, SEXP funSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type fun(funSEXP);
    rcpp_result_gen = Rcpp::wrap(register_height_function(type, fun));
    return rcpp_result_gen;
END_RCPP
}
// deregister_height_function
Rcpp::RObject deregister_height_function(std::string type);
RcppExport SEXP _alabaster_base_deregister_height_function(SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(deregister_height_function(type));
    return rcpp_result_gen;
END_RCPP
}
// register_any_duplicated
Rcpp::RObject register_any_duplicated(bool set);
RcppExport SEXP _alabaster_base_register_any_duplicated(SEXP setSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< bool >::type set(setSEXP);
    rcpp_result_gen = Rcpp::wrap(register_any_duplicated(set));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_alabaster_base_check_csv", (DL_FUNC) &_alabaster_base_check_csv, 3},
    {"_alabaster_base_check_list_hdf5", (DL_FUNC) &_alabaster_base_check_list_hdf5, 3},
    {"_alabaster_base_check_list_json", (DL_FUNC) &_alabaster_base_check_list_json, 3},
    {"_alabaster_base_any_actually_numeric_na", (DL_FUNC) &_alabaster_base_any_actually_numeric_na, 1},
    {"_alabaster_base_is_actually_numeric_na", (DL_FUNC) &_alabaster_base_is_actually_numeric_na, 1},
    {"_alabaster_base_choose_numeric_missing_placeholder", (DL_FUNC) &_alabaster_base_choose_numeric_missing_placeholder, 1},
    {"_alabaster_base_not_rfc3339", (DL_FUNC) &_alabaster_base_not_rfc3339, 1},
    {"_alabaster_base_load_csv", (DL_FUNC) &_alabaster_base_load_csv, 4},
    {"_alabaster_base_load_list_hdf5", (DL_FUNC) &_alabaster_base_load_list_hdf5, 3},
    {"_alabaster_base_load_list_json", (DL_FUNC) &_alabaster_base_load_list_json, 3},
    {"_alabaster_base_validate", (DL_FUNC) &_alabaster_base_validate, 2},
    {"_alabaster_base_register_validate_function", (DL_FUNC) &_alabaster_base_register_validate_function, 2},
    {"_alabaster_base_deregister_validate_function", (DL_FUNC) &_alabaster_base_deregister_validate_function, 1},
    {"_alabaster_base_register_height_function", (DL_FUNC) &_alabaster_base_register_height_function, 2},
    {"_alabaster_base_deregister_height_function", (DL_FUNC) &_alabaster_base_deregister_height_function, 1},
    {"_alabaster_base_register_any_duplicated", (DL_FUNC) &_alabaster_base_register_any_duplicated, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_alabaster_base(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
