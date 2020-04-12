// C program to reverse a string using recursion
# include <stdio.h>

void reverse(char *str)
{
   if (*str){
      reverse(str+1);
      printf("%c", *str);
   }
}

int main()
{
   char s[] = "palindom";

   printf("Reversing output is: ");

   reverse(s);

   return 0;
}
