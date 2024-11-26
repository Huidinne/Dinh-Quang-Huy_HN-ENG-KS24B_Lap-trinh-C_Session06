#include <stdio.h>
int main(){
    int num;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    
    if (num < 0){
        num = -num;
    }
    
    printf("Cac uoc cua so %d la: \n", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }
}

