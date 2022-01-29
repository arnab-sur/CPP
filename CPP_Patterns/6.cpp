/*
for n = 4

1
2 3
4 5 6
7 8 9 10

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, ct=1, n;
    cin >> n;
    while(row<=n){
        col=1;
        while(col<=row){
            cout << ct << " ";
            ct++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
