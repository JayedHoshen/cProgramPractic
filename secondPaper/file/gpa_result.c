/*
    Three are three files input and output average;
*/
#include<stdio.h>

int main()
{
    // input all sourse file and all data-type
    FILE *fp_math, *fp_eng, *fp_bangla, *fp_result;
    char *in_fp_math = "math.txt";
    char *in_fp_eng = "english.txt";
    char *in_fp_bangla = "bangla.txt";
    char *output_result = "gpa_result.txt";
    char mat[50], engl[50], bang[50];
    int sum, roll, math_marks, english_marks, bangla_marks;
    float avg;
    // read all file here
    fp_math = fopen(in_fp_math, "r");
    fp_eng = fopen(in_fp_eng, "r");
    fp_bangla = fopen(in_fp_bangla, "r");
    fp_result = fopen(output_result, "w");
    // input and print my programs file
    for (int i = 1; i <= 10; i++)
    {
        // input string to file
        fgets(mat, 50, fp_math);
        fgets(engl, 50, fp_eng);
        fgets(bang, 50, fp_bangla);
        //print files value
       /*
        printf("Math: %s", mat);
        printf("English: %s", engl);
        printf("Bangla: %s\n", bang);
       */
        // convert string to integer
        sscanf(mat, "%d %d", &roll, &math_marks);
        sscanf(engl, "%d %d", &roll, &english_marks);
        sscanf(bang, "%d %d", &roll, &bangla_marks);

        sum = (math_marks + english_marks + bangla_marks);

        avg = (float)sum / 3;
        // console output
        printf("Roll %2d: Math %d, English %d, Bangla %d\n", roll, math_marks, english_marks, bangla_marks);
        printf("Result is: %0.2f\n\n", avg);
        // output file
        //fprintf(fp_result, "Roll: %2d  Result: %0.2f\n",i, avg);
        fprintf(fp_result,"Roll %2d: Math %d, English %d, Bangla %d\nResult is: %0.2f\n\n", roll, math_marks, english_marks, bangla_marks, avg);
    }    
    fclose(fp_math);
    fclose(fp_eng);
    fclose(fp_bangla);
    fclose(fp_result);

    return 0;
}