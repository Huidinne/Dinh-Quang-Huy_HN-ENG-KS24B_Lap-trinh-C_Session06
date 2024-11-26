#include<stdio.h>
int main(){
	float a,b,c;
	float x1, x2;
	printf("nhap vao 3 so a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	float delta= (b*b -4 *a*c);
	float pt1= -c/b;
	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh vo so nghiem");
			}else{
				printf("phuong trinh vo nghiem");
			}
		}else{
			printf("phuong trinh bac 1 ket qua la: %.2f", pt1);
		}
	}else{
		if(delta<0){
		printf("Phuong trinh vo nghiem");
	}else if(delta==0){
		printf("phuong trinh co nghiem kep la:%.2f", -b/(2*a));
	}else{
		printf("phuong tring co hai nghiem phan biet\n");
		printf("nghiem thu nhat: x1=%.2f\n", (-b + delta*(delta/2))/2*a);
		printf("nghiem thu hai: x2=%.2f", (-b - delta*(delta/2))/2*a);
		}
	} 
	return 0;
}
