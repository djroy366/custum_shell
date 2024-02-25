#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "main.h" // need to make this header file for function prototypes

static int status=0; // Asof now , a global variable given

//shubham's ss
void read(void)
{
	char buff[256];
	fgets(buff,sizeof(buff),stdin);
	printf(":%s\n",buff);
}
void do_something_bal(void) //undefined reference to `do_something_bal', So adding something
{
	status++;
}

void printmgs(char * input) // As of now this will print the input
{
	printf("%s\n",input);
}

void loop(void)
{
	do{                //moved this from the main function
		printmgs("custum Shell >");
		read();
		do_something_bal();
		status=1;
	}
	while(status==1);
}

int main(int argc, char **argv)
{
	loop();	
}
