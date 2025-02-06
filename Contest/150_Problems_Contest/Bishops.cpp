#include<stdio.h>
#include<math.h>
int main(){
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        int r1, r2, c1, c2;
        scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
        printf("Case %d: ", i);
        if((r1 + c1) % 2 != (r2 + c2) % 2)
           printf("impossible\n");
        else{
            if(abs(r1 - r2) == abs(c1 - c2))
               printf("1\n");
            else
               printf("2\n");
        }
    }
    return 0;
}
