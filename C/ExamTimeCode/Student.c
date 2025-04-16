#include<stdio.h>
#include<string.h>
struct Student{
    char name[50];
    int roll;
    float marks;
};
void inputStructure(struct Student *s){
    printf("Enter name : ");
    gets((*s).name);
    printf("Enter Roll : ");
    scanf("%d", &(*s).roll);
    printf("Enter Marks : ");
    scanf("%f", &(*s).marks);
}
void outputStructure(struct Student s){
    printf("Name is %s\n", s.name);
    printf("Roll is %d\n", s.roll);
    printf("Marks is %f\n", s.marks);
}
int main(){
    struct Student s;
    inputStructure(&s);
    outputStructure(s);
}