/*
for n = 4

1111
 222
  33
   4

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, space, n;
    cin >> n;
    while(row<=n){
        col=1;
        space = row-1;
        int ct = n-space;
        while(space!=0){
            cout << " ";
            space--;
        }
        while(col<=ct){
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
