// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// bmat_schC_DeepState_TestHarness_generation.cpp and bmat_schC_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix bmat_schC(double v1, double v2, double v3, NumericVector section_counts);

TEST(rlme_deepstate_test,bmat_schC_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector v1(1);
  v1[0]  = RcppDeepState_double();
  qs::c_qsave(v1,"/home/akhila/fuzzer_packages/fuzzedpackages/rlme/inst/testfiles/bmat_schC/inputs/v1.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v1 values: "<< v1 << std::endl;
  NumericVector v2(1);
  v2[0]  = RcppDeepState_double();
  qs::c_qsave(v2,"/home/akhila/fuzzer_packages/fuzzedpackages/rlme/inst/testfiles/bmat_schC/inputs/v2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v2 values: "<< v2 << std::endl;
  NumericVector v3(1);
  v3[0]  = RcppDeepState_double();
  qs::c_qsave(v3,"/home/akhila/fuzzer_packages/fuzzedpackages/rlme/inst/testfiles/bmat_schC/inputs/v3.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "v3 values: "<< v3 << std::endl;
  NumericVector section_counts  = RcppDeepState_NumericVector();
  qs::c_qsave(section_counts,"/home/akhila/fuzzer_packages/fuzzedpackages/rlme/inst/testfiles/bmat_schC/inputs/section_counts.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "section_counts values: "<< section_counts << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    bmat_schC(v1[0],v2[0],v3[0],section_counts);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
