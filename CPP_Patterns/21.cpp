/*
for n = 4

   1
  22
 333
4444

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, space, n;
    cin >> n;
    while(row<=n){
        col=1;
        space = n-row;
        while(space!=0){
            cout << " ";
            space--;
        }
        while(col<=row){
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
