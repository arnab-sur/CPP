/*
for n = 3

A B C
D E F
G H I

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, n;
    char ch = 'A';
    cin >> n;
    while(row<=n){
        col=1;
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
