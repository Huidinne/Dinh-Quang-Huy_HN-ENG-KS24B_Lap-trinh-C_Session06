#include <stdio.h>

int main(){
    int day, month;

    printf("Nhap ngay sinh cua ban: ");
    scanf("%d", &day);
    printf("Nhap thang sinh cua ban: ");
    scanf("%d", &month);

    if((month == 1 && day >= 20) || (month == 2 && day <= 18)){
        printf("Cung hoang dao cua ban la: Bao Binh");
        
    }else if((month == 2 && day >= 19) || (month == 3 && day <= 20)){
        printf("Cung hoang dao cua ban la: Song Ngu");
        
    }else if((month == 3 && day >= 21) || (month == 4 && day <= 19)){
        printf("Cung hoang dao cua ban la: Bach Duong");
        
    }else if((month == 4 && day >= 20) || (month == 5 && day <= 20)){
        printf("Cung hoang dao cua ban la: Kim Nguu");
        
    }else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)){
        printf("Cung hoang dao cua ban la: Song Tu");
        
    }else if((month == 6 && day >= 21) || (month == 7 && day <= 22)){
        printf("Cung hoang dao cua ban la: Cu Giai");
        
    }else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)){
        printf("Cung hoang dao cua ban la: Su Tu");
        
    }else if((month == 8 && day >= 23) || (month == 9 && day <= 22)){
        printf("Cung hoang dao cua ban la: Xu Nu");
        
    }else if((month == 9 && day >= 23) || (month == 10 && day <= 22)){
        printf("Cung hoang dao cua ban la: Thien Binh");
    }else if((month == 10 && day >= 23) || (month == 11 && day <= 21)){
        printf("Cung hoang dao cua ban la: Bo Cap");
        
    }else if((month == 11 && day >= 22) || (month == 12 && day <= 21)){
        printf("Cung hoang dao cua ban la: Nhan Ma");
        
    }else if((month == 12 && day >= 22) || (month == 1 && day <= 19)){
        printf("Cung hoang dao cua ban la: Ma Ket");
    }else{
        printf("Du lieu khong hop le");
    }
}

