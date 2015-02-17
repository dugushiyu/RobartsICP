/*=========================================================================

Program:   Robarts ICP
Module:    $RCSfile: tukey_pointRegistration.h,v $
Creator:   Elvis C. S. Chen <chene@robarts.ca>
Language:  C++
Author:    $Author: Elvis Chen $
Date:      $Date: 2014/03/04 10:34:30 $
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
 * FILE:  tukey_pointRegistration.h
 *
 * Elvis C.S. Chen
 * chene@robarts.ca
 *
 * June 25, 2010
 *
 * Implementation of the robust point based registration using
 * Tukey biweights
 *
 */


#ifndef __TUKEY_POINTREGISTRATION_H__
#define __TUKEY_POINTREGISTRATION_H__

#include "matrix.h"


// ordinary solution of Orthogonal Procrustes Problem using SVD
void point_register( Matrix<double> &x, Matrix<double> &y,
			         Matrix<double> &Q,
			         Vec<double> &t,
			         double &FRE, double threshold,
                     Vec<double> &FREMag );
//
//
void robust_heterogeneous_point_register( Matrix<double> &l, 
                                          Matrix<double> &r,
                                          Matrix<double> &R,
                                          Vec<double> &t,
                                          double &rms,
                                          Vec<double> &residMag,
                                          double sigma );
//
// Tukey's biweight
//
Vec<double> TukeyRho( Vec<double> &z, double sigma );
Vec<double> TukeyPsi( Vec<double> &z, double sigma );
Vec<double> TukeyG( Vec<double> &z, double sigma );

#endif // of __TUKEY_POINTREGISTRATION_H__