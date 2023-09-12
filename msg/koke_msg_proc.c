#include <stdio.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <rpc/rpc.h>
#define _RPCGEN_SVC
#include "koke_msg.h"

char **convmessage_1_svc(msg, UNUSED)
char **msg; struct svc_req *UNUSED;
{
	char *s;
	s = *msg;
	while (*s != '\0')
	{
		*s = toupper(*s);
		s++;
	}
	return (msg);
}
