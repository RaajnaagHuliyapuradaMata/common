#pragma once
/******************************************************************************/
/* File   : Module.hpp                                                        */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"

#include "infServiceEcuMClient.hpp"
#include "infServiceDcmClient.hpp"
#include "infServiceDetClient.hpp"
#include "infServiceSchMClient.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class abstract_module:
      public infServiceDcmClient
   ,  public infServiceEcuMClient
   ,  public infServiceSchMClient
{
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
   public:
      const CfgModule_TypeAbstract* lptrCfg = (CfgModule_TypeAbstract*)NULL_PTR;

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
   public:
      Std_TypeReturn IsInitDone = E_NOT_OK;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

