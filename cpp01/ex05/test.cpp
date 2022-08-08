/*
 * Compile options needed: none
 */

#include <stdio.h>

void test1();
void test2();            /*  Prototypes */
void test3();

/* array with three functions */
void (*functptr[])() = { test1, test2, test3 } ;

int main()
{
   (*functptr[0])();    /*  Call first function  */
   (*functptr[1])();    /*  Call second function */
   (*functptr[2])();    /*  Call third function  */

   return (0);
}

void test1()
{
   printf("hello 0\n");
}

void test2()
{
   printf("hello 1\n");
}

void test3()
{
   printf("hello 2\n");
}
