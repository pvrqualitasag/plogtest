#include <Rcpp.h>
using namespace Rcpp;

#include <plog/Log.h> // Step1: include the header.

//
// Hello - a minimal introduction sample, shows the basic 3 steps to start using plog.
//
// [[Rcpp::export]]
int plogtest_main()
{
  plog::init(plog::debug, "Hello.txt"); // Step2: initialize the logger.

  // Step3: write log messages using a special macro. There are several log macros, use the macro you liked the most.

  LOGD << "Hello log!"; // short macro
  LOG_DEBUG << "Hello log!"; // long macro
  LOG(plog::debug) << "Hello log!"; // function-style macro

  return 0;
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically
// run after the compilation.
//

/*** R
plogtest_main()
*/
