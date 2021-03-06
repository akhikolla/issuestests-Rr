#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double distanceEarth(double lat1d, double lon1d, double lat2d, double lon2d);

TEST(Rvoterdistance_deepstate_test,distanceEarth_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector lat1d(1);
  lat1d[0]  = RcppDeepState_double();
  qs::c_qsave(lat1d,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rvoterdistance/inst/testfiles/distanceEarth/inputs/lat1d.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lat1d values: "<< lat1d << std::endl;
  NumericVector lon1d(1);
  lon1d[0]  = RcppDeepState_double();
  qs::c_qsave(lon1d,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rvoterdistance/inst/testfiles/distanceEarth/inputs/lon1d.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lon1d values: "<< lon1d << std::endl;
  NumericVector lat2d(1);
  lat2d[0]  = RcppDeepState_double();
  qs::c_qsave(lat2d,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rvoterdistance/inst/testfiles/distanceEarth/inputs/lat2d.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lat2d values: "<< lat2d << std::endl;
  NumericVector lon2d(1);
  lon2d[0]  = RcppDeepState_double();
  qs::c_qsave(lon2d,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/Rvoterdistance/inst/testfiles/distanceEarth/inputs/lon2d.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "lon2d values: "<< lon2d << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    distanceEarth(lat1d[0],lon1d[0],lat2d[0],lon2d[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
