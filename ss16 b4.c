#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void printArr(int *arr, int size);

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(arr)/sizeof(int);
	
void printArr(int *arr, int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t", *(arr+i));
	}
	
}	
printArr(arr,size);
	

   return 0;
}

