#pragma once
/******************************************************************************/
/* File   : Template.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
//#include "Emo.hpp"
//#include "Table.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define Mat_FixMul(Factor1, Factor2) ((((sint32)(Factor1)) * ((sint32)(Factor2))) >> MAT_FIX_SHIFT)
#define Mat_FixMulScale(Factor1, Factor2, Scale) ((((sint32)(Factor1)) * ((sint32)(Factor2))) >> ((uint32)((sint32)MAT_FIX_SHIFT - (Scale))))
#define MAT_FIX_SHIFT (15u)
#define MAT_FIX_SAT (16u)
#define MAT_ONE_OVER_SQRT_3 (18919u)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
  sint32 IOut;
  sint16 Kp;
  sint16 Ki;
  sint16 IMin;
  sint16 IMax;
  sint16 PiMin;
  sint16 PiMax;
}TMat_Pi;

typedef struct{
  sint32 IOut;
  sint16 Dout;
  sint16 Kp;
  sint16 Ki;
  sint16 Ks;
  sint16 IMin;
  sint16 IMax;
  sint16 PiMin;
  sint16 PiMax;
}TMat_Pi_Windup;

typedef struct{
  sint16 CoefA;
  sint16 CoefB;
  sint16 Min;
  sint16 Max;
  sint32 Out;
}TMat_Lp;

typedef struct{
  sint16 CoefA;
  sint16 CoefB;
  sint32 Out;
}TMat_Lp_Simple;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
#define Mat_ExePi(pPi,Error)                                                   0
#define Mat_ExePi_Windup(pPi,Error)                                            0
#define Mat_ExeLp(pLp,Input)                                                   0
#define Mat_ExeLp_without_min_max(pLp,Input)                                   0
#define Mat_Park(StatCurr,Angle)                                           {0,0}
#define Mat_PolarKartesisch(Amp,Angle)                                     {0,0}
#define Mat_CalcAngleAmp(Stat,pAmp)                                            0
#define Mat_CalcAngle(Stat)                                                    0
#define Mat_CalcAmp(Stat)                                                      0
#define Mat_Ramp(Input,Slewrate,Output)                                        0

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

