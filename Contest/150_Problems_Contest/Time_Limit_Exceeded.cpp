#include<iostream>
#include<climits> // for accessing the INT_MAX value
using namespace std;
int main(){
    int N, T; // Maximum number of routes, Maximum allowed time
    cin >> N >> T;
    int min = INT_MAX; // initialize minimum cost with positive infinity
    for(int i = 0; i < N; i++){
        int c, t; // cost, time
        cin >> c >> t;
        if(t <= T){ // if time is less than or equal to the max allowed time
            min = (min < c ? min : c); // update the minimum cost if the 
            // current route is cheaper
        }
    }
    if(min == INT_MAX){ // no valid route so
        cout << "TLE" << endl;
    }
    else{ // otherwise the minimum cost of a valid route
        cout << min << endl;
    }
}
