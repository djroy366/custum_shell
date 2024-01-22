
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "shell.h" // need to make this header file for function prototypes


int status; // Asof now , a global variable given


void printmgs(char * input) // As of now this will print the input
{
	printf("%s",input);
}

void read(void);

void do_something(void);



void loop(void)
{
	do{                //moved this from the main function
		int i;
		printmgs();
		i=read();
		do_something();
		status=i;

	}

	while(status==1)

}



int main(int argc, char **argv)
{

	loop();	

}
