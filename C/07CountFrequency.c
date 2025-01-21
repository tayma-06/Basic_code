// Bismillahir Rahmanir Rahim
//  Author : Khadiza Sultana
//  Date   : 1/21/2025

/*COUNT THE FREQUENCY OF EACH ELEMENT IN THE ARRAY*/

#include <stdio.h>

int main()
{
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    int arr[n], freq[n];
    printf("Input the %d elements in the array : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1; // initialize to -1
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}