#include <stdio.h>
#include <stdlib.h>

int main()
{
   float g;
   unsigned int k;
   g = 1.25;
   k = (unsigned int) * (unsigned int *) &g;
   printf("%8x\n", k);
   //printf("%b\n", k);
   return 0;
}
