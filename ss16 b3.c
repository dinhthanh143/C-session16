#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int calcTotal(int *num1, int *num2);
int main(){
	int num1=5;
	int num2=15;
	int total;
	
void calcTotal(int *num1, int *num2, int *total){
	
	*total = *num1 + *num2;
}	

calcTotal(&num1,&num2,&total);

printf("tong cua %d va %d la: %d",num1,num2,total);
	

   return 0;
}

