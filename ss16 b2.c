#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void swap(int *num1, int *num2);
int main(){
int num1=5;
int num2=15;

printf("gia tri ban dau la: %d, %d", num1,num2);
void swap(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

swap(&num1,&num2);
printf("\n gia tri sau khi swap la: %d, %d", num1,num2);

   return 0;
}

