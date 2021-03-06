// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// dseatsDVS_DeepState_TestHarness_generation.cpp and dseatsDVS_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector dseatsDVS(NumericMatrix dvs);

TEST(redist_deepstate_test,dseatsDVS_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix dvs  = RcppDeepState_NumericMatrix();
  std::string dvs_t = "/home/akhila/fuzzer_packages/fuzzedpackages/redist/inst/testfiles/dseatsDVS/libFuzzer_dseatsDVS/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_dvs.qs";
  qs::c_qsave(dvs,dvs_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dvs values: "<< dvs << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    dseatsDVS(dvs);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
