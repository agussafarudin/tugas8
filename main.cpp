#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b,sisa,x,y;
    printf(" -------Menyederhanakan Bilangan Pecahan------- \n \n \n");
    printf(" Masukkan Pembilang    : ");
    scanf("%d",&a);
    printf(" Masukkan Penyebut     : ");
    scanf("%d",&b);
    sisa=a%b;
    x = a-sisa;
    y = x/b;
    if (sisa == 0)
        printf("\n%d/%d = %d", a,b,y);
    if (sisa > 0)
        printf("\n%d/%d = %d %d/%d", a,b,y, sisa, b);
    printf("\n");
    printf("\n Dimana A= %d, b (awal) = %d, b(akhir=%d, Dan c= %d", y,a,sisa,b);
    printf("\n");
    return 0;
}
