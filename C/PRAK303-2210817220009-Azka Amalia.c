#include <stdio.h>
int main()
{
    int bil;
    scanf("%d", &bil);
    if (bil>0){
        printf("positif\n");
    }
    else if (bil<0){
        printf("negatif\n");
    }
    else{
        printf("nol\n");
    }
    return 0;
}
