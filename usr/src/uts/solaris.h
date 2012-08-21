/* $FreeBSD$ */

#ifndef	_SOLARIS_H_
#define	_SOLARIS_H_

//#include <sys/ccompile.h>

#include <fcntl.h>

#define	NOTE(s)

int mkdirp(const char *, mode_t);



#define SCNd8       "d"
#define SCNi8       "i"
#define SCNo8       "o"
#define SCNu8       "u"
#define SCNx8       "x"

#define SCNd16        "hd"
#define SCNi16        "hi"
#define SCNo16        "ho"
#define SCNu16        "hu"
#define SCNx16        "hx"

#define SCNd32        "ld"
#define SCNi32        "li"
#define SCNo32        "lo"
#define SCNu32        "lu"
#define SCNx32        "lx"

#define SCNd64       "d"
#define SCNi64       "i"
#define SCNo64       "o"
#define SCNu64       "u"
#define SCNx64       "x"

#endif	/* !_SOLARIS_H_ */
