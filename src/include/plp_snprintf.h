/***************************************************************************
 * LPRng - An Extended Print Spooler System
 *
 * Copyright 1988-2002, Patrick Powell, San Diego, CA
 *     papowell@lprng.com
 * See LICENSE for conditions of use.
 * $Id: plp_snprintf.h,v 1.36 2002/08/06 19:14:16 papowell Exp $
 ***************************************************************************/



#ifndef _PLP_SNPRINTF_
#define _PLP_SNPRINTF_

/* PROTOTYPES */
/* VARARGS3 */
#ifdef HAVE_STDARGS
 int plp_vsnprintf(char *str, size_t count, const char *fmt, va_list args)
#else
 int plp_vsnprintf(char *str, size_t count, const char *fmt, va_list args)
#endif

;
/* VARARGS3 */
#ifdef HAVE_STDARGS
 int plp_unsafe_vsnprintf(char *str, size_t count, const char *fmt, va_list args)
#else
 int plp_unsafe_vsnprintf(char *str, size_t count, const char *fmt, va_list args)
#endif
;
/* VARARGS3 */
#ifdef HAVE_STDARGS
 int plp_snprintf (char *str,size_t count,const char *fmt,...)
#else
 int plp_snprintf (va_alist) va_dcl
#endif
;
/* VARARGS3 */
#ifdef HAVE_STDARGS
 int plp_unsafe_snprintf (char *str,size_t count,const char *fmt,...)
#else
 int plp_unsafe_snprintf (va_alist) va_dcl
#endif
;

#endif
