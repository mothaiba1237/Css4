#include <stdio.h>

int main(){
	int n; 
	
	printf("nhap vao mot so nguyen: ");
	scanf("%d",&n);
	if(n>0){
		printf("so %d la so duong",n); 
	} else{
		printf("so %d la so am",n); 
	} 
	
	return 0; 
} 
