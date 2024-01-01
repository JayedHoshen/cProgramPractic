/*This program is show's how to Convert with Binary to Decimal.
  Binary to Decimal Convert*/

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    while(1){
    char binary[65];
    int len,decimal,power,i;

    printf("Enter the binary number:");
    scanf("%s",&binary);

    decimal=0;
    len=strlen(binary);
    power=len-1;

    for(i=0; i<len; i++){
        decimal+= (binary[i]-'0')*pow(2,power);
        power--;
    }
    printf("Decimal value is %d\n\n",decimal);
    }

    return 0;
}
