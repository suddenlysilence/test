

# include  <stdio.h>
# include "test_define.h"

//#define CONFIG_TEST

#if defined( CONFIG_TEST)

# define TEST     1

#else


#define TEST    2

#endif



/*
void main()
{
	unsigned char data = 'a';
	char  test = 0;
	data = data +1;
	test = test -2;
	printf("data == %d\r\n",data);
	printf("test == %d\r\n",test);
}

*/

void test(int data)
{
	printf("-----function:%s--------- data:%d -------line:%d--\r\n",__FUNCTION__,data, __LINE__);	
	
}


void function(void (*callback) (int))
{
	
	printf("-----function:%s----------------line:%d--\r\n",__FUNCTION__, __LINE__);	
	test(20);
	
}

void  main()
{
	
	function(test);
	
	
	
	
}