
/*
 * Copyright (C) 2000-2001 QuantLib Group
 *
 * This file is part of QuantLib.
 * QuantLib is a C++ open source library for financial quantitative
 * analysts and developers --- http://quantlib.org/
 *
 * QuantLib is free software and you are allowed to use, copy, modify, merge,
 * publish, distribute, and/or sell copies of it under the conditions stated
 * in the QuantLib License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the license for more details.
 *
 * You should have received a copy of the license along with this file;
 * if not, contact ferdinando@ametrano.net
 * The license is also available at http://quantlib.org/LICENSE.TXT
 *
 * The members of the QuantLib Group are listed in the Authors.txt file, also
 * available at http://quantlib.org/Authors.txt
*/


/*! \file standardfdmodel.hpp
    \brief Defines the standard finite-differences model

    $Id$
*/

// $Source$
// $Log$
// Revision 1.3  2001/07/25 15:47:27  sigmud
// Change from quantlib.sourceforge.net to quantlib.org
//
// Revision 1.2  2001/05/24 15:38:08  nando
// smoothing #include xx.hpp and cutting old Log messages
//

#ifndef quantlib_standard_finite_differences_model_h
#define quantlib_standard_finite_differences_model_h

#include "ql/FiniteDifferences/finitedifferencemodel.hpp"
#include "ql/FiniteDifferences/cranknicolson.hpp"

namespace QuantLib {

    namespace FiniteDifferences {

        //! default choice for finite-difference model
        typedef FiniteDifferenceModel<
                            CrankNicolson<TridiagonalOperator>  >
                                        StandardFiniteDifferenceModel;
    }

}


#endif

