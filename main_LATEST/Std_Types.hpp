#pragma once
/******************************************************************************/
/* File   : Std_Types.hpp                                                     */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
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

#define _ReSIM                                                            STD_ON

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

