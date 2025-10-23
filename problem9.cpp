#include <iostream>
using namespace std;

    int multiplicationRec(int x , int y ) {
        if ( x== 0 || y == 0 ) {
            return 0;
        }
        if (y > 0 ) {
            return x + multiplicationRec(x,y-1);
        } else {
            return -x + multiplicationRec(x-1,y);
        }
    }

int main () {
        int n1,n2;
        cin>>n1,n2;
        cout<<multiplicationRec(n1,n2);
    }

