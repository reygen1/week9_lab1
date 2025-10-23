
#include <iostream>
using namespace std;
double ser(int n ) {
    if (n == 0 ) {
        return 0;
    } else {
        return 1.0/ ((n + 2) * n)  + ser(n - 1);
    }
}
int main() {
    cout<<ser(5);
    return 0;
}