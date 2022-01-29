/*
for n = 4

*
**
***
****

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, n;
    cin >> n;
    while(row<=n){
        col=1;
        while(col<=row){
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
