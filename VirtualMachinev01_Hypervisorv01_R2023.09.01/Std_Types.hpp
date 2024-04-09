#ifndef STD_TYPES_H
#define STD_TYPES_H
/******************************************************************************/
/* File   : Std_Types.h                                                       */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright � 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* git@github.com:RaajnaagHuliyapuradaMata/<module_name>.git                  */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Platform_Types.hpp"
#include "Compiler.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
//#define ReSim

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
#define E_OK                                                                  0u
#define E_NOT_OK                                                              1u
#define E_PENDING                                                             2u

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED
typedef uint8 StatusType;
#endif

typedef uint8 Std_ReturnType;

typedef struct{
   uint16 vendorID;
   uint16 moduleID;
   uint8  sw_major_version;
   uint8  sw_minor_version;
   uint8  sw_patch_version;
}Std_VersionInfoType;

typedef uint8 ComM_UserHandleType; //TBD: Move to ComM_Types.h or ComStack_Types.h
typedef uint8 ComM_ModeType;
typedef uint8 ComM_InhibitionStatusType;

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
