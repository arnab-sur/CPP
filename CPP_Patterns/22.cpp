/*
for n = 4

1234
 234
  34
   4

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, space, ct, value, n;
    cin >> n;
    while(row<=n){
        col=1;
        ct = n-row+1;
        space = row-1;
        value = row;
        while(space!=0){
            cout << " ";
            space--;
        }
        while(col<=ct){
            cout << value;
            value++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
