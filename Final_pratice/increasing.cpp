#include <iostream>
using namespace std;
int main(){
    int input;
    cin >> input;
    for (int x = 0 ; x < input ; x++){
        for (int y = 0; y <= x; y++ ){
            //cout << y;
            cout << "*";
        }
        cout << endl;
    }
}