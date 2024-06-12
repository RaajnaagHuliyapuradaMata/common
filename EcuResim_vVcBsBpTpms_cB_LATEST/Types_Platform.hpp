#pragma once
/******************************************************************************/
/* File   : Types_Platform.hpp                                                */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/*******************************************************************************
Platform types for
--------------------------------------------------------------------------------
Vendor          : Infineon
Platform Family : AURIX(TM) 3G
Platform        : TC4x
Derivative      : TC49x/TC4Dx/TC43x
*******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PLATFORM_VENDOR_ID                                                    1u
#define PLATFORM_MODULE_ID                                                  199u
#define PLATFORM_AR_RELEASE_MAJOR_VERSION                                   (4u)
#define PLATFORM_AR_RELEASE_MINOR_VERSION                                   (2u)
#define PLATFORM_AR_RELEASE_REVISION_VERSION                                (2u)
#define PLATFORM_SW_MAJOR_VERSION                                           (1u)
#define PLATFORM_SW_MINOR_VERSION                                           (0u)
#define PLATFORM_SW_PATCH_VERSION                                           (0u)
#define TRUE                                                                  1u
#define FALSE                                                                 0u
#define CPU_TYPE_8                                                            8u
#define CPU_TYPE_16                                                          16u
#define CPU_TYPE_32                                                          32u
#define MSB_FIRST                                                             0u
#define LSB_FIRST                                                             1u
#define HIGH_BYTE_FIRST                                                       0u
#define LOW_BYTE_FIRST                                                        1u

#define CPU_TYPE                                                     CPU_TYPE_32
#define CPU_BIT_ORDER                                                  LSB_FIRST
#define CPU_BYTE_ORDER                                            LOW_BYTE_FIRST

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef unsigned char                                                   boolean;
typedef signed char                                                       sint8;
typedef unsigned char                                                     uint8;
typedef signed short                                                     sint16;
typedef unsigned short                                                   uint16;
typedef signed long                                                      sint32;
typedef unsigned long                                                    uint32;
typedef signed int                                                  sint8_least;
typedef unsigned int                                                uint8_least;
typedef signed int                                                 sint16_least;
typedef unsigned int                                               uint16_least;
typedef signed int                                                 sint32_least;
typedef unsigned int                                               uint32_least;
typedef float                                                           float32;
typedef double                                                          float64;

#define PLATFORM_SUPPORT_SINT64_UINT64
typedef   signed long long                                               sint64;
typedef unsigned long long                                               uint64;

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

