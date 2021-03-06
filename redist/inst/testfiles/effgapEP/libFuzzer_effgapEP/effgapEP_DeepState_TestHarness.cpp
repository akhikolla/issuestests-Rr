// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// effgapEP_DeepState_TestHarness_generation.cpp and effgapEP_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector effgapEP(NumericMatrix dvs, IntegerVector dseat_vec, int nd);

TEST(redist_deepstate_test,effgapEP_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  NumericMatrix dvs  = RcppDeepState_NumericMatrix();
  std::string dvs_t = "/home/akhila/fuzzer_packages/fuzzedpackages/redist/inst/testfiles/effgapEP/libFuzzer_effgapEP/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_dvs.qs";
  qs::c_qsave(dvs,dvs_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dvs values: "<< dvs << std::endl;
  IntegerVector dseat_vec  = RcppDeepState_IntegerVector();
  std::string dseat_vec_t = "/home/akhila/fuzzer_packages/fuzzedpackages/redist/inst/testfiles/effgapEP/libFuzzer_effgapEP/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_dseat_vec.qs";
  qs::c_qsave(dseat_vec,dseat_vec_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "dseat_vec values: "<< dseat_vec << std::endl;
  IntegerVector nd(1);
  nd[0]  = RcppDeepState_int();
  std::string nd_t = "/home/akhila/fuzzer_packages/fuzzedpackages/redist/inst/testfiles/effgapEP/libFuzzer_effgapEP/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_nd.qs";
  qs::c_qsave(nd,nd_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "nd values: "<< nd << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    effgapEP(dvs,dseat_vec,nd[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
