#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

double energy_calc_CPP(NumericVector wind_speed, NumericVector rotor_radius, NumericVector air_rh);

TEST(windfarmGA_deepstate_test,energy_calc_CPP_test){
  RInside R;
  std::cout << "input starts" << std::endl;
  NumericVector wind_speed  = RcppDeepState_NumericVector();
  qs::c_qsave(wind_speed,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/windfarmGA/inst/testfiles/energy_calc_CPP/inputs/wind_speed.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "wind_speed values: "<< wind_speed << std::endl;
  NumericVector rotor_radius  = RcppDeepState_NumericVector();
  qs::c_qsave(rotor_radius,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/windfarmGA/inst/testfiles/energy_calc_CPP/inputs/rotor_radius.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "rotor_radius values: "<< rotor_radius << std::endl;
  NumericVector air_rh  = RcppDeepState_NumericVector();
  qs::c_qsave(air_rh,"/home/akhila/R/x86_64-pc-linux-gnu-library/3.6/RcppDeepState/extdata/issuestests/windfarmGA/inst/testfiles/energy_calc_CPP/inputs/air_rh.qs",
		"high", "zstd", 1, 15, true, 1);
  std::cout << "air_rh values: "<< air_rh << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    energy_calc_CPP(wind_speed,rotor_radius,air_rh);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}
