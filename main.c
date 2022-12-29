
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "shell.h" // need to make this header file for function prototypes

int main(int argc, char **argv)
{   int status;
       
    while(status==1)
    {   int i;
        printmgs();
        i=read();
        do_something();
        status=i;
    }    
}
