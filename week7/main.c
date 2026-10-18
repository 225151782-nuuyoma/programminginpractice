#include <stdio.h>
#include <string.h>
int main() { 

    char name[100]; 
    char names[100];
    char email[100];
    char phone[30]; 
    char town[50];
    char supplier1[]="ABC Office Suppliers";
    char supplier2[]="Namibia Stationery";
    
printf("Enter supplier name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    if (strcmp(name, supplier1)==0 ||strcmp(name, supplier2)==0){
        printf("supplier found\n");
    }else{
        printf("Supplier not found\n");
    }
printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';
printf("Enter phone:");
   fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';
 

printf("Enter town: ");
   fgets(town, sizeof(town), stdin);
   town[strcspn (town, "\n")] = '\0';
    
printf("\n===================================\n");
    printf("   MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("===================================\n");
printf("Name:%s\n",name);
     strcpy(names,name);
    printf("Name is: %s\n",names);
printf("Email:%s\n",email); 
printf("Phone:%s\n",phone); 
printf("Town:%s\n\n\n",town); 
    printf("Suppplier name length: %lu\n",strlen(name));
    printf("Email length: %lu\n",strlen(email));
    printf("Town length: %lu",strlen(town));
return 0;
}
