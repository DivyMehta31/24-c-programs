//calculate net salary
#include<stdio.h>
int main(){
float grossSalary,allowance,deduction,netSalary;
printf("Enter gross salary");
scanf("%f",&grossSalary);
allowance = grossSalary*10/100;
deduction = grossSalary*3/100;
netSalary= grossSalary + allowance - deduction;
printf("allowance=%f",allowance);
printf("deduction=%f",deduction);
printf("netSalary=%f",netSalary);


return 0;
}
