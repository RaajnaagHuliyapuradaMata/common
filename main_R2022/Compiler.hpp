#pragma once
/******************************************************************************/
/* File   : Compiler.hpp                                                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define AUTOMATIC
#define TYPEDEF
#define NULL_PTR                                                     ((void *)0)
#define ISERVICENMCALLINE                                                            inline
#define LOCAL_ISERVICENMCALLINE                                               static inline

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#define VAR(type, memclass)                       memclass type
#define CONST(type, memclass)                     memclass const type
#define FUNC(rettype, memclass)                   memclass rettype
#define P2VAR(type, memclass, ptrclass)           memclass ptrclass type*
#define P2CONST(type, memclass, ptrclass)         memclass const ptrclass type*
#define P2FUNC(rettype, ptrlass, fctname)         ptrclass rettype (* fctname)
#define FUNC_P2CONST(rettype, ptrclass, memclass) const ptrclass rettype * memclass
#define FUNC_P2VAR(rettype, ptrclass, memclass)   ptrclass rettype * memclass
#define CONSTP2VAR(ptrtype, memclass, ptrclass)   ptrclass ptrtype* const memclass
#define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrclass ptrtype* const memclass
#define CONSTP2FUNC(rettype, ptrlass, fctname)    ptrclass rettype (* const fctname)

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

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

