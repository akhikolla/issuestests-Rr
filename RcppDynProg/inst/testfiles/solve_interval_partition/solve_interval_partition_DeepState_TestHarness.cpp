#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

IntegerVector solve_interval_partition(NumericMatrix x, const int kmax);

TEST(RcppDynProg_deepstate_test,solve_interval_partition_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix x  = RcppDeepState_NumericMatrix();
  qs::c_qsave(x,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/RcppDynProg/inst/testfiles/solve_interval_partition/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  IntegerVector kmax(1);
  kmax[0]  = RcppDeepState_int();
  qs::c_qsave(kmax,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/RcppDynProg/inst/testfiles/solve_interval_partition/inputs/kmax.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "kmax values: "<< kmax << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    solve_interval_partition(x,kmax[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
