#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

NumericMatrix kr3p_StoneII_So_cpp(double SWCON, double SWCRIT, double SOIRW, double SORW, double SOIRG, double SORG, double SGCON, double SGCRIT, double KRWIRO, double KROCW, double KRGCL, double NW, double NOW, double NG, double NOG, int NP);

TEST(Rrelperm_deepstate_test,kr3p_StoneII_So_cpp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector SWCON(1);
  SWCON[0]  = RcppDeepState_double();
  qs::c_qsave(SWCON,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/SWCON.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SWCON values: "<< SWCON << std::endl;
  NumericVector SWCRIT(1);
  SWCRIT[0]  = RcppDeepState_double();
  qs::c_qsave(SWCRIT,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/SWCRIT.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SWCRIT values: "<< SWCRIT << std::endl;
  NumericVector SOIRW(1);
  SOIRW[0]  = RcppDeepState_double();
  qs::c_qsave(SOIRW,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/SOIRW.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SOIRW values: "<< SOIRW << std::endl;
  NumericVector SORW(1);
  SORW[0]  = RcppDeepState_double();
  qs::c_qsave(SORW,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/SORW.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SORW values: "<< SORW << std::endl;
  NumericVector SOIRG(1);
  SOIRG[0]  = RcppDeepState_double();
  qs::c_qsave(SOIRG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/SOIRG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SOIRG values: "<< SOIRG << std::endl;
  NumericVector SORG(1);
  SORG[0]  = RcppDeepState_double();
  qs::c_qsave(SORG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/SORG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SORG values: "<< SORG << std::endl;
  NumericVector SGCON(1);
  SGCON[0]  = RcppDeepState_double();
  qs::c_qsave(SGCON,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/SGCON.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SGCON values: "<< SGCON << std::endl;
  NumericVector SGCRIT(1);
  SGCRIT[0]  = RcppDeepState_double();
  qs::c_qsave(SGCRIT,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/SGCRIT.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "SGCRIT values: "<< SGCRIT << std::endl;
  NumericVector KRWIRO(1);
  KRWIRO[0]  = RcppDeepState_double();
  qs::c_qsave(KRWIRO,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/KRWIRO.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "KRWIRO values: "<< KRWIRO << std::endl;
  NumericVector KROCW(1);
  KROCW[0]  = RcppDeepState_double();
  qs::c_qsave(KROCW,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/KROCW.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "KROCW values: "<< KROCW << std::endl;
  NumericVector KRGCL(1);
  KRGCL[0]  = RcppDeepState_double();
  qs::c_qsave(KRGCL,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/KRGCL.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "KRGCL values: "<< KRGCL << std::endl;
  NumericVector NW(1);
  NW[0]  = RcppDeepState_double();
  qs::c_qsave(NW,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/NW.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NW values: "<< NW << std::endl;
  NumericVector NOW(1);
  NOW[0]  = RcppDeepState_double();
  qs::c_qsave(NOW,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/NOW.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NOW values: "<< NOW << std::endl;
  NumericVector NG(1);
  NG[0]  = RcppDeepState_double();
  qs::c_qsave(NG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/NG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NG values: "<< NG << std::endl;
  NumericVector NOG(1);
  NOG[0]  = RcppDeepState_double();
  qs::c_qsave(NOG,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/NOG.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NOG values: "<< NOG << std::endl;
  IntegerVector NP(1);
  NP[0]  = RcppDeepState_int();
  qs::c_qsave(NP,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rrelperm/inst/testfiles/kr3p_StoneII_So_cpp/inputs/NP.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "NP values: "<< NP << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    kr3p_StoneII_So_cpp(SWCON[0],SWCRIT[0],SOIRW[0],SORW[0],SOIRG[0],SORG[0],SGCON[0],SGCRIT[0],KRWIRO[0],KROCW[0],KRGCL[0],NW[0],NOW[0],NG[0],NOG[0],NP[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
