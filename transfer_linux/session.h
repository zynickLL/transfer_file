#ifndef _SESSION_H_
#define _SESSION_H_

#include <pthread.h>

class Session
{
public :
	Session();
	virtual ~Session();
	unsigned int alloc_sessionid();

private :
	unsigned int session_id;
	pthread_mutex_t mutex;
};

#endif

