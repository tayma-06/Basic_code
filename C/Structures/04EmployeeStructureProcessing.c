#include <stdio.h>
#include <string.h>
#include <limits.h>
typedef struct
{
    int id;
    char name[200];
    int salary;
} Employee;
int main()
{
    int n;
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    Employee e[n];
    int maxIdx = -1, max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the ID of %dth Employee : ", i + 1);
        scanf("%d", &e[i].id);
        getchar();
        printf("Enter the Name of %dth Employee : ", i + 1);
        gets(e[i].name);
        printf("Enter the salary of %dth Employee : ", i + 1);
        scanf("%d", &e[i].salary);
        if (max < e[i].salary)
        {
            max = e[i].salary;
            maxIdx = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("ID of %dth employee : %d\n", i, e[i].id);
        printf("Name of %dth employee : %s\n", i, e[i].name);
        printf("Salary of %dth employee : %d\n", i, e[i].salary);
    }
    printf("Employee of highest salary : \nID : %d\nName : %s\nSalary : %d\n", e[maxIdx].id, e[maxIdx].name, e[maxIdx].salary);
    return 0;
}