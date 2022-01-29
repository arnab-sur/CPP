/*
for n = 4

   1
  23
 456
78910

*/
#include<iostream>
using namespace std;

int main(){
    int row=1, col, space, ct, value=1, n;
    cin >> n;
    while(row<=n){
        col=1;
        space = n-row;
        while(space!=0){
            cout << " ";
            space--;
        }
        while(col<=row){
            cout << value;
            value++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
