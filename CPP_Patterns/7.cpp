/*
for n = 4

1
2 3
3 4 5
4 5 6 7

*/
#include<iostream>
using namespace std;

int main(){
//    int row=1, col, ct, n;
//    cin >> n;
//    while(row<=n){
//        col=1;
//        ct = row;
//        while(col<=row){
//            cout << ct << " ";
//            ct++;
//            col++;
//        }
//        cout << endl;
//        row++;
//    }
    int row=1, col, n;
    cin >> n;
    while(row<=n){
        col=1;
        while(col<=row){
            cout << (row+col-1) << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
