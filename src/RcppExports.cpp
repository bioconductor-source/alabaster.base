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
// check_list
int check_list(std::string contents);
RcppExport SEXP _alabaster_base_check_list(SEXP contentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type contents(contentsSEXP);
    rcpp_result_gen = Rcpp::wrap(check_list(contents));
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
// load_list
Rcpp::RObject load_list(std::string contents, Rcpp::List obj);
RcppExport SEXP _alabaster_base_load_list(SEXP contentsSEXP, SEXP objSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type contents(contentsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type obj(objSEXP);
    rcpp_result_gen = Rcpp::wrap(load_list(contents, obj));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_alabaster_base_check_csv", (DL_FUNC) &_alabaster_base_check_csv, 3},
    {"_alabaster_base_check_list", (DL_FUNC) &_alabaster_base_check_list, 1},
    {"_alabaster_base_load_csv", (DL_FUNC) &_alabaster_base_load_csv, 4},
    {"_alabaster_base_load_list", (DL_FUNC) &_alabaster_base_load_list, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_alabaster_base(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
