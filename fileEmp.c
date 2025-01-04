    #include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[100];
    char role[100];
};

int main() {
    FILE *file;
    struct Employee employees[3];

  
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    
    for (int i = 0; i < 3; i++) {
       
        printf("Enter name of employee %d: ", i + 1);
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = 0;  

 
        printf("Enter role (designation) of employee %d: ", i + 1);
        fgets(employees[i].role, sizeof(employees[i].role), stdin);
        employees[i].role[strcspn(employees[i].role, "\n")] = 0;  

      
        fprintf(file, "Employee %d: Name: %s, Role: %s\n", i + 1, employees[i].name, employees[i].role);
    }

    printf("Data written to data.txt successfully.\n");

  
    fclose(file);

    return 0;
}
