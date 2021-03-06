// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// monthlyMeansC_DeepState_TestHarness_generation.cpp and monthlyMeansC_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <ctime>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix monthlyMeansC(NumericMatrix x, int nCycleWindow);

TEST(remote_deepstate_test,monthlyMeansC_test){
  RInside R;
  std::time_t t = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix x  = RcppDeepState_NumericMatrix();
  std::string x_t = "/home/akhila/fuzzer_packages/fuzzedpackages/remote/inst/testfiles/monthlyMeansC/AFL_monthlyMeansC/afl_inputs/" + std::to_string(t) + "_x.qs";
  qs::c_qsave(x,x_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  IntegerVector nCycleWindow(1);
  nCycleWindow[0]  = RcppDeepState_int();
  std::string nCycleWindow_t = "/home/akhila/fuzzer_packages/fuzzedpackages/remote/inst/testfiles/monthlyMeansC/AFL_monthlyMeansC/afl_inputs/" + std::to_string(t) + "_nCycleWindow.qs";
  qs::c_qsave(nCycleWindow,nCycleWindow_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nCycleWindow values: "<< nCycleWindow << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    monthlyMeansC(x,nCycleWindow[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
