/*
for n = 4

1
2 1
3 2 1
4 3 2 1

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, n;
    cin >> n;
    while(row<=n){
        col=1;
        while(col<=row){
            cout << (row-col+1) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
