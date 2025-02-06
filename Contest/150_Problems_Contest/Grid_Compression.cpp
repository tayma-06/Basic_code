#include<iostream>
using namespace std;
int main(){
    int H, W;
    cin >> H >> W;
    char grid[100][100];
    int row[100] = {0}, column[100] = {0};
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> grid[i][j];
            if(grid[i][j] == '#'){
                row[i] = 1;
                column[j] = 1;
            }
        }
    }
    for(int i = 0; i < H; i++){
        if(row[i]){
            for(int j = 0; j < W; j++){
                if(column[j]){
                    cout << grid[i][j];
                }
            }
            cout << endl;
        }
    }
    cout << endl;
}
