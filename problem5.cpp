#include <iostream>
using namespace std;
int power_rec(int n , int pow) {
    if ( pow ==0 ) {
        return 1;
    } else {
        return n * power_rec(n ,pow - 1);
    }

}

int main () {
    int a,b;
    cin>>a>>b;
    cout<<power_rec(a,b);
}