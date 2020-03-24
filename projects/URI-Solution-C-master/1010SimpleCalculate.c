#include <stdio.h>
 
int main() {
 
    int pname1, pname2, pq1, pq2;
    double pprice1, pprice2, totalPrice;
    
    scanf("%d %d %lf", &pname1, &pq1, &pprice1);
    scanf("%d %d %lf", &pname2, &pq2, &pprice2);
    
    totalPrice = (pq1*pprice1) + (pq2*pprice2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", totalPrice);
 
    return 0;
}