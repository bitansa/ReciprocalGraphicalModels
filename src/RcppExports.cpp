// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Generate_Rho_c
double Generate_Rho_c(const arma::mat& Gamma, double p, double a_rho, double b_rho);
RcppExport SEXP _ReciprocalGraphicalModels_Generate_Rho_c(SEXP GammaSEXP, SEXP pSEXP, SEXP a_rhoSEXP, SEXP b_rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type a_rho(a_rhoSEXP);
    Rcpp::traits::input_parameter< double >::type b_rho(b_rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(Generate_Rho_c(Gamma, p, a_rho, b_rho));
    return rcpp_result_gen;
END_RCPP
}
// Generate_Psi_c
double Generate_Psi_c(const arma::mat& Phi, double d, double a_psi, double b_psi);
RcppExport SEXP _ReciprocalGraphicalModels_Generate_Psi_c(SEXP PhiSEXP, SEXP dSEXP, SEXP a_psiSEXP, SEXP b_psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Phi(PhiSEXP);
    Rcpp::traits::input_parameter< double >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type a_psi(a_psiSEXP);
    Rcpp::traits::input_parameter< double >::type b_psi(b_psiSEXP);
    rcpp_result_gen = Rcpp::wrap(Generate_Psi_c(Phi, d, a_psi, b_psi));
    return rcpp_result_gen;
END_RCPP
}
// Generate_Eta_c
double Generate_Eta_c(double b, double phi, double a_eta, double b_eta, double nu_2);
RcppExport SEXP _ReciprocalGraphicalModels_Generate_Eta_c(SEXP bSEXP, SEXP phiSEXP, SEXP a_etaSEXP, SEXP b_etaSEXP, SEXP nu_2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< double >::type a_eta(a_etaSEXP);
    Rcpp::traits::input_parameter< double >::type b_eta(b_etaSEXP);
    Rcpp::traits::input_parameter< double >::type nu_2(nu_2SEXP);
    rcpp_result_gen = Rcpp::wrap(Generate_Eta_c(b, phi, a_eta, b_eta, nu_2));
    return rcpp_result_gen;
END_RCPP
}
// Generate_Tau_c
double Generate_Tau_c(double a, double gamma, double a_tau, double b_tau, double nu_1);
RcppExport SEXP _ReciprocalGraphicalModels_Generate_Tau_c(SEXP aSEXP, SEXP gammaSEXP, SEXP a_tauSEXP, SEXP b_tauSEXP, SEXP nu_1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< double >::type b_tau(b_tauSEXP);
    Rcpp::traits::input_parameter< double >::type nu_1(nu_1SEXP);
    rcpp_result_gen = Rcpp::wrap(Generate_Tau_c(a, gamma, a_tau, b_tau, nu_1));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ReciprocalGraphicalModels_Generate_Rho_c", (DL_FUNC) &_ReciprocalGraphicalModels_Generate_Rho_c, 4},
    {"_ReciprocalGraphicalModels_Generate_Psi_c", (DL_FUNC) &_ReciprocalGraphicalModels_Generate_Psi_c, 4},
    {"_ReciprocalGraphicalModels_Generate_Eta_c", (DL_FUNC) &_ReciprocalGraphicalModels_Generate_Eta_c, 5},
    {"_ReciprocalGraphicalModels_Generate_Tau_c", (DL_FUNC) &_ReciprocalGraphicalModels_Generate_Tau_c, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_ReciprocalGraphicalModels(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
