#include<stdio.h>
#include<string.h>

typedef struct {
    char p_first[20];
    char p_last[20];
}p_name;

typedef struct {
    char fa_first[20];
    char fa_last[20];
}fa_name;

typedef struct {
    char mo_first[20];
    char mo_last[20];
}mo_name;

typedef struct {
    char date[5];
    char month[5];
    char year[5];
}dateOfBirth;

typedef struct {
    p_name name;
    fa_name fathers_name;
    mo_name mothers_name;
    dateOfBirth DOB;
    int Id;
}oneIdInfo;

int main()
{
    oneIdInfo info; // declare struct
    // input card information here
    printf("Your first name: ");
    scanf("%s", info.name.p_first);
    printf("Your last name: ");
    scanf("%s", info.name.p_last);
    printf("Your fathers first name: ");
    scanf("%s", info.fathers_name.fa_first);
    printf("Your father last name: ");
    scanf("%s", info.fathers_name.fa_last);
    printf("Your mothers first name: ");
    scanf("%s", info.mothers_name.mo_first);
    printf("Your mother last name: ");
    scanf("%s", info.mothers_name.mo_last);
    printf("Your birth date: ");
    scanf("%s", info.DOB.date);
    printf("Your birth month: ");
    scanf("%s", info.DOB.month);
    printf("Your birth year: ");
    scanf("%s", info.DOB.year);
    printf("Your ID No: ");
    scanf("%d", &info.Id);

    // output here
    printf("\n......................National ID Card....................\n\n");

    printf("Name: %s %s", info.name.p_first, info.name.p_last);
    printf("\nFathers: %s %s", info.fathers_name.fa_first, info.fathers_name.fa_last);
    printf("\nMothers: %s %s", info.mothers_name.mo_first, info.mothers_name.mo_last);
    printf("\nDOB: %s-%s-%s", info.DOB.date, info.DOB.month, info.DOB.year);
    printf("\nID No: %d", info.Id);

    printf("\n\n......................National ID Card of ....................\n");
    return 0;
}

