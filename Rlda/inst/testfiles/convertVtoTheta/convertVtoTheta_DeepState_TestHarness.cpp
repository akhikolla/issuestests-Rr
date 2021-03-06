// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// convertVtoTheta_DeepState_TestHarness_generation.cpp and convertVtoTheta_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix convertVtoTheta(NumericMatrix vmat, NumericVector prod);

TEST(Rlda_deepstate_test,convertVtoTheta_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix vmat  = RcppDeepState_NumericMatrix();
  qs::c_qsave(vmat,"/home/akhila/fuzzer_packages/fuzzedpackages/Rlda/inst/testfiles/convertVtoTheta/inputs/vmat.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "vmat values: "<< vmat << std::endl;
  NumericVector prod  = RcppDeepState_NumericVector();
  qs::c_qsave(prod,"/home/akhila/fuzzer_packages/fuzzedpackages/Rlda/inst/testfiles/convertVtoTheta/inputs/prod.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "prod values: "<< prod << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    convertVtoTheta(vmat,prod);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
