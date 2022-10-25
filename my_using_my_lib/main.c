#include <stdio.h>
#include "library.h"
#include <stdlib.h>

void my_local_fun()
{

    int *ptr= (int*)calloc(10,sizeof(int));



}


int main ( void )
{
    print_value(10);
    my_local_fun();
    return 0;
}