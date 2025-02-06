#include<stdio.h>
#include<string.h>
int main(){
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        int N, total = 0;
        scanf("%d", &N);
        printf("Case %d:\n", i);
        for(int j = 0; j < N; j++){
            char operation[10];
            scanf("%s", operation);
            if(operation[0] == 'd'){
                int amount;
                scanf("%d", &amount);
                total += amount;
            }
            else if(operation[0] == 'r'){
                printf("%d\n", total);
            }
        }
    }
    return 0;
}
