#include <stdio.h>
#include <string.h>
#include <limits.h>
typedef struct
{
    char title[200];
    char author[200];
    int price;
} Book;
int main()
{
    Book books[100];
    int n;
    printf("Enter the number of books : ");
    scanf("%d", &n);
    getchar();
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        printf("Enter title of %dth book : ", i + 1);
        gets(books[i].title);
        printf("Enter the author name of %dth book : ", i + 1);
        gets(books[i].author);
        printf("Enter the price of %dth book : ", i + 1);
        scanf("%d", &books[i].price);
        getchar();
        if (max < books[i].price)
            max = books[i].price;
        if (min > books[i].price)
            min = books[i].price;
    }
    printf("Display the information about the books :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Title of the %dth book : %s\n", i + 1, books[i].title);
        printf("Author of the %dth book : %s\n", i + 1, books[i].author);
        printf("Price of %dth book : %d\n", i + 1, books[i].price);
    }
    printf("Most Expensive Book Price : %d\n", max);
    printf("Least Expensive Book Price : %d\n", min);
    return 0;
}