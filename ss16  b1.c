#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
int num=2;
int *numPtr= &num;

printf("dia chi cua bien la %lu\n", numPtr);
printf("gia tri cua bien la %d", *numPtr);


   return 0;
}

