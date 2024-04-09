#ifndef COMSTACK_TYPES_H
#define COMSTACK_TYPES_H

#include "Std_Types.hpp"
#include "CfgSwcServiceCom.hpp"

#define COMMONASR__COMMON_IMPL_COMSTACKTYPES_VERSION 0x0400
#define COMMONASR__COMMON_IMPL_COMSTACKTYPES_RELEASE_VERSION 0x03

#define COMSTACKTYPE_AR_RELEASE_MAJOR_VERSION      (4u)
#define COMSTACKTYPE_AR_RELEASE_MINOR_VERSION      (0u)
#define COMSTACKTYPE_AR_RELEASE_REVISION_VERSION   (3u)

#if defined COMSTACKTYPE_AR_RELEASE_REVISION_VERSION
#define COMSTACKTYPE_AR_RELEASE_PATCH_VERSION   COMSTACKTYPE_AR_RELEASE_REVISION_VERSION
#define COMTYPE_AR_RELEASE_MAJOR_VERSION        COMSTACKTYPE_AR_RELEASE_MAJOR_VERSION
#define COMTYPE_AR_RELEASE_MINOR_VERSION        COMSTACKTYPE_AR_RELEASE_MINOR_VERSION
#define COMTYPE_AR_RELEASE_REVISION_VERSION     COMSTACKTYPE_AR_RELEASE_REVISION_VERSION
#define COMTYPE_AR_RELEASE_PATCH_VERSION        COMSTACKTYPE_AR_RELEASE_REVISION_VERSION
#endif

#define COMSTACKTYPE_SW_MAJOR_VERSION       (4u)
#define COMSTACKTYPE_SW_MINOR_VERSION       (0u)
#define COMSTACKTYPE_SW_PATCH_VERSION       (3u)
#define COMTYPE_SW_MAJOR_VERSION            COMSTACKTYPE_SW_MAJOR_VERSION
#define COMTYPE_SW_MINOR_VERSION            COMSTACKTYPE_SW_MINOR_VERSION
#define COMTYPE_SW_PATCH_VERSION            COMSTACKTYPE_SW_PATCH_VERSION
#define COMSTACKTYPE_VENDOR_ID              (1u)
#define COMSTACKTYPE_MODULE_ID              (196u)
#define COMTYPE_VENDOR_ID                   COMSTACKTYPE_VENDOR_ID
#define COMTYPE_MODULE_ID                   COMSTACKTYPE_MODULE_ID
#define NTFRSLT_OK                        0x00
#define NTFRSLT_E_NOT_OK                  0x01
#define NTFRSLT_E_TIMEOUT_A               0x02
#define NTFRSLT_E_TIMEOUT_BS              0x03
#define NTFRSLT_E_TIMEOUT_CR              0x04
#define NTFRSLT_E_WRONG_SN                0x05
#define NTFRSLT_E_INVALID_FS              0x06
#define NTFRSLT_E_UNEXP_PDU               0x07
#define NTFRSLT_E_WFT_OVRN                0x08
#define NTFRSLT_E_ABORT                  0x09
#define NTFRSLT_E_NO_BUFFER              0x0A
#define NTFRSLT_E_CANCELATION_OK         0x0B
#define NTFRSLT_E_CANCELATION_NOT_OK     0x0C
#define NTFRSLT_PARAMETER_OK              0x0D
#define NTFRSLT_E_PARAMETER_NOT_OK        0x0E
#define NTFRSLT_E_RX_ON                   0x0F
#define NTFRSLT_E_VALUE_NOT_OK            0x10
#define BUSTRCV_OK         0x00
#define BUSTRCV_E_OK       0x00
#define BUSTRCV_E_ERROR    0x01

typedef P2VAR(uint8, TYPEDEF, AUTOSAR_COMSTACKDATA) SduDataPtrType;

typedef struct{
   SduDataPtrType SduDataPtr;
   PduLengthType SduLength;
}PduInfoType;

typedef enum{
      BUFREQ_OK
   ,  BUFREQ_E_NOT_OK
   ,  BUFREQ_E_BUSY
   ,  BUFREQ_E_OVFL
}BufReq_ReturnType;

typedef uint8 NotifResultType;
typedef uint8 BusTrcvErrorType;
typedef uint8 NetworkHandleType;
typedef uint8 PNCHandleType;

typedef enum{
      TP_DATACONF
   ,  TP_DATARETRY
   ,  TP_CONFPENDING
}TpDataStateType;

typedef struct{
   TpDataStateType TpDataState;
   PduLengthType   TxTpDataCnt;
}RetryInfoType;

typedef enum{
      TP_STMIN
   ,  TP_BS
   ,  TP_BC
}TPParameterType;

#endif

