/***************************************************************************
 * LPRng - An Extended Print Spooler System
 *
 * Copyright 1988-2002, Patrick Powell, San Diego, CA
 *     papowell@lprng.com
 * See LICENSE for conditions of use.
 * $Id: accounting.h,v 1.36 2002/08/06 19:14:15 papowell Exp $
 ***************************************************************************/



#ifndef _ACCOUNTING_H_
#define _ACCOUNTING_H_ 1

/* PROTOTYPES */
int Do_accounting( int end, char *command, struct job *job, int timeout );

#endif
