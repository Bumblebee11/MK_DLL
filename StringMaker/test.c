#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StringMaker.h"

//gcc test.c StringMaker.c

int test1()
{
	char * hungary_test = "aaa_bbCccDdd";
	char * anticipated_test = "aaa_bb_ccc_ddd";
	printf("Input is %s\n... ...\n", hungary_test);
	char * result = Hungary2DownLine(hungary_test);
	printf("Mission completed :\nresult is %s \n", result);
	if(strcmp(anticipated_test, result) == 0)	return 1;
	else	return 0;
}

// int test2()
// {
// 	return 0;
// }

// int test3()
// {
// 	return 0;
// }

// int test4()
// {
// 	return 0;
// }

// int test5()
// {
// 	return 0;
// }

// int test6()
// {
// 	return 0;
// }

// int test7()
// {
// 	return 0;
// }

// int test8()
// {
// 	return 0;
// }

// int test9()
// {
// 	return 0;
// }

int main()
{
	if(test1()) printf("********************\ntest1 successed\n********************\n");
	// if(test2()) printf("test2 successed\n");
	// if(test3()) printf("test3 successed\n");
	// if(test4()) printf("test4 successed\n");
	// if(test5()) printf("test5 successed\n");
	// if(test6()) printf("test6 successed\n");
	// if(test7()) printf("test7 successed\n");
	// if(test8()) printf("test8 successed\n");
	// if(test9()) printf("test9 successed\n");
	return 0;
}