#include <stdio.h>
#include <string.h>

typedef enum
{
    FULL_TIME,
    PART_TIME,
    INTERN
} EmployeeType;

typedef union
{
    float monthly_salary;

    struct
    {
        float hourly_rate;
        int hour_worked;
    } part_time;

    struct
    {
        float stipened;
        int duration_week;
    } intern;
} EmployeeDetails;

typedef struct
{
    int id;
    char name[50];
    EmployeeType type;
    EmployeeDetails details;
} Employee;

void inputEmployee(Employee *emp)
{
    printf("\nEnter type : ");
    scanf("%d", &emp->type);
    printf("Enter ID : ");
    scanf("%d", &emp->id);
    getchar();
    printf("Enter name : ");
    gets(emp->name);
    switch (emp->type)
    {
    case FULL_TIME:
        printf("Enter monthly salary : ");
        scanf("%f", &emp->details.monthly_salary);
        break;
    case PART_TIME:
        printf("Enter hourly rate : ");
        scanf("%f", &emp->details.part_time.hourly_rate);
        printf("Enter hours worked : ");
        scanf("%d", &emp->details.part_time.hour_worked);
        break;
    case INTERN:
        printf("Enter stipend : ");
        scanf("%f", &emp->details.intern.stipened);
        printf("Enter duration (weeks) : ");
        scanf("%d", &emp->details.intern.duration_week);
        break;
    }
}

void printEmployee(Employee emp)
{
    printf("\nEmployee Record : ");
    printf("\nID : %d\nName: %s\nType: ",
           emp.id,
           emp.name);
    switch (emp.type)
    {
    case FULL_TIME:
        printf("Full Time\nMonthly Salary : $%.2f",
               emp.details.monthly_salary);
        break;
    case PART_TIME:
        printf("Part Time\nMonthly Salary : $%.2f ($%.2fX%dhrs)",
               emp.details.part_time.hourly_rate * emp.details.part_time.hour_worked,
               emp.details.part_time.hourly_rate,
               emp.details.part_time.hour_worked);
        break;
    case INTERN:
        printf("Intern\nStipened : $%.2f\nDuration : %d weeks",
               emp.details.intern.stipened,
               emp.details.intern.duration_week);
        break;
    }
    printf("\n");
}

int main()
{
    Employee employees[3];
    for(int i=0; i<3; i++){
        printf("\nEnter details for employee %d : ", i+1);
        inputEmployee(&employees[i]);
    }
    printf("\n_ _ _ EMPLOYEE DATABASE _ _ _\n");
    for(int i=0; i<3; i++){
        printEmployee(employees[i]);
        printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n"); 
    }
    return 0;
}