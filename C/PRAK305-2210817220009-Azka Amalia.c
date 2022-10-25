#include <stdio.h>
int main()
{
    int angka, jam, j, menit, m, detik, hari;
    scanf("%d", &angka);
    m=angka/60;detik=angka%60;
    if(m>59){menit=m%60;}
    else{menit=m;}
    j=m/60;
    hari=j/24;jam=j%24;
    if(j>23){
    printf("%d hari %.2d:%.2d:%.2d", hari,jam,menit,detik);}
    else{jam=j;
    printf("%.2d:%.2d:%.2d", jam,menit,detik);}
    return 0;
}
