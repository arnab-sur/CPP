/*
for n = 4

   1
  121
 12321
1234321

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
            cout << col;
            col++;
        }
        int right = row-1;
        while(right){
            cout << right;
            right--;
        }
        cout << endl;
        row++;
    }
    return 0;
}
