#include <stdio.h>
#define password 2002
 
int main() {
 
    int X; 
    while(1)
    {
        scanf("%d", &X);
        if(X==password)
        {
            printf("Acesso Permitido\n"); 
            break;
        }
        else printf("Senha Invalida\n");
    }
 
    return 0;
}