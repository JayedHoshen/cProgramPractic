#include <stdio.h>
 
int main() {
 
    char name[20];
    double salary, sales, totalSalary;
    scanf("%s %lf %lf", &name, &salary, &sales);
    totalSalary = salary + (sales*0.15);
    printf("TOTAL = R$ %.2lf\n", totalSalary);
 
    return 0;
}