#include <stdio.h>
int main()
{
    int a, b, c, satu, dua, tiga;
    scanf("%d", &a);scanf("%d", &b);scanf("%d", &c);
    if(a>b && b>c){
    satu=c;dua=b;tiga=a;
    }
    else if (a>c && c>b){
    satu=b;dua=c;tiga=a;
    }
    else if (b>a && a>c){
    satu=c;dua=a;tiga;b;
    }
    else if (b>c && c>a){
    satu=a;dua=c;tiga=b;
    }
    else if (c>a && a>b){
    satu=b;dua=a;tiga=c;
    }
    else{
    satu=a;dua=b;tiga=c;
    }
    printf("%d %d %d", satu,dua,tiga);
    return 0;
}
