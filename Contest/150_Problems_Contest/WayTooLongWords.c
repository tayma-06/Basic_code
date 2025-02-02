#include<stdio.h>
/* Using #include<string.h> for strlen */
#include<string.h> 
int main()
{
    int n;
    scanf("%d", &n); /* Input the number of test cases */
    for(int i = n; i > 0; i--) /* Iterating each test case can also use while(n--) */
    {
        char a[101]; /* declaring a character that can hold 100 characters and as turning it into a string will add the null terminator we are taking 101 characters */ 
        scanf("%s", a); /* The %s format specifier in scanf allows to read a string into the char array. The input is automatically null-terminated (\0), which marks the end of the string.*/
        int b = strlen(a); /* The strlen() is used to determine the length of a string excluding the null terminator. It also considers spaces. */
        if(b<=10) /* If the length of the string stored in b is less than 10 then the word will be printed as it is */
        printf("%s\n", a);
        else if(b > 1){ /* If the length is more than 10 then subracted 2 from it to eliminate the first and last character from the count */ 
        int c = b-2;
        printf("%c%d%c\n", a[0], c, a[b-1]); /* printed the first character, length excluding the first character and last character, the last character */
        }
        
    }
    return 0;
}
