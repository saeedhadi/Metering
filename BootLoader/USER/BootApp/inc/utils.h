#ifndef __UTILS_H
#define __UTILS_H

#include "lpc_types.h"

/*---------------------------------------------------------------------------*/
#define CNTLQ       0x11
#define CNTLS       0x13
#define DEL         0x7F
#define BACKSPACE   0x08
#define CR          0x0D
#define LF          0x0A
#define ESC         0x1B

/* Command definitions structure. */
typedef struct scmd {
   char val[8];
   void (*func)(char *par);
} SCMD;

extern int  getkey (void);
extern void init_serial (void);
extern int sendchar (int ch) ;
extern int getkey (void);
void deinit_serial(void);
int RxDataReady( void );
extern BOOL_32 getline (char *lp, UNS_32 n);
extern int strtoul(char *s);
extern int WaitEventWithTimeout( int ( *event ) ( void ) , int cond , unsigned long ms );
/*---------------------------------------------------------------------------*/


#endif

