#include <stdlib.h>

#include <time.h>

#include<stdio.h>

/**

 *main-Entry point

 *

 *Description: checks whether n is positive or negative or equals to zero

 *Return: Always 0 (successful)

 */

  

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if(n>0) {

                           print (“%d is positive\n”, n);

              }

                else if (n<0) {

                           print (“%d is negative\n”, n);

              }

                else if (n=0) {

                            print (“%d is zero\n”, n);

             }

             return (0);

}

