// convert decimal to binary
#include <stdio.h>

void decimal_to_binary(int n);

int main()
{
	int n;

	printf("Please enter any decimal value: ");
	scanf("%d", &n);

	decimal_to_binary(n);

	return 0;
}

void decimal_to_binary(int n)
{
	int binary_num[32];
	int i = 0;

	while (n > 0) {
		binary_num[i] = n % 2;
		n = n / 2;
		i++;
	}

	// printing binary array in reverse order
	printf("Binary: ", n);
	for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary_num[j]);
	}
}
