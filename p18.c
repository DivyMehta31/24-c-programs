// to find area and perimeter of rectangle
#include<stdio.h>
int main(){

float l,b,a,p;
printf("Enter l");
scanf("%f",&l);
printf("Enter b");
scanf("%f",&b);
a=l*b;
p=2*(l+b);
printf("Area=%f",a);
printf("Perimeter=%f",p);

return 0;
}
