/** @file
 *
 *  @course CS1521
 *  @section 1
 *  @term Spring 2019
 *
 *  Header file for an object thrown on violation of precondition.
 *
 *  Adapted from page 250 in Carrano 7e.
 *
 *  @author Frank M. Carrano
 *  @author Timothy Henry
 *  @author Steve Holtz
 *
 *  @date 08 Mar 2019
 *
 *  @version 7.0 */

#ifndef ZERO_EXCEP_
#define ZERO_EXCEP_

#include <stdexcept>
#include <string>

/** @class DivideByZeroExcep DivideByZeroExcep.h "DivideByZeroExcep.h"
 *
 *  Specification for an object thrown on violation of precondition. */
class DivideByZeroExcep : public std::overflow_error {
public:
   explicit DivideByZeroExcep(const std::string& message = "");

   virtual ~DivideByZeroExcep() noexcept = default; //throw();
};

#endif

