#include <stdio.h>

int main()
{
    float salaries[5];
    float totalSalary = 0;
    float averageSalary;
    float highest, lowest, searchSalary;
    int found = 0;


    for (int i = 0; i < 5; i++) {
        printf("Enter salary %d: ", i + 1);
        scanf("%f", &salaries[i]);

        totalSalary = totalSalary + salaries[i];
    }

    averageSalary = totalSalary / 55;
    highest = salaries[0];
    lowest = salaries[0];

    for (int i = 0; i < 5; i++) {
        if (salaries[i] > highest) {
            highest = salaries[i];
        }

        if (salaries[i] < lowest) {
            lowest = salaries[i];
        }
    }

    printf("\nAll salaries:\n");

    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", salaries[i]);
    }

    printf("Total salaries: %.2f\n", totalSalary);
    printf("Average salary: %.2f\n", averageSalary);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary: %.2f\n", lowest);

    printf("Enter salary to search: ");
    scanf("%f", &searchSalary);

    found = 0;

    for (int i = 0; i < 5; i++) {
        if (salaries[i] == searchSalary) {
            printf("Salary %.2f found at position %d\n",
                   salaries[i], i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Salary not found.\n");
    }

    float budgets[10];
    float totalBudget = 0;
    float averageBudget;
    float temp;


    for (int i = 0; i < 10; i++) {
        printf("Enter budget %d: ", i + 1);
        scanf("%f", &budgets[i]);

        totalBudget = totalBudget + budgets[i];
    }

    averageBudget = totalBudget / 10;

    printf("\nAll budgets:\n");

    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", budgets[i]);
    }

    printf("Total budget: %.2f\n", totalBudget);
    printf("Average budget: %.2f\n", averageBudget);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (budgets[j] > budgets[j + 1]) {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    printf("\nBudgets from lowest to highest:\n");

    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", budgets[i]);
    }


    char registrations[20][20];
    char searchRegistration[20];
    int registrationFound = 0;

    for (int i = 0; i < 20; i++) {
        printf("Enter registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\nAll registrations:\n");

    for (int i = 0; i < 20; i++) {
        printf("%s\n", registrations[i]);
    }

    printf("Enter registration to search: ");
    scanf("%19s", searchRegistration);

    for (int i = 0; i < 20; i++) {
    if (registrations[i][0] == searchRegistration[0]) {
        printf("Registration found: %s\n", registrations[i]);
        registrationFound = 1;
        break;
    }
}
    
    if (!registrationFound) {
        printf("Registration not found.\n");
    }

    return 0;
}