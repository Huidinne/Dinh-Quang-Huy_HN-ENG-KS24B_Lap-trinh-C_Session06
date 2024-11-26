#include <stdio.h>
int main(){
    int num, i, prime = 1;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    
    if(num <= 1){
        prime = 0;
    }else{
        for(i = 2; i*i <= num; i++){
            if (num % i == 0){
                prime = 0;
                break;
            }
        }
    }
    
    if(prime==1){
        printf("%d la mot so nguyen to.\n", num);
    }else{
        printf("%d khong phai la mot so nguyen to.\n", num);
    }
}

