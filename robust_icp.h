/*=========================================================================

Program:   Robarts ICP
Module:    $RCSfile: robust_icp.h,v $
Creator:   Elvis C. S. Chen <chene@robarts.ca>
Language:  C++
Author:    $Author: Elvis Chen $
Date:      $Date: 2014/03/04 12:50:30 $
Version:   $Revision: 0.99 $

==========================================================================

This is an open-source copyright license based on BSD 2-Clause License,
see http://opensource.org/licenses/BSD-2-Clause

Copyright (c) 2013, Elvis Chia-Shin Chen
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

- Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.
- Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

=========================================================================*/

/*
 * FILE:  robust_icp.h
 *
 * Elvis C.S. Chen
 * chene@robarts.ca
 *
 * June 25, 2010
 *
 * rigid Iterative Closest Point algorithm.  The underlying point-to-point
 * registration is based on rigid SVD solution.
 *
 *
 */

#ifndef __ROBUST_ICP_H__
#define __ROBUST_ICP_H__

#include "matrix.h"

//
// Robust ICP, Iterative Closest Point using tukey-horn as the basis
// for point-based registration
//
// assumes isotropic and homogeneous weightings,
// i.e. loop over the regular SVD solution
//
// assumes R and t provided the initial guess
//
void robust_icp( Matrix<double> &points, Matrix<double> &model,
		 Matrix<double> &R, Vec<double> &t,
		 double &rms, double tau );


#endif // of __ROBUST_ICP_H__
