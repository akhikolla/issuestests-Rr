#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix kr2p_gl_cpp(double SWCON, double SOIRG, double SORG, double SGCON, double SGCRIT, double KRGCL, double KROGCG, double NG, double NOG, int NP);

TEST(Rrelperm_deepstate_test,kr2p_gl_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector SWCON(1);
  SWCON[0]  = RcppDeepState_double();
  qs::c_qsave(SWCON,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr2p_gl_cpp/inputs/SWCON.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SWCON values: "<< SWCON << std::endl;
  NumericVector SOIRG(1);
  SOIRG[0]  = RcppDeepState_double();
  qs::c_qsave(SOIRG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr2p_gl_cpp/inputs/SOIRG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SOIRG values: "<< SOIRG << std::endl;
  NumericVector SORG(1);
  SORG[0]  = RcppDeepState_double();
  qs::c_qsave(SORG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr2p_gl_cpp/inputs/SORG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SORG values: "<< SORG << std::endl;
  NumericVector SGCON(1);
  SGCON[0]  = RcppDeepState_double();
  qs::c_qsave(SGCON,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr2p_gl_cpp/inputs/SGCON.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SGCON values: "<< SGCON << std::endl;
  NumericVector SGCRIT(1);
  SGCRIT[0]  = RcppDeepState_double();
  qs::c_qsave(SGCRIT,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr2p_gl_cpp/inputs/SGCRIT.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SGCRIT values: "<< SGCRIT << std::endl;
  NumericVector KRGCL(1);
  KRGCL[0]  = RcppDeepState_double();
  qs::c_qsave(KRGCL,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr2p_gl_cpp/inputs/KRGCL.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "KRGCL values: "<< KRGCL << std::endl;
  NumericVector KROGCG(1);
  KROGCG[0]  = RcppDeepState_double();
  qs::c_qsave(KROGCG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr2p_gl_cpp/inputs/KROGCG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "KROGCG values: "<< KROGCG << std::endl;
  NumericVector NG(1);
  NG[0]  = RcppDeepState_double();
  qs::c_qsave(NG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr2p_gl_cpp/inputs/NG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NG values: "<< NG << std::endl;
  NumericVector NOG(1);
  NOG[0]  = RcppDeepState_double();
  qs::c_qsave(NOG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr2p_gl_cpp/inputs/NOG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NOG values: "<< NOG << std::endl;
  IntegerVector NP(1);
  NP[0]  = RcppDeepState_int();
  qs::c_qsave(NP,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr2p_gl_cpp/inputs/NP.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NP values: "<< NP << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    kr2p_gl_cpp(SWCON[0],SOIRG[0],SORG[0],SGCON[0],SGCRIT[0],KRGCL[0],KROGCG[0],NG[0],NOG[0],NP[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
