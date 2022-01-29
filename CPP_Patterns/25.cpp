/*
Dabangg Pattern :-
for n = 5

1234554321
1234**4321
123****321
12******21
1********1

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, value, ct, s, right, n;
    cin >> n;
    while(row<=n){
        col = 1;
        value = 1;
        ct = n-row+1;
        while(col<=ct){
            cout << value;
            value++;
            col++;
        }
        s = 2*row-2;
        while(s){
            cout << "*";
            s--;
        }
        right = value-1;
        while(right){
            cout << right;
            right--;
        }
        cout << endl;
        row++;
    }
    return 0;
}
