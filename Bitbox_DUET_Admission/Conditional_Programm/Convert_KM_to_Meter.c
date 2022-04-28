// Convert KM to Meter, Centimeter or Millimeter - C
#include <stdio.h>

int main()
{
    char v;
    float km, ans = 0;

    printf("Enter KM: ");
    scanf("%f", &km);

    printf("KM will be changed in (M, s, m) : ");
    scanf("%s", &v);

    if (v == 'M') ans = km * 1000;
    if (v == 's') ans = km * 100000;
    if (v == 'm') ans = km * 1000000;

    printf("Answer: %.2f\n", ans);

    return 0;
}
