#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

List cpp_coords_polygon_translate_wksxp(NumericVector x, NumericVector y, NumericVector z, NumericVector m, IntegerVector featureId, IntegerVector ringId);

TEST(wkutils_deepstate_test,cpp_coords_polygon_translate_wksxp_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector x  = RcppDeepState_NumericVector();
  qs::c_qsave(x,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/wkutils/inst/testfiles/cpp_coords_polygon_translate_wksxp/inputs/x.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "x values: "<< x << std::endl;
  NumericVector y  = RcppDeepState_NumericVector();
  qs::c_qsave(y,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/wkutils/inst/testfiles/cpp_coords_polygon_translate_wksxp/inputs/y.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "y values: "<< y << std::endl;
  NumericVector z  = RcppDeepState_NumericVector();
  qs::c_qsave(z,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/wkutils/inst/testfiles/cpp_coords_polygon_translate_wksxp/inputs/z.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "z values: "<< z << std::endl;
  NumericVector m  = RcppDeepState_NumericVector();
  qs::c_qsave(m,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/wkutils/inst/testfiles/cpp_coords_polygon_translate_wksxp/inputs/m.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "m values: "<< m << std::endl;
  IntegerVector featureId  = RcppDeepState_IntegerVector();
  qs::c_qsave(featureId,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/wkutils/inst/testfiles/cpp_coords_polygon_translate_wksxp/inputs/featureId.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "featureId values: "<< featureId << std::endl;
  IntegerVector ringId  = RcppDeepState_IntegerVector();
  qs::c_qsave(ringId,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/wkutils/inst/testfiles/cpp_coords_polygon_translate_wksxp/inputs/ringId.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "ringId values: "<< ringId << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_coords_polygon_translate_wksxp(x,y,z,m,featureId,ringId);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
