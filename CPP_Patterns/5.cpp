/*
for n = 4

1
2 2
3 3 3
4 4 4 4

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, n;
    cin >> n;
    while(row<=n){
        col=1;
        while(col<=row){
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
