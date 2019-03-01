/*
 * util_torque.h
 *
 *  Created on: Apr 6, 2015
 *      Author: hlamontagne
 */

#ifndef UTIL_TORQUE_H_
#define UTIL_TORQUE_H_


void GetPhi(double theta[6], double A[6][16]);
void GetPhiSpherical(double theta[6], double A[6][16]);
void GetPhiSpherical7DOF(double theta[7], double A[7][19]);
void Inverse6x6(double T[6][6], double Tinv[6][6]);
void Inverse7x7(double T[7][7], double Tinv[7][7]);
void Gamma(double Gamma2[6][6], double phia3[6][16], double P[16][16]);
void Gamma7DOF(double Gamma2[7][7], double phia3[7][19], double P[19][19]);
void GetK(double KIdent3[16][6], double phia3[6][16], double P[16][16], double IM[6][6]);
void GetK7DOF(double KIdent3[19][7], double phia3[7][19], double P[19][19], double IM[7][7]);
void GetP(double NewP2[16][16], double phia3[6][16], double P[16][16], double IM[6][6]);
void GetP7DOF(double NewP2[19][19], double phia3[7][19], double P[19][19], double IM[7][7]);
void GetNewParam(double NewParam2[16], double phia3[6][16], double KTemp[16][6], double Tau[6], double ParamT[16]);
void GetNewParam7DOF(double NewParam2[19], double phia3[7][19], double KTemp[19][7], double Tau[7], double ParamT[19]);



#endif /* UTIL_TORQUE_H_ */
