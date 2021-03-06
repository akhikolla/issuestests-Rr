// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// bmat2C_DeepState_TestHarness_generation.cpp and bmat2C_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector bmat2C(double v1, double v2, NumericVector sec);

TEST(rlme_deepstate_test,bmat2C_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericVector v1(1);
  v1[0]  = RcppDeepState_double();
  std::string v1_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rlme/inst/testfiles/bmat2C/AFL_bmat2C/afl_inputs/" + std::to_string(t) + "_v1.qs";
  qs::c_qsave(v1,v1_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v1 values: "<< v1 << std::endl;
  NumericVector v2(1);
  v2[0]  = RcppDeepState_double();
  std::string v2_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rlme/inst/testfiles/bmat2C/AFL_bmat2C/afl_inputs/" + std::to_string(t) + "_v2.qs";
  qs::c_qsave(v2,v2_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v2 values: "<< v2 << std::endl;
  NumericVector sec  = RcppDeepState_NumericVector();
  std::string sec_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rlme/inst/testfiles/bmat2C/AFL_bmat2C/afl_inputs/" + std::to_string(t) + "_sec.qs";
  qs::c_qsave(sec,sec_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "sec values: "<< sec << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    bmat2C(v1[0],v2[0],sec);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
