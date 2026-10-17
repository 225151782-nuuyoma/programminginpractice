#include <stdio.h>

int main(void) {
    char supplierName[10][50];
    float price[10];
    float budget = 100.0f;
    int registered[10];
    int documentComplete[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter Supplier name: ");
        scanf("%49s", supplierName[i]);

        printf("Is Supplier registration valid (1=Yes, 0=No): ");
        scanf("%d", &registered[i]);

        printf("Are the documents valid (1=Yes, 0=No): ");
        scanf("%d", &documentComplete[i]);

        printf("Enter Supplier price: ");
        scanf("%f", &price[i]);

        printf("\n-----------------------------\n");
        printf("Supplier: %s\n", supplierName[i]);
        printf("Supplier Price: %.2f\n", price[i]);

        if (registered[i] == 1 && documentComplete[i] == 1 && price[i] <= budget) {

            printf("Status: Qualified\n");

        } else {

            printf("Status: Disqualified\n");

        }
    }

    return 0;
}