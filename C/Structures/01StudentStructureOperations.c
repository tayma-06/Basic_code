#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[200];
    int age;
    int total_marks;
} Student;
int main()
{
    Student S1, S2;
    printf("Enter the name, age and total marks of first student : ");
    scanf("%s %d %d", S1.name, &S1.age, &S1.total_marks);
    printf("Enter the name, age and total marks of second student : ");
    scanf("%s %d %d", S2.name, &S2.age, &S2.total_marks);
    printf("Display info of first student :\nName : %s\nAge: %d\nTotal Marks: %d\nDisplay info of seconf student :\nName : %s\nAge: %d\nTotal Marks: %d\n", S1.name, S1.age, S1.total_marks, S2.name, S2.age, S2.total_marks);
    double average = (S1.total_marks + S2.total_marks) / 2.0;
    printf("The average of the total marks : %g\n", average);
    return 0;
}