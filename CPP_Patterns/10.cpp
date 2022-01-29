/*
for n = 3

A B C
A B C
A B C

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, n;
    cin >> n;
    while(row<=n){
        col=1;
        char ch = 'A';
        while(col<=n){
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

