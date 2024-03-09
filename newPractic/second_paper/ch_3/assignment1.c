#include <stdio.h>

int main()
{
    FILE *bangla, *english, *math, *output;
    char *bangla_in = "bangla.txt", *english_in = "english.txt",
    *math_in = "math.txt";
    char *output_file = "result.txt";
    char m_str[80], b_str[80], e_str[80];
    int i, roll, b_marks, e_marks, m_marks, sum;
    double result;

    bangla = fopen(bangla_in, "r");
    english = fopen(english_in, "r");
    math = fopen(math_in, "r");
    output = fopen(output_file, "a+");

    for(i = 1; i <= 10; i++) {
        fgets(b_str, 80, bangla);
        sscanf(b_str, "%d %d", &roll, &b_marks);
        fgets(e_str, 80, english);
        sscanf(e_str, "%d %d", &roll, &e_marks);
        fgets(m_str, 80, math);
        sscanf(m_str, "%d %d", &roll, &m_marks);

        sum = (b_marks+e_marks+m_marks);
        result = (double)sum / 3;
        printf("Roll: %d \tResult = %.2lf\n", i, result);
        fprintf(output, "Roll: %d \tResult = %.2lf\n", i, result);
    }

    fclose(bangla);
    fclose(english);
    fclose(math);
    fclose(output);

    return 0;
}
