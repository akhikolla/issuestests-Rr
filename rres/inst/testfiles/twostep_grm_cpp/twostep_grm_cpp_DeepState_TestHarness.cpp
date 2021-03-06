#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix twostep_grm_cpp(NumericMatrix genotype, NumericVector freq, NumericMatrix est0);

TEST(rres_deepstate_test,twostep_grm_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericMatrix genotype  = RcppDeepState_NumericMatrix();
  qs::c_qsave(genotype,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/rres/inst/testfiles/twostep_grm_cpp/inputs/genotype.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "genotype values: "<< genotype << std::endl;
  NumericVector freq  = RcppDeepState_NumericVector();
  qs::c_qsave(freq,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/rres/inst/testfiles/twostep_grm_cpp/inputs/freq.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "freq values: "<< freq << std::endl;
  NumericMatrix est0  = RcppDeepState_NumericMatrix();
  qs::c_qsave(est0,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/rres/inst/testfiles/twostep_grm_cpp/inputs/est0.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "est0 values: "<< est0 << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    twostep_grm_cpp(genotype,freq,est0);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
