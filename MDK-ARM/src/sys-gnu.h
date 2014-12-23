/* errno is not a global variable, because that would make using it
   non-reentrant.  Instead, its address is returned by the function
   __errno.  */

#ifndef _SYS_ERRNO_H_
#define _SYS_ERRNO_H_

#include <stdbool.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define	ENOEXEC		8	/* Exec format error */
#define	ENOENT		2	/* No such file or directory */
#define	EIO			5	/* I/O error */
#define	E2BIG		7	/* Arg list too long */
#define	EEXIST		17	/* File exists */

#define ENETDOWN	115	/* Network interface is not configured */

#define M_PI		3.14159265358979323846

#define bzero(dst, size)	memset(dst, 0, size)

#define _param_start	Image$$param$$Base
#define _param_stop		Image$$param$$Limit

#define _log_start		Image$$log$$Base
#define _log_stop		Image$$log$$Limit

#ifdef __cplusplus
}
#endif
#endif /* _SYS_ERRNO_H */
