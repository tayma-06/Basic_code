#include <stdio.h>
int main() {
    char str[27], c; 
    scanf("%s", str);  
    int freq[26] = {0}, sum = 0;
    scanf(" %c",&c);
    for (int i = 0; i < 26; i++) {
        scanf("%d%c",&freq[i],&c);
        sum += freq[i];
    }
    int res1=sum/100;
    int res2=sum-res1*100;
    if(sum%(res1*100)!=0)res1+=1;
    printf("%d,%d\n", res1, res2);
    return 0;
}
