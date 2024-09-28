#include <stdio.h>

int main() 
{
    
    int arr[] = { 1, 2, 3, 4, 5,7,8,9}, i;
	int n = sizeof(arr) / sizeof(arr[0]);
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    for (int i = 0; i < n-1; i++) {
        arraySum += arr[i];
    }
    int missingNumber = totalSum - arraySum;
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}