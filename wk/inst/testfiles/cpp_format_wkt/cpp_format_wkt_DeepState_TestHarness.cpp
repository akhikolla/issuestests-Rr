#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

Rcpp::CharacterVector cpp_format_wkt(CharacterVector wkt, int maxCoords);

TEST(wk_deepstate_test,cpp_format_wkt_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  CharacterVector wkt  = RcppDeepState_CharacterVector();
  qs::c_qsave(wkt,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/wk/inst/testfiles/cpp_format_wkt/inputs/wkt.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "wkt values: "<< wkt << std::endl;
  IntegerVector maxCoords(1);
  maxCoords[0]  = RcppDeepState_int();
  qs::c_qsave(maxCoords,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/wk/inst/testfiles/cpp_format_wkt/inputs/maxCoords.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "maxCoords values: "<< maxCoords << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_format_wkt(wkt,maxCoords[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
