#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericVector llrandtruncpoiscpp(NumericVector y, NumericVector lp, NumericVector tau2, NumericMatrix gh);

TEST(robmixglm_deepstate_test,llrandtruncpoiscpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  qs::c_qsave(y,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/robmixglm/inst/testfiles/llrandtruncpoiscpp/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericVector lp  = RcppDeepState_NumericVector();
  qs::c_qsave(lp,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/robmixglm/inst/testfiles/llrandtruncpoiscpp/inputs/lp.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lp values: "<< lp << std::endl;
  NumericVector tau2  = RcppDeepState_NumericVector();
  qs::c_qsave(tau2,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/robmixglm/inst/testfiles/llrandtruncpoiscpp/inputs/tau2.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "tau2 values: "<< tau2 << std::endl;
  NumericMatrix gh  = RcppDeepState_NumericMatrix();
  qs::c_qsave(gh,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/robmixglm/inst/testfiles/llrandtruncpoiscpp/inputs/gh.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "gh values: "<< gh << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    llrandtruncpoiscpp(y,lp,tau2,gh);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
