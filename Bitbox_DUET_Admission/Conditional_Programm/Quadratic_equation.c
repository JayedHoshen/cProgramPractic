// Calculate roots of a quadratic equation - C

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, root, root1, root2;

    printf("Please enter a: ");
    scanf("%lf", &a);
    printf("Please enter b: ");
    scanf("%lf", &b);
    printf("Please enter c: ");
    scanf("%lf", &c);

    d = (b * b - 4 * a * c);

    if (d > 0) {
        root1 = (- b + sqrt(d)) / (2 * a);
        root2 = (- b - sqrt(d)) / (2 * a);
        printf("Roots are Real and Unequal\n");
        printf("First root is: %lf\n", root1);
        printf("Second root is: %lf\n", root2);
    }
    else if (d == 0) {
        root = - b / (2 * a);
        printf("Roots are Real and Equal.\n");
        printf("Roots are : %lf\n", root);
    }
    else {
        printf("Roots are Imaginary, it's not possible.\n");
    }

    return 0;
}
