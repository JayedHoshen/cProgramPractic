
    //*********** A simple project, input 3 file and output avg another file **********//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *bangla_in, *english_in, *math_in, *result_output;
    char str[80];
    int i, bangla, english, math, roll;
    float avg;

    // all file open here
    bangla_in = fopen("bangla.txt", "r");
    english_in = fopen("english.txt", "r");
    math_in = fopen("math.txt", "r");
    // check all file
    if (bangla_in == NULL || english_in == NULL || math_in == NULL) {
        perror("File opening failed: ");
        return EXIT_FAILURE;
    }
    result_output = fopen("result.txt", "w");

    // processing here
    for(i = 1; i <= 10; i++) {
        // import value string than integer
        fgets(str, 80, bangla_in);
        sscanf(str, "%d %d", &roll, &bangla);

        fgets(str, 80, english_in);
        sscanf(str, "%d %d", &roll, &english);

        fgets(str, 80, math_in);
        sscanf(str, "%d %d", &roll, &math);

        // calculate average
        avg = (float)(bangla + english + math ) / 3;

        // Output console and file
        printf("Roll: %d Bangla: %d, English: %d, Math: %d, Avg: %.2f\n", roll, bangla, english, math, avg);
        fprintf(result_output, "Roll: %d Bangla: %d, English: %d, Math: %d| Avg: %.2f\n", roll, bangla, english, math, avg);
    }

    // all files close here
    fclose(bangla_in);
    fclose(english_in);
    fclose(math_in);
    fclose(result_output);

    return 0;
}
