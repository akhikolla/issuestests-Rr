// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// respLmParam_DeepState_TestHarness_generation.cpp and respLmParam_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List respLmParam(NumericMatrix x, NumericMatrix y, int cell);

TEST(remote_deepstate_test,respLmParam_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix x  = RcppDeepState_NumericMatrix();
  qs::c_qsave(x,"/home/akhila/fuzzer_packages/fuzzedpackages/remote/inst/testfiles/respLmParam/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericMatrix y  = RcppDeepState_NumericMatrix();
  qs::c_qsave(y,"/home/akhila/fuzzer_packages/fuzzedpackages/remote/inst/testfiles/respLmParam/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  IntegerVector cell(1);
  cell[0]  = RcppDeepState_int();
  qs::c_qsave(cell,"/home/akhila/fuzzer_packages/fuzzedpackages/remote/inst/testfiles/respLmParam/inputs/cell.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "cell values: "<< cell << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    respLmParam(x,y,cell[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
