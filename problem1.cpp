#include <iostream>
using namespace std;
int rec_fun (int n = 10) {
    if (n > 0) {
        cout << n << endl;
        return rec_fun(n -1);
    } else {
        return 0;
    }
}
int main() {
    cout << rec_fun(10) << endl;
    return 0;
}
