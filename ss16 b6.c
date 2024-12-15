#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int findNum(int *arr, int num);
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(arr)/sizeof(int);
	int num;
	int *sizePtr= &size;
	printf("moi nhap gia tri muon tim: ");
	scanf("%d", &num);
	
void findNum(int *arr, int num){
	int i;
	int find=0;
	for(i=0;i<*sizePtr;i++){
	if(*(arr+i)==num){
	 printf("gia tri muon tim nam o vi tri arr[]: %d", i);
	 find++;
	}	
	}
	if(find==0){
		printf("gia tri muon tim khong nam trong mang");	
	}

}	
findNum(arr,num);



   return 0;
}

