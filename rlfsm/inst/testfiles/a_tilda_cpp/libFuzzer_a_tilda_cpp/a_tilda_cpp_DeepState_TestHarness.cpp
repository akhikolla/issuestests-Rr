// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// a_tilda_cpp_DeepState_TestHarness_generation.cpp and a_tilda_cpp_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

std::vector<double> a_tilda_cpp(int N, int m, int M, double alpha, double H);

TEST(rlfsm_deepstate_test,a_tilda_cpp_test){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector N(1);
  N[0]  = RcppDeepState_int();
  std::string N_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rlfsm/inst/testfiles/a_tilda_cpp/libFuzzer_a_tilda_cpp/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_N.qs";
  qs::c_qsave(N,N_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "N values: "<< N << std::endl;
  IntegerVector m(1);
  m[0]  = RcppDeepState_int();
  std::string m_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rlfsm/inst/testfiles/a_tilda_cpp/libFuzzer_a_tilda_cpp/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_m.qs";
  qs::c_qsave(m,m_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m values: "<< m << std::endl;
  IntegerVector M(1);
  M[0]  = RcppDeepState_int();
  std::string M_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rlfsm/inst/testfiles/a_tilda_cpp/libFuzzer_a_tilda_cpp/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_M.qs";
  qs::c_qsave(M,M_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "M values: "<< M << std::endl;
  NumericVector alpha(1);
  alpha[0]  = RcppDeepState_double();
  std::string alpha_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rlfsm/inst/testfiles/a_tilda_cpp/libFuzzer_a_tilda_cpp/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_alpha.qs";
  qs::c_qsave(alpha,alpha_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "alpha values: "<< alpha << std::endl;
  NumericVector H(1);
  H[0]  = RcppDeepState_double();
  std::string H_t = "/home/akhila/fuzzer_packages/fuzzedpackages/rlfsm/inst/testfiles/a_tilda_cpp/libFuzzer_a_tilda_cpp/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_H.qs";
  qs::c_qsave(H,H_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "H values: "<< H << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    a_tilda_cpp(N[0],m[0],M[0],alpha[0],H[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
