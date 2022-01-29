/*
for n = 3

321
321
321
*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, n;
    cin >> n;
    while(row<=n){
        col=n;
        while(col>0){
            cout << col;
            col--;
        }
        cout << endl;
        row++;
    }
    return 0;
}
