#include<stdio.h>
void Neg_Tmin()//-Tmin = Tmin
{
    int a = -2147483648;
    printf("%d\n",a);
}
void x_or_Negx()//(x|-x)>>31 == -1 only when x!=0
{
    int b = 1;
    printf("%d\n",(b|-b)>>31);
}
void convert_float_to_int()//if overflow return Tmin
{
    float a = 1e10;
    printf("%d\n",int(a));
}
int main(void)
{
    convert_float_to_int();
    return 0;
}