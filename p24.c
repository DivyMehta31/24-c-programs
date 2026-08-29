//Swap two values
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter value of a");
scanf("%d",&a);
printf("Enter value of b");
scanf("%d",&b);
printf("before swapping : a=%d, b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("after swapping : a=%d,b=%d",a,b);

return 0;
}
