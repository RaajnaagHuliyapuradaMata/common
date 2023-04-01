#pragma once
/******************************************************************************/
/* File   : Std_Types.hpp                                                     */
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
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
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
#define STD_AR_RELEASE_VERSION_MAJOR                                           4
#define STD_AR_RELEASE_VERSION_MINOR                                           3
#define STD_LOW                                                                0
#define STD_HIGH                                                               1
#define STD_IDLE                                                               0
#define STD_ACTIVE                                                             1
#define STD_OFF                                                                0
#define STD_ON                                                                 1

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      E_OK     = 0
   ,  E_NOT_OK = 1
}Std_TypeReturn;

typedef struct{
   uint8 u8ArVersionMajor;
   uint8 u8ArVersionMinor;
   uint8 u8IDVendor;
   uint8 u8IDModule;
   uint8 u8IDInstance;
   uint8 u8SwVersionMajor;
   uint8 u8SwVersionMinor;
   uint8 u8SwVersionPatch;
}Std_TypeVersionInfo;

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

