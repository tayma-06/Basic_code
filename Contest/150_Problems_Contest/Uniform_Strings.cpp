#include<iostream>
#include<string>
using namespace std;
int main(){
      int t;
      cin >> t;
      while(t--){
                int n, k;
                cin >> n >> k;
                string result = "";
                for(int i = 0; i< n; ++i)
                {
                       result += 'a' + (i % k);
                }
                cout << result << endl;
       }
       return 0;
}
