#include <stdio.h>
#include <string.h>

#ifndef USER_COM_ENA
	#define USER_COM_ENA
#endif

#include "exer_com.h"

int main(int argv, char *argc[])
{
	ST_EXER	st_val [2] = {{'1','2',"Good morning!"},{'3','4',"Good afternoon!"}};
	ST_EXER *st_val_p = &st_val;

	//char* str;
	//str="This is a pen!";


	printf("*** init ****\n");

	printf("struct from=%c\n", st_val_p->from);
	printf("struct to=%c\n", st_val_p->to);
	printf("struct msg=%s\n",st_val_p->msg);

	st_val_p +=1;

	printf("struct from=%c\n",st_val_p->from);
	printf("struct to=%c\n", st_val_p->to);
	printf("struct msg=%s\n",st_val_p->msg);

	st_val_p -=1;


	printf("*** Modify ****\n");


	printf("struct from=%c\n", st_val_p->from);
	printf("struct to=%c\n", st_val_p->to);
	printf("struct msg=%s\n",st_val_p->msg);

	st_val_p +=1;

	st_val_p->from = 'A';
	st_val_p->to = 'B';
	
	strcpy(st_val_p->msg,"This is a pen!");


	printf("struct from=%c\n",st_val[1].from);
	printf("struct to=%c\n", st_val[1].to);
	printf("struct msg=%s\n",st_val[1].msg);



	return 0;
}
