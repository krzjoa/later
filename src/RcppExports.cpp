// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/later.h"
#include <Rcpp.h>

using namespace Rcpp;

// testCallbackOrdering
void testCallbackOrdering();
RcppExport SEXP _later_testCallbackOrdering() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    testCallbackOrdering();
    return R_NilValue;
END_RCPP
}
// ensureInitialized
void ensureInitialized();
RcppExport SEXP _later_ensureInitialized() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    ensureInitialized();
    return R_NilValue;
END_RCPP
}
// execCallbacks
bool execCallbacks(double timeoutSecs, bool runAll);
RcppExport SEXP _later_execCallbacks(SEXP timeoutSecsSEXP, SEXP runAllSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type timeoutSecs(timeoutSecsSEXP);
    Rcpp::traits::input_parameter< bool >::type runAll(runAllSEXP);
    rcpp_result_gen = Rcpp::wrap(execCallbacks(timeoutSecs, runAll));
    return rcpp_result_gen;
END_RCPP
}
// idle
bool idle();
RcppExport SEXP _later_idle() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(idle());
    return rcpp_result_gen;
END_RCPP
}
// execLater
void execLater(Rcpp::Function callback, double delaySecs);
RcppExport SEXP _later_execLater(SEXP callbackSEXP, SEXP delaySecsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Function >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< double >::type delaySecs(delaySecsSEXP);
    execLater(callback, delaySecs);
    return R_NilValue;
END_RCPP
}
// next_op_secs
double next_op_secs();
RcppExport SEXP _later_next_op_secs() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(next_op_secs());
    return rcpp_result_gen;
END_RCPP
}
