#include<stdio.h>
int main(){
	int a,b,c,d,e, dem_le=0, dem_chan=0;
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
	
	if(a%2 !=0 && a>0){
		dem_le++;
	}else{
		dem_chan++;
	}
	
	if(b%2!=0 && b>0){
		dem_le++;
	}else{
		dem_chan++;
	}
	
	if(c%2!=0 && c>0){
		dem_le++;
	}else{
		dem_chan++;
	}
	
	if(d%2!=0 && d>0){
		dem_le++;
	}else{
		dem_chan++;
	}
	
	if(e%2!=0 && e>0){
		dem_le++;
	}else{
		dem_chan++;
	}
	
	printf("so cac so chan la: %d\n", dem_chan);
	printf("so cac so le la: %d", dem_le);
}
