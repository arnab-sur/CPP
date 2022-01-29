/*
for n = 4

****
 ***
  **
   *

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
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
