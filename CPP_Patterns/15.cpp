/*
for n = 4

A
B C
C D E
D E F G

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, n;
    char ch = 'A';
    cin >> n;
    while(row<=n){
        col=1;
        ch = char('A'+row-1);
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
