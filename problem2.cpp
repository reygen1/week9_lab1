#include <iostream>
using namespace std;
int rec_fun(int n =  1) {
    if (n <= 50) {
        cout << n << endl;
        return rec_fun(n + 1);
    } else {
        return 0;
    }
}

    int main () {
       int var = rec_fun(1);
    return 0;
    }

