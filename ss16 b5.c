#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void updateArr(int *arr, int num, int location);

int main(){
	int arr[]={0,1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(arr)/sizeof(int);
	int num;
	int position;
	int *sizePtr= &size;
	int i;
	for(i=0;i<size;i++){
	printf("%d\t", arr[i]);
	}
void updateArr(int *arr, int num, int position){
	
	*(arr+position)=num;
	
}	
printf("\nmoi nhap gia tri muon thay: ");
scanf("%d", &num);
printf("moi nhap vi tri muon thay: ");
scanf("%d", &position);

updateArr(arr,num,position);
printf("mang sau khi thay doi: \n");
	for(i=0;i<size;i++){
	printf("%d\t", arr[i]);
	}
	

   return 0;
}

