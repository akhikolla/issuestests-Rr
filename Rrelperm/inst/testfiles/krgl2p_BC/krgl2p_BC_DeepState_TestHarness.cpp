#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double krgl2p_BC(double SG, double SWCON, double SORG, double SGCON, double KROGCG, double NOG);

TEST(Rrelperm_deepstate_test,krgl2p_BC_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector SG(1);
  SG[0]  = RcppDeepState_double();
  qs::c_qsave(SG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/krgl2p_BC/inputs/SG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SG values: "<< SG << std::endl;
  NumericVector SWCON(1);
  SWCON[0]  = RcppDeepState_double();
  qs::c_qsave(SWCON,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/krgl2p_BC/inputs/SWCON.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SWCON values: "<< SWCON << std::endl;
  NumericVector SORG(1);
  SORG[0]  = RcppDeepState_double();
  qs::c_qsave(SORG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/krgl2p_BC/inputs/SORG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SORG values: "<< SORG << std::endl;
  NumericVector SGCON(1);
  SGCON[0]  = RcppDeepState_double();
  qs::c_qsave(SGCON,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/krgl2p_BC/inputs/SGCON.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SGCON values: "<< SGCON << std::endl;
  NumericVector KROGCG(1);
  KROGCG[0]  = RcppDeepState_double();
  qs::c_qsave(KROGCG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/krgl2p_BC/inputs/KROGCG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "KROGCG values: "<< KROGCG << std::endl;
  NumericVector NOG(1);
  NOG[0]  = RcppDeepState_double();
  qs::c_qsave(NOG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/krgl2p_BC/inputs/NOG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NOG values: "<< NOG << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    krgl2p_BC(SG[0],SWCON[0],SORG[0],SGCON[0],KROGCG[0],NOG[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
