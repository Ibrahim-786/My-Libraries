#include "library.h"
#include <stdio.h>
#include <stdlib.h>

void print_value( int x )
{
    printf("value is: %d\n",x);


    char *p = (char*)calloc(10,sizeof(char));

    for(int i=0 ;i<10;i++){
        p[i] = 10;
    }

 for(int i=0 ;i<10;i++)
    printf("value is: %d ",p[i]);

    
    //free(p);


}