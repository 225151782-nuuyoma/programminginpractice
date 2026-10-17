#include <stdio.h>

int main(){
    //Declaring variables
    double salary=0.00;
    double housingAllowance=0.00;
    double transportAllowance=0.00;
    double taxAmount=0.00;

    double grossSalary=0.00;
    double netSalary=0.00;

    //1.Ask user for salary
    printf("Enter salary: " );
    scanf("%lf", &salary);

    //3.Ask user for housing allownce
    printf("Enter housing allowance: ");
    scanf("%lf", &housingAllowance);

    //4.Ask user for Tax amount 

    printf("Transport Allowance: ");
    scanf("%lf", &transportAllowance);

    printf("Enter Tax amount: ");
    scanf("%lf", &taxAmount);

    //5.Calculate the Gross
    grossSalary=salary+housingAllowance+transportAllowance ;


    //7.Calculate the net 
    netSalary = grossSalary - taxAmount ;
    //8.Display the net
    printf("\n Gross salary: %.2f", grossSalary);
    printf("\n Net Salary: %.2f", netSalary);

return 0;
}