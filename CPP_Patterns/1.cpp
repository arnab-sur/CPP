/*
for n = 4

1234
1234
1234
1234
*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, n;
    cin >> n;
    while(row<=n){
        col=1;
        while(col<=n){
            cout << col;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
