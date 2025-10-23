#include <iostream>
using namespace std;
int rec_sum (int n ) {
    if (n == 0) {
        return 0;
    } else {
        return n + rec_sum(n -1);
    }
}
    int main () {
    int a;
      cin >> a;
        cout << rec_sum(a) << endl;
        return 0;
    }
