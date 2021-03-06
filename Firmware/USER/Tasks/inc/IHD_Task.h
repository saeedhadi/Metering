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
#ifndef  IHDTASK_H
#define  IHDTASK_H

/*
//-------- <<< Use Configuration Wizard in Context Menu >>> ------------------
*/
#include "includes.h"


/*
*********************************************************************************************************
*                                                 MACRO'S
*********************************************************************************************************
*/

//<o> Limit and manage load Task Priority
#define IHD_TASK_PRIO 13
//<o> Daily Meter TaskStack Size
#define IHD_STK_SIZE 64



/*
*********************************************************************************************************
*                                               DATA TYPES
*********************************************************************************************************
*/

typedef struct
{
	uint8_t str[100];
	uint16_t len;
}mesage_t;
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
uint8_t IHD_WaitForSignal(uint8_t *msg);
void IHD_initial(void);

#endif

/*
EOF
*/

