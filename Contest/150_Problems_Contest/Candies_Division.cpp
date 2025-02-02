#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, a, b;
        cin >> n >> k; 
    // n is the number of candies santaclaus has
    // k is the number of children
        if(n % k == 0){
        // if n is divisible by k that means 
        // distributed perfectly so print n
        cout << n << endl;
        }
        else{
            a = (n / k) * k; 
    /* the largest possible even distribution 
    of k less than or equal to n. because if n is not divisible 
    by k then there would be some leftover candies that may not
    get distributed evenly
    (n / k) returns an integer and multiplying it with k gives 
    whole value */
            b = a + (k / 2);
    /* now we can give the additional candies to some specific 
    children. But one child can gain only one more than another 
    child and the number candies can not exceed k/2
    So to maximize the number of candies distributes we can add k/2*/
            if(n < b)
               cout << n << endl;
            else 
               cout << b << endl;
        }
        
    }
}
