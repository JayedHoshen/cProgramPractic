#include <stdio.h>

int main()
{
    FILE *fp_in, *fp_out;
    char *input_file = "oneline_in.txt";
    char *output_file = "output.txt";
    char line[80];
    int num1, num2, num3, sum;

    fp_in = fopen(input_file, "r");
    fp_out = fopen(output_file, "w");

    fgets(line, 80, fp_in);
    printf("Line: %s", line);

    sscanf(line, "%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    printf("%d + %d = %d\n", num1, num2, sum);
    fprintf(fp_out, "%d + %d = %d\n", num1, num2, sum);
    //fprintf(fp_out, "%d\n", sum);

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
