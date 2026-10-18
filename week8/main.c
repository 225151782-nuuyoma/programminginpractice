#include <stdio.h>

void displayWelcome() {
    printf("Welcome to the Municipal Financial Management System\n");
}

float calculateVAT(float amount) {
    return amount * 0.15;
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

void displayMenu() {
    printf("\n=== MUNICIPAL FINANCIAL MANAGEMENT ===\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
}

int searchEmployee(int id, int ids[], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i;
        }
    }
    return -1;
}

int main() {
    displayWelcome();
    int choice;
    int employeeIDs[] = {101, 102, 103, 104, 105};

    do {
        displayMenu();
        scanf("%d", &choice);
        switch(choice) {
            case 1: {
                float amt;
                printf("Enter your amount: ");
                scanf("%f", &amt);
                printf("VAT: %.2f\n", calculateVAT(amt));
                break;
            }
            case 2: {
                float basic, housing, transport;
                printf("The basic salary:");
                scanf("%f", &basic);
                printf("The housing allowance:");
                scanf("%f", &housing);
                printf("The Transport allowance:");
                scanf("%f", &transport);
                printf("The gross salary: %.2f\n", calculateSalary(basic, housing, transport));
                break;
            }
            case 3: {
                float rev, exp;
                printf("Enter your revenue:");
                scanf("%f", &rev);
                printf("Enter your expenses:");
                scanf("%f", &exp);
                float res = calculateBudget(rev, exp);
                if (res > 0) printf("SURPLUS: %.2f\n", res);
                else if (res < 0) printf("DEFICIT: %.2f\n", res);
                else printf("BALANCED\n");
                break;
            }
            case 4:
                printf("Goodbye....\n");
                break;
            default:
                printf("Invalid choice....\n");
        }
    } while(choice != 4);

    return 0;
}
