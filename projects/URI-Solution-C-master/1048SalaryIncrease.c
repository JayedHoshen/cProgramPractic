#include <stdio.h>
 
int main() {
 
    double salary, earned;
    int per;

    scanf("%lf", &salary);

    if(salary > 0 && salary <= 400.00) per = 15;
    else if(salary >= 400.01 && salary <= 800) per = 12;
    else if(salary >= 800.01 && salary <= 1200) per = 10;
    else if(salary >= 1200.01 && salary <= 2000) per = 7;
    else per = 4;

    earned = (salary * per) / 100;

    salary += earned;

    printf("Novo salario: %.2lf\n", salary);
    printf("Reajuste ganho: %.2lf\n", earned);
    printf("Em percentual: %d %\n", per);
 
    return 0;
}