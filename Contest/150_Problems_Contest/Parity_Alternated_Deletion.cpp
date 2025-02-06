// this code took half of my lifespan away
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long a[2001];
    int odd = 0, even = 0, temp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    if(odd == even || odd + 1 == even || even + 1 == odd){
       cout << "0" << endl;
       return 0;
    }
    sort(a, a + n, greater<long long>());
    if(odd > even){
        temp = 2;
        while(odd + even > 0){
            for(int i = 0; i < n; i++){
                if(a[i] % 2 == 1&& temp % 2 == 0){
                    temp = a[i];
                    a[i] = -1;
                    odd--;
                    break;
                }
                else if(a[i] % 2 == 0 && temp % 2 == 1){
                    temp = a[i];
                    a[i] = -1;
                    even--;
                    break;
                }
            }
            if((odd == 0 && temp % 2 == 0) || (even == 0 && temp % 2 == 1))
               break;
        }
    }
    else if(odd < even){
        temp = 1;
        while(odd + even > 0){
            for(int i = 0; i < n; i++){
                if(a[i] % 2 == 1 && temp % 2 == 0){
                    temp = a[i];
                    a[i] = -1;
                    odd--;
                    break;
                }
                else if(a[i] % 2 == 0 && temp % 2 == 1){
                    temp = a[i];
                    a[i] = -1;
                    even--;
                    break;
                }
            }
            if((odd == 0 && temp % 2 == 0) || (even == 0 && temp % 2 == 1))
                break;
        }         
    }
    long long sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != -1){
           sum += a[i];
        }
    }
    cout << sum << endl;
    return 0;
}
