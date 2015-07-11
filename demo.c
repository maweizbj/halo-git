#include <stdio.h>
#include <stdlib.h>
void main(){
	int arr1[]={32,52,123,86};
	int i=0;
	for(i=0;i<sizeof(arr1)/sizeof(int);i++){
		printf("i , %d\n",arr1[i]);
	}
	system("pause");
}
