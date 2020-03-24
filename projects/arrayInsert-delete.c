#include<stdio.h>
#include<stdlib.h>

int main()
{
    // all variable declare here

    int *a, n, actionArray, insert, deleteData, i, j, k, item;

    printf("Enter how many elements in the array ( less than int = 2,147,483,647): ");
    scanf("%d", &n);

    // dynamic memory allocation of the array

    a = (int *)malloc(sizeof(int) * n);

    // input array values

    printf("\nInput %d integers:\n\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while(1){

        // chose any action

        printf("\nPress one(1)to insert, Two(2)to delete, three(3) to print and zero(0)to exit: ");
        scanf("%d", &actionArray);

        if(actionArray == 1){

            //Inserting a new element in Original Array

            printf("\nInsert an element witch position (0 to %d): ", n);
            scanf("%d", &insert);
            j = n;
            while(j >= insert) {
                a[j + 1] = a[j];
                j = j - 1;
            }
            printf("\nWitch item insert in this position: ");
            scanf("%d", &item);
            a[insert] = item;
            n = n + 1;
            printf("\n%d insert is %d th position.....\n", item, insert);
        }
        else if(actionArray == 2){

            // Delete an element of Original Array

            printf("\n\nTo delete which position this array (0 to %d): ", n-1);
            scanf("%d", &deleteData);
            item = a[deleteData];
            for(k = deleteData; k <= n-1; k++){
                a[k] = a[k + 1];
            }
            n = n - 1;
            printf("\n%d delete is %d th position.\n", item, deleteData);
        }
        else {

            // out of the array

            if(actionArray == 0){
                break;
            }

            // original array print

            printf("\nThe array contains..........");
            for(i = 0; i < n; i++) {
                printf("\nArray [%d] = %d", i, a[i]);
            }
        }
    }

    return 0;
}
