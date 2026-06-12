#include <stdio.h>
#include "max.h"


int main()
{
    int x,y,z;
    x=add(1,2);//x=4
    y=add(2,4);//y=8
    z=add(x,y);//z=16;
    printf("hollow world\n");
    printf("x=%d\n y=%d\n z=%d\n",x,y,z);
    return 0;
}