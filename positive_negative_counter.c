#include <stdio.h>

void countNumbers(int arr[], int size, int *positive, int *negative, int *zero)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            (*negative)++;
        }
        else if (arr[i] == 0)
        {
            (*zero)++;
        }
        else
        {
            (*positive)++;
        }
    }
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int positive = 0;
    int negative = 0;
    int zero = 0;

    countNumbers(arr, size, &positive, &negative, &zero);

    printf("Number of positive integers: %d\n", positive);
    printf("Number of negative integers: %d\n", negative);
    printf("Number of zeros: %d\n", zero);

    return 0;
}
