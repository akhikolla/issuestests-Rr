// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// fastLR__DeepState_TestHarness_generation.cpp and fastLR__DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::List fastLR_(Rcpp::NumericMatrix x, Rcpp::NumericVector y, Rcpp::NumericVector start, double eps_f, double eps_g, int maxit);

TEST(RcppNumerical_deepstate_test,fastLR__test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix x  = RcppDeepState_NumericMatrix();
  std::string x_t = "/home/akhila/fuzzer_packages/fuzzedpackages/RcppNumerical/inst/testfiles/fastLR_/AFL_fastLR_/afl_inputs/" + std::to_string(t) + "_x.qs";
  qs::c_qsave(x,x_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  std::string y_t = "/home/akhila/fuzzer_packages/fuzzedpackages/RcppNumerical/inst/testfiles/fastLR_/AFL_fastLR_/afl_inputs/" + std::to_string(t) + "_y.qs";
  qs::c_qsave(y,y_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericVector start  = RcppDeepState_NumericVector();
  std::string start_t = "/home/akhila/fuzzer_packages/fuzzedpackages/RcppNumerical/inst/testfiles/fastLR_/AFL_fastLR_/afl_inputs/" + std::to_string(t) + "_start.qs";
  qs::c_qsave(start,start_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "start values: "<< start << std::endl;
  NumericVector eps_f(1);
  eps_f[0]  = RcppDeepState_double();
  std::string eps_f_t = "/home/akhila/fuzzer_packages/fuzzedpackages/RcppNumerical/inst/testfiles/fastLR_/AFL_fastLR_/afl_inputs/" + std::to_string(t) + "_eps_f.qs";
  qs::c_qsave(eps_f,eps_f_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "eps_f values: "<< eps_f << std::endl;
  NumericVector eps_g(1);
  eps_g[0]  = RcppDeepState_double();
  std::string eps_g_t = "/home/akhila/fuzzer_packages/fuzzedpackages/RcppNumerical/inst/testfiles/fastLR_/AFL_fastLR_/afl_inputs/" + std::to_string(t) + "_eps_g.qs";
  qs::c_qsave(eps_g,eps_g_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "eps_g values: "<< eps_g << std::endl;
  IntegerVector maxit(1);
  maxit[0]  = RcppDeepState_int();
  std::string maxit_t = "/home/akhila/fuzzer_packages/fuzzedpackages/RcppNumerical/inst/testfiles/fastLR_/AFL_fastLR_/afl_inputs/" + std::to_string(t) + "_maxit.qs";
  qs::c_qsave(maxit,maxit_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "maxit values: "<< maxit << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    fastLR_(x,y,start,eps_f[0],eps_g[0],maxit[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
