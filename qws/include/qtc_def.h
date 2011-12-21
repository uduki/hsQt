/////////////////////////////////////////////////////////////////////////////
//      
//      File      : qtc_def.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:51
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#ifndef __QTC_DEF_H
#define __QTC_DEF_H

#define from_method(txt) QString::fromWCharArray(txt)

#define EXPORT extern "C"

#ifdef _WIN32
  #define QTCEXPORT(TYPE,FUNC_NAME) __declspec(dllexport) TYPE __cdecl FUNC_NAME
  #undef EXPORT
  #define EXPORT extern "C" __declspec(dllexport) 
#else
  #define QTCEXPORT(TYPE,FUNC_NAME) TYPE FUNC_NAME
#endif

#include <qpointer.h>

#endif /* #ifndef __QTC_DEF_H */
