#include <stdio.h>

int main(){

        int a, b, c, aux, auxA, auxB, auxC;

        scanf("%d %d %d",&a, &b, &c);

        auxA = a;
        auxB = b;
        auxC = c;

        while((a>b)||(b>c))
        {   if(a>b)
            {  aux = a; a = b; b = aux;  }
            if(b>c)
            {  aux = b; b = c; c = aux;  }
        }

        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
        printf("\n");
        printf("%d\n",auxA);
        printf("%d\n",auxB);
        printf("%d\n",auxC);


    return 0;
}
