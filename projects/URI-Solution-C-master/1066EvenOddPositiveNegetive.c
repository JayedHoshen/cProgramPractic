#include <stdio.h>
 
int main() {
 
    int i, num[5], even=0, odd=0, neg=0, pos=0;
    
    for(i=0; i<5; i++)
    {
        scanf("%d", &num[i]);
    }
    
    for(i=0; i<5; i++)
    {
        if(num[i]%2==0) even++;
        if(num[i]%2!=0) odd++;
        if(num[i]>0) pos++;
        if(num[i]<0) neg++;
    }
    
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
 
    return 0;
}