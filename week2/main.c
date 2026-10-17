#include <stdio.h>

int main(){
    char supplierName[10][50];
    float price[10] =0.00;
    float budget = 100.000;
    int qualified[10];
    int registered[10] = 0;
    int documentComplete[10] = 0;

    for(int i=0 ; i<10; i++)
{
    printf("Enter Supplier name: ");
    scanf("%49s", &supplierName[i]);

    printf("Is Supplier registration valid, (1=Yes, 0=No): ");
    scanf("%d", &registered[i]);

    printf("Are the documents valid, (1=Yes, 0=No): ");
    scanf("%d", &documentComplete[i]);

    printf("Enter Supplier price: ");
    scanf("%lf", &price[i]);
}

    printf("\n-----------------------------\n");
    printf("Snupplier: %s\n", supplierName);
    printf("Supplier Price: %.2f\n", price);

    if (registered == 1 && documentComplete == 1 && price <= budget)
    {

        printf("Status: Qualified\n");
    }
    else
    {
        printf("Status: Disqualified\n");
    }
    return 0;
}