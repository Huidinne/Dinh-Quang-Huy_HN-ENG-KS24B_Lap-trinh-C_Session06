#include<stdio.h>
int main(){
	int a,b,c,d,e, sum;
	printf("Nhap vao so nguyen thu nhat: ");
	scanf("%d",&a);
	printf("Nhap vao so nguyen thu hai: ");
	scanf("%d",&b);
	printf("Nhap vao so nguyen thu ba: ");
	scanf("%d",&c);
	printf("Nhap vao so nguyen thu tu: ");
	scanf("%d",&d);
	printf("Nhap vao so nguyen thu nam: ");
	scanf("%d",&e);
	
	if(a%2!=0){
		sum+=a;
	}
	if(b%2!=0){
		sum+=b;
	}
	if(c%2!=0){
		sum+=c;
	}
	if(d%2!=0){
		sum+=d;
	}
	if(e%2!=0){
		sum+=e;
	}
	printf("tong cua cac so le la: %d", sum);
}
