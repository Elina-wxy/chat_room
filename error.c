#include"error.h"
 
//往屏幕输出错误原因
void myerror (char *str)
{
	char *msg = myStrError ();
	
	printf("%s: %s\n",str,msg);
	
 
}
 
//输入错误原因
char * myStrError (void)
{
	switch (errno)
	{
		case SOCKET_INIT :
			return "Socket initialization failed";	
		case SOCKET_ACCEPT :
			return "Connect to database fail";
		case CREATE_SQLITE:
			return "Open database fail";
		case SAVE_SQLITE:
			return "Insert data fail";
	}
	
}
