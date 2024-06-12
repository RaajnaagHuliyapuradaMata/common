#pragma once
/******************************************************************************/
/* File   : ComStackTypes.hpp                                                 */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MaxIdPdu                                                             256 //TBD: To be generated in CfgComStack.hpp
#define MaxLengthPdu                                                         256 //TBD: To be generated in CfgComStack.hpp

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef uint8 TypeIdPdu;         // 0-MaxIdPdu     (accordingly extend to uint16)
typedef uint8 TypeLengthPdu;     // 0-MaxLengthPdu (accordingly extend to uint16)
typedef uint8 TypeHandlePNC;     // to store partial network cluster id
typedef uint8 TypeHandleNetwork; // to store communication channel id
typedef uint8 TypeIdConfigIcom;  // Icom configuration id, 0 = default. More than one config set possible

typedef enum{
      eParameterTpStMin = 0      // Seperation time
   ,  eParameterTpBS             // Block size
   ,  eParameterTpBC             // Bandwidth control, used in flexray
}TypeParameterTp;

typedef enum{
      eReturnReqBufOK = 0
   ,  eReturnReqBufNotOK
   ,  eReturnReqBufBusy
   ,  eReturnReqBufOfl
}TypeReturnReqBuf;

typedef enum{
      eStateDataTpConf = 0
   ,  eStateDataTpRetry
   ,  eStateDataTpConfPending
}TypeStateDataTp;

typedef enum{
      eErrorSwitchIcomOK = 0
   ,  eErrorSwitchIcomFailed
}TypeErrorSwitchIcom;

typedef struct{
   uint8*        ptrDataSdu;
   uint8*        ptrDataMeta;
   TypeLengthPdu LengthPdu;
}TypeInfoPdu;

typedef struct{
   TypeStateDataTp StatueDataTp;
   TypeLengthPdu   LengthPdu;
}TypeInfoRetry;

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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

