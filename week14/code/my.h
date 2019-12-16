#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include<signal.h>
#include<sys/param.h>
#include<sys/stat.h>
#include<time.h>
#include<string.h>
#include<errno.h>
#include<fcntl.h>
#include<signal.h>
#include<time.h>
#include<sys/wait.h>
#include<pthread.h>
#include<sys/time.h>
#define check_error(return_val,msg){\
		if(return_val !=0){\
			fprintf(stderr,"%s:%s\n",msg,strerrir(return_val));\
		exit(-1);}\
}

#define err_exit(MESSAGE)( \
	perror(MESSAGE),\
	exit(1)\
)

