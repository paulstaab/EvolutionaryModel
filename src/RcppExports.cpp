// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// parseMsPositions
NumericVector parseMsPositions(const std::string line);
RcppExport SEXP coalsimr_parseMsPositions(SEXP lineSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string >::type line(lineSEXP );
        NumericVector __result = parseMsPositions(line);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parseMsOutput
List parseMsOutput(const List file_names, const NumericVector sample_size, const int loci_number);
RcppExport SEXP coalsimr_parseMsOutput(SEXP file_namesSEXP, SEXP sample_sizeSEXP, SEXP loci_numberSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type file_names(file_namesSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type sample_size(sample_sizeSEXP );
        Rcpp::traits::input_parameter< const int >::type loci_number(loci_numberSEXP );
        List __result = parseMsOutput(file_names, sample_size, loci_number);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parseSeqgenOutput
List parseSeqgenOutput(const List file_names, const int sample_size, const NumericMatrix sequence_length, const int loci_number, const int outgroup_size = 1);
RcppExport SEXP coalsimr_parseSeqgenOutput(SEXP file_namesSEXP, SEXP sample_sizeSEXP, SEXP sequence_lengthSEXP, SEXP loci_numberSEXP, SEXP outgroup_sizeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type file_names(file_namesSEXP );
        Rcpp::traits::input_parameter< const int >::type sample_size(sample_sizeSEXP );
        Rcpp::traits::input_parameter< const NumericMatrix >::type sequence_length(sequence_lengthSEXP );
        Rcpp::traits::input_parameter< const int >::type loci_number(loci_numberSEXP );
        Rcpp::traits::input_parameter< const int >::type outgroup_size(outgroup_sizeSEXP );
        List __result = parseSeqgenOutput(file_names, sample_size, sequence_length, loci_number, outgroup_size);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parseTrees
CharacterVector parseTrees(const std::string in_file, const NumericVector trio_opts, Function tempfile);
RcppExport SEXP coalsimr_parseTrees(SEXP in_fileSEXP, SEXP trio_optsSEXP, SEXP tempfileSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string >::type in_file(in_fileSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type trio_opts(trio_optsSEXP );
        Rcpp::traits::input_parameter< Function >::type tempfile(tempfileSEXP );
        CharacterVector __result = parseTrees(in_file, trio_opts, tempfile);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calc_jsfs
NumericMatrix calc_jsfs(const List seg_sites, const NumericVector pop1, const NumericVector pop2);
RcppExport SEXP coalsimr_calc_jsfs(SEXP seg_sitesSEXP, SEXP pop1SEXP, SEXP pop2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type seg_sites(seg_sitesSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type pop1(pop1SEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type pop2(pop2SEXP );
        NumericMatrix __result = calc_jsfs(seg_sites, pop1, pop2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
