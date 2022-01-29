/*
for n = 3

A
B B
C C C

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, n;
    char ch = 'A';
    cin >> n;
    while(row<=n){
        col=1;
        while(col<=row){
            cout << ch << " ";
            col++;
        }
        cout << endl;
        ch++;
        row++;
    }
    return 0;
}
