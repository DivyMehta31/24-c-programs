//calculate net sales
#include<stdio.h>
int main(){
float grossSales,discount,netSales;
printf("Enter grossSales");
scanf("%f",&grossSales);
discount=grossSales*10/100;
netSales=grossSales-discount;
printf("Discount=%f",discount);
printf("NetSales=%f",netSales);


return 0;
}
