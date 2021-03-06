/**********************************************************************
* $Id$		template.c			2013-10
*//**
* @file		template.c
* @brief	Use as Template
*			
* @version	1.0
* @date		10. decm. 2013
* @author	s.rezaee ElmoSanaat Reasearch And Development Team
* 
* Copyright(C) 2013, ElmoSanaat.co
* All rights reserved.
*
***********************************************************************
* Software that is described herein is for illustrative purposes only
* which provides customers with programming information regarding the
* products. This software is supplied "AS IS" without any warranties.
* NXP Semiconductors assumes no responsibility or liability for the
* use of the software, conveys no license or title under any patent,
* copyright, or mask work right to the product. NXP Semiconductors
* reserves the right to make changes in the software without
* notification. NXP Semiconductors also make no representation or
* warranty that such application will be suitable for the specified
* use without further testing or modification.
* Permission to use, copy, modify, and distribute this software and its
* documentation is hereby granted, under ElmoSanaat '
* relevant copyright in the software, without fee, provided that it
* is used in conjunction with ElmoSanaat  .  This
* copyright, permission, and disclaimer notice must appear in all copies of
* this code.
**********************************************************************/
#ifndef MEMORY_H
#define MEMORY_H
/* Peripheral group ----------------------------------------------------------- */
/** @addtogroup template
 * @{
 */

#include "includes.h"


/*
*********************************************************************************************************
*                                               DATA TYPES
*********************************************************************************************************
*/
#define MY_SHARED_BUF_NUM_BLKS 5
#define MY_SHARED_BUF_BLK_SIZE 128



/*
*********************************************************************************************************
*                                            GLOBAL VARIABLES
*********************************************************************************************************
*/
extern OS_MEM *HDLCmem;
extern uint8_t HDLCmemBuff[MY_SHARED_BUF_NUM_BLKS][MY_SHARED_BUF_BLK_SIZE];

extern OS_MEM *ZKFINGERmem;
extern INT8U ZKFINGERmemBuff[MY_SHARED_BUF_NUM_BLKS][MY_SHARED_BUF_BLK_SIZE];
/*
*********************************************************************************************************
*                                                 MACRO'S
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
void memoryInit(void);
/*
EOF
*/
#endif

