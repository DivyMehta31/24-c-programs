//To convert dollars into pounds and rupees
#include<stdio.h>
int main(){
float dollars,rupees,pounds;
printf("Enter dollars");
scanf("%f",&dollars);
rupees=dollars*60;
pounds=dollars/70;
printf("pounds=%f\n",pounds);
printf("rupees=%f",rupees);



return 0;
}
