#ifndef COMPILER_H
#define COMPILER_H
/******************************************************************************/
/* File   : Compiler.h                                                        */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Compiler_Cfg.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define COMPILER_VENDOR_ID                                                    1u
#define COMPILER_MODULE_ID                                                  198u
#define COMPILER_AR_RELEASE_MAJOR_VERSION                                   (4u)
#define COMPILER_AR_RELEASE_MINOR_VERSION                                   (3u)
#define COMPILER_AR_RELEASE_REVISION_VERSION                                (0u)
#define COMPILER_SW_MAJOR_VERSION                                           (1u)
#define COMPILER_SW_MINOR_VERSION                                           (0u)
#define COMPILER_SW_PATCH_VERSION                                           (0u)

#ifndef NULL_PTR
#define NULL_PTR                                                     ((void *)0)
#endif

#define INLINE                                    __inline
#define LOCAL_INLINE                              static inline
#define FUNC(rettype, memclass)                   __attribute__((section(memclass))) rettype
#define FUNC_P2CONST(rettype, ptrclass, memclass) const rettype*
#define FUNC_P2VAR(rettype, ptrclass, memclass)   rettype*
#define P2VAR(ptrtype, memclass, ptrclass)        ptrtype*
#define P2CONST(ptrtype, memclass, ptrclass)      const ptrtype*
#define CONSTP2VAR(ptrtype, memclass, ptrclass)   ptrtype *const
#define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrtype *const
#define P2FUNC(rettype, ptrclass, fctname)        rettype (*fctname)
#define CONSTP2FUNC(rettype, ptrclass, fctname)   rettype (*const fctname)
#define CONST(type, memclass)                     __attribute__((section(memclass))) const type
#define VAR(vartype, memclass)                    __attribute__((section(memclass))) vartype

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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
#endif

