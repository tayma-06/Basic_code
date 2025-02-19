#include <stdio.h>
void printEven(int start, int end)
{
    if (start > end)
        return;
    if (start % 2 == 0)
        printf("%d ", start);
    printEven(start + 1, end);
}
void printOdd(int start, int end)
{
    if (start > end)
        return;
    if (start % 2 != 0)
        printf("%d ", start);
    printOdd(start + 1, end);
}
int main()
{
    int range;
    printf("Input the range to print starting from 1: ");
    scanf("%d", &range);
    printf("All even numbers from 1 to %d are: ", range);
    printEven(1, range);
    printf("\nAll odd numbers from 1 to %d are: ", range);
    printOdd(1, range);
    printf("\n");
    return 0;
}
