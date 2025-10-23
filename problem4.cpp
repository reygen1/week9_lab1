#include <iostream>
using namespace std;
int rec_fact(int n ) {
    if (n == 0) {
        return 1;
    } else {
        return n * rec_fact(n - 1);
    }
}
int main (){
    int factorial ;
    cin >> factorial;
    cout << rec_fact(factorial);
    return 0;
}

