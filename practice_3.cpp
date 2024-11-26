#include<stdio.h>
int main(){
	int pass = 12345;
	int nhap;
	printf("nhap mat khau: *****\n");
	scanf("%d",&nhap);
	if(pass==nhap){
		printf("mat khau dung");
	}else{
		printf("mat khau sai");
	}
}
