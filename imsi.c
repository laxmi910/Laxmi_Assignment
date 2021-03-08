
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
   srand(time(NULL));
   long r = rand();
   r = r*10;
   printf("%ld/n",r);
}
