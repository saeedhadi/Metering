/**********************************************************************
* $Id$		LimitAndManageBar.h			2013-12-15
*//**
* @file		LimitAndManageBar.h
* @brief	Contains the defines and function prototypes for finger reader
* @version	1.0
* @date		28. Decm. 2013
* @author	
* 
**********************************************************************/

/* Peripheral group ----------------------------------------------------------- */
/** @addtogroup CAN
 * @{
 */
#ifndef LIMITANDMANAGEBAR_H
#define  LIMITANDMANAGEBAR_H

/*
//-------- <<< Use Configuration Wizard in Context Menu >>> ------------------
*/
#include "includes.h"


/*
*********************************************************************************************************
*                                                 MACRO'S
*********************************************************************************************************
*/
#define NUM_OF_TIMES 3
//<o> Limit and manage load Task Priority
#define LIMIT_LOUAD_TASK_PRIO 12
//<o> Daily Meter TaskStack Size
#define LIMIT_LOUAD_STK_SIZE 64



/*
*********************************************************************************************************
*                                               DATA TYPES
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                            GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          GPIO PIN DEFINITIONS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void LimitAndManageBar_taskCreate(void);
void LimitAndManageBar_initial(void);
uint8_t LimitManageWaitForSignal(uint8_t *err);
void LimitManageSendEnd(void);
void LimitManageSendStart(void);
#endif

/*
EOF
*/

