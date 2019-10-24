#include <stdio.h>
int main(void)
{
    int a, b, c, d, e, f, g;
    a = 176;
    b = 15;
    c = a + b;
    d = a - b;
    e = a / b;
    f = a * b;
    g = a % b;
    printf("Hasil a + b = %d \n",c);
    printf("Hasil a - c = %d \n",d);
    printf("Hasil a / b = %d \n",e);
    printf("Hasil a * b = %d \n",f);
    printf("Hasil a mod b = %d \n",g);
    return 0;
}
