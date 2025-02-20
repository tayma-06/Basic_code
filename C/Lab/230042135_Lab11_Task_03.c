#include<stdio.h>
#include<ctype.h>
int main(){
    char ch[200];
    int len=0;
    printf("Enter a sentence : ");
    while((ch[len]=getchar())!='\n'){
        ch[len]=toupper(ch[len]);
        len++;
    }
    int freq[26]={0};
    for(int i=0; i<26; i++){
        freq[ch[i]-'A']++;
    }
    printf("Letter counts: \n");
    for(int i=1; i<=26; i++){
        printf("%c : %d  ", 'A'+i-1, freq[i-1]);
        if(i % 5 == 0) printf("\n");
    }
    return 0;
}