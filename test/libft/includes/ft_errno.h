/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errno.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 18:44:29 by mdeken            #+#    #+#             */
/*   Updated: 2016/10/19 19:16:45 by mdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	FT_EPERM		: Operation not permitted
**	FT_ENOENT		: No such file or directory
**	FT_ESRCH		: No such process
**	FT_EINTR		: Interrupted sys call
**	FT_EIO			: Input/output error
**	FT_ENXIO		: Device not configure
**	FT_E2BIG		: Argument list too long
**	FT_ENOEXEC		: Exec format error
**	FT_EBADF		: Bad file descriptor
**	FT_ENOMEM		: Cannot allocate memory
**	FT_EACCESS		: Permission denied
**	FT_EFAULT		: Bad access
**	FT_EEXIST		: File exists
**	FT_ENOTDIR		: Not a directory
**	FT_ISDIR		: Is a directory
**	FT_EINVAL		: Invalid argument
**	FT_ENFILE		: Too many open file in system
**	FT_EMFILE		: Too many open file
**	FT_ETXTBSY		: Text file busy
**	FT_EFBIG		: File too large
**	FT_ENOSPC		: No space left on device
**	FT_EROFS		: Read-only file system
**	FT_EPIPE		: Broken pipe
**	FT_EAGAIN		: Resource temporarily unavailable
**	FT_EWOULDBLOCK	: Operation would block
**	FT_ENETDOWN		: Network is down
**	FT_ENETUNREACH	: Network is unreachable
**	FT_ECONNRESET	: Connection reset by peer
**	FT_ELOOP		: Too many levels of symbolic links
**	FT_ENAMETOOLONG	: File name too long
**	FT_EDQUOT		: Disk quota exceeded
**	FT_EOVERFLOW	: Value too large to be stored in data type
**	FT_EOPNOTSUPP	: Operation not supported on socket
*/

#ifndef FT_ERRNO_H
# define FT_ERRNO_H

# define	FT_EPERM		1
# define	FT_ENOENT		2
# define	FT_ESRCH		3
# define	FT_EINTR		4
# define	FT_EIO			5
# define	FT_ENXIO		6
# define	FT_E2BIG		7
# define	FT_ENOEXEC		8
# define	FT_EBADF		9
# define	FT_ENOMEM		12
# define	FT_EACCES		13
# define	FT_EFAULT		14
# define	FT_EEXIST		17
# define	FT_ENOTDIR		20
# define	FT_EISDIR		21
# define	FT_EINVAL		22
# define	FT_ENFILE		23
# define	FT_EMFILE		24
# define	FT_ETXTBSY		26
# define	FT_EFBIG		27
# define	FT_ENOSPC		28
# define	FT_EROFS		30
# define	FT_EPIPE		32
# define	FT_EAGAIN		35
# define	FT_EWOULDBLOCK	FT_EAGAIN
# define	FT_ENETDOWN		50
# define	FT_ENETUNREACH	51
# define	FT_ECONNRESET	54
# define	FT_ELOOP		62
# define	FT_ENAMETOOLONG	63
# define	FT_EDQUOT		69
# define	FT_EOVERFLOW	84
# define	FT_EOPNOTSUPP	102

#endif
