#ifndef STD_TYPES_H
#define STD_TYPES_H
/******************************************************************************/
/* File   : Std_Types.h                                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Platform_Types.h"
#include "Compiler.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COMMONASR__COMMON_IMPL_STDTYPES_VERSION                           0x0304
#define COMMONASR__COMMON_IMPL_STDTYPES_RELEASE_VERSION                     0x01

#define STD_TYPES_AR_RELEASE_MAJOR_VERSION                                  (4u)
#define STD_TYPES_AR_RELEASE_MINOR_VERSION                                  (0u)
#define STD_TYPES_AR_RELEASE_PATCH_VERSION                                  (1u)
#define STD_TYPES_SW_MAJOR_VERSION                                          (3u)
#define STD_TYPES_SW_MINOR_VERSION                                          (4u)
#define STD_TYPES_SW_PATCH_VERSION                                          (1u)
#define STD_HIGH                                                              1u
#define STD_LOW                                                               0u
#define STD_ACTIVE                                                            1u
#define STD_IDLE                                                              0u
#define STD_ON                                                                1u
#define STD_OFF                                                               0u

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED
#define E_OK                                                                  0u
#define E_NOT_OK                                                              1u
typedef unsigned char StatusType;
#endif

typedef uint8 Std_ReturnType;

typedef struct{
   uint16 vendorID;
   uint16 moduleID;
   uint8  sw_major_version;
   uint8  sw_minor_version;
   uint8  sw_patch_version;
}Std_VersionInfoType;

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
#endif

