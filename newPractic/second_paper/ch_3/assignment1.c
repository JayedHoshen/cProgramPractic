#include <stdio.h>

int main()
{
    FILE *bangla, *english, *math, *output;
    char *bangla_in = "bangla.txt", *english_in = "english.txt", *math_in = "math.txt";
    char *output_file = "result.txt";
    char in_str[80];
    int i, roll, b_marks, e_marks, m_marks, sum;

    bangla = fopen(bangla_in, "r");
    english = fopen(english_in, "r");
    math = fopen(math_in, "r");
    output = fopen(output_file, "a+");

    for(i = 1; i <= 10; i++) {
        fgets(in_str, 80, bangla);
        sscanf(line, "%d %d", &roll, &b_marks);
        fgets(in_str, 80, english);
        sscanf(line, "%d %d", &roll, &e_marks);
        fgets(in_str, 80, math);
        sscanf(line, "%d %d", &roll, &m_marks);

        sum = (b_marks+e_marks+m_marks);
    }

    return 0;
}
