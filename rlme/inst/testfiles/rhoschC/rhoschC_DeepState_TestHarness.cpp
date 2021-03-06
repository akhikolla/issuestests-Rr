// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// rhoschC_DeepState_TestHarness_generation.cpp and rhoschC_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List rhoschC(NumericVector ahat, NumericVector section_counts, NumericMatrix student_counts);

TEST(rlme_deepstate_test,rhoschC_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector ahat  = RcppDeepState_NumericVector();
  qs::c_qsave(ahat,"/home/akhila/fuzzer_packages/fuzzedpackages/rlme/inst/testfiles/rhoschC/inputs/ahat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ahat values: "<< ahat << std::endl;
  NumericVector section_counts  = RcppDeepState_NumericVector();
  qs::c_qsave(section_counts,"/home/akhila/fuzzer_packages/fuzzedpackages/rlme/inst/testfiles/rhoschC/inputs/section_counts.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "section_counts values: "<< section_counts << std::endl;
  NumericMatrix student_counts  = RcppDeepState_NumericMatrix();
  qs::c_qsave(student_counts,"/home/akhila/fuzzer_packages/fuzzedpackages/rlme/inst/testfiles/rhoschC/inputs/student_counts.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "student_counts values: "<< student_counts << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    rhoschC(ahat,section_counts,student_counts);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
