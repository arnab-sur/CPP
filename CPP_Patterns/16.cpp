/*
for n = 4

D
C D
B C D
A B C D

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, n;
    char ch = 'A';
    cin >> n;
    while(row<=n){
        col=1;
        ch = char('A'+n-row);
        while(col<=row){
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
