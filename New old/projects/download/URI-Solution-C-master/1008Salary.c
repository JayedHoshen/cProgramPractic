#include <stdio.h>
 
int main() {
 
    int number, workHour;
    double salaryPerHour, totalSalary;
    
    scanf("%d %d %lf", &number, &workHour, &salaryPerHour);
    totalSalary = workHour * salaryPerHour;
    
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", totalSalary);
 
    return 0;
}