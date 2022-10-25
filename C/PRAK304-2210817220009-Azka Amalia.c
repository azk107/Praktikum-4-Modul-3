#include <stdio.h>
int main()
{
    int bil;
    scanf("%d", &bil);
    if ((bil>=1) && (bil<10)){
        printf("Satuan\n");
    }
    else if (bil==0){
        printf("Nol\n");
    }
    else if ((bil>10) && (bil<20)){
        printf("Belasan\n");
    }
    else if ((bil>=20) && (bil<=99)){
        printf("Puluhan\n");
    }
    else{
        printf("Anda menginput melebihi limit bilangan\n");
    }
    return 0;
}
