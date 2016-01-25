/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "sort.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

sortstrings *
sort_1(sortstrings *argp, CLIENT *clnt)
{
	static sortstrings clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, SORT,
		(xdrproc_t) xdr_sortstrings, (caddr_t) argp,
		(xdrproc_t) xdr_sortstrings, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
