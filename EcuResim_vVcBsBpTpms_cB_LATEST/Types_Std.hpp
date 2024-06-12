#pragma once
/******************************************************************************/
/* File   : Types_Std.hpp                                                     */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define STD_TYPES_VENDOR_ID                                                 (1u)
#define STD_TYPES_MODULE_ID                                               (197u)
#define COMMONASR__COMMON_IMPL_STDTYPES_VERSION                           0x0001
#define COMMONASR__COMMON_IMPL_STDTYPES_RELEASE_VERSION                     0x01
#define STD_TYPES_AR_RELEASE_MAJOR_VERSION                                  (4u)
#define STD_TYPES_AR_RELEASE_MINOR_VERSION                                  (2u)
#define STD_TYPES_AR_RELEASE_REVISION_VERSION                               (2u)
#define STD_TYPES_SW_MAJOR_VERSION                                          (1u)
#define STD_TYPES_SW_MINOR_VERSION                                          (0u)
#define STD_TYPES_SW_PATCH_VERSION                                          (0u)

#define STD_VENDOR_ID                                        STD_TYPES_VENDOR_ID
#define STD_MODULE_ID                                        STD_TYPES_MODULE_ID
#define STD_AR_RELEASE_MAJOR_VERSION          STD_TYPES_AR_RELEASE_MAJOR_VERSION
#define STD_AR_RELEASE_MINOR_VERSION          STD_TYPES_AR_RELEASE_MINOR_VERSION
#define STD_AR_RELEASE_REVISION_VERSION    STD_TYPES_AR_RELEASE_REVISION_VERSION
#define STD_SW_MAJOR_VERSION                          STD_TYPES_SW_MAJOR_VERSION
#define STD_SW_MINOR_VERSION                          STD_TYPES_SW_MINOR_VERSION
#define STD_SW_PATCH_VERSION                          STD_TYPES_SW_PATCH_VERSION

#define STD_HIGH                                                              1u
#define STD_LOW                                                               0u
#define STD_ACTIVE                                                            1u
#define STD_IDLE                                                              0u
#define STD_ON                                                                1u
#define STD_OFF                                                               0u
#define E_OK                                         ((Type_Std_tValueReturn)0u)
#define E_NOT_OK                                     ((Type_Std_tValueReturn)1u)
#define E_PENDING                                    ((Type_Std_tValueReturn)2u)

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgProject.hpp"
#include "Types_Platform.hpp"
#include "Compiler.hpp"

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef uint8 StatusType;
typedef uint8 Type_Std_tValueReturn;

typedef struct{
   uint16 vendorID;
   uint16 moduleID;
   uint8  sw_major_version;
   uint8  sw_minor_version;
   uint8  sw_patch_version;
}Type_Std_InfoVersion;

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
