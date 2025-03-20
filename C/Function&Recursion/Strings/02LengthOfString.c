#include<stdio.h>
#include<string.h>
int stringlen(const char *str){
    int len=0;
    while(*(str+len)!='\0'){
        len++;
    }
    return len;
}
int main(){
    char str[200];
    printf("Enter the String : ");
    gets(str); // gets not safe always
    int len = stringlen(str);
    printf("Length of the string is : %d\n", len);
    return 0;
}