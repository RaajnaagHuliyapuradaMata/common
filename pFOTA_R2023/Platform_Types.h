#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H
/******************************************************************************/
/* File   : Platform_Types.h                                                  */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
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
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* git@github.com:RaajnaagHuliyapuradaMata/<module_name>.git                  */
/*                                                                            */
/******************************************************************************/

/*******************************************************************************
Platform types for
--------------------------------------------------------------------------------
Vendor          : 
Platform Family : 
Platform        : 
Derivative      : 
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
#define PLATFORM_AR_RELEASE_MINOR_VERSION                                   (3u)
#define PLATFORM_AR_RELEASE_REVISION_VERSION                                (0u)
#define PLATFORM_SW_MAJOR_VERSION                                           (1u)
#define PLATFORM_SW_MINOR_VERSION                                           (0u)
#define PLATFORM_SW_PATCH_VERSION                                           (0u)

#ifndef TRUE
#define TRUE                                                                  1u
#endif

#ifndef FALSE
#define FALSE                                                                 0u
#endif

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

