#include <iostream>
using namespace std;
double ser(int n) {
    if (n == 0) {
        return 0;
    }else {
        return  1.0 / (n * n)  + ser(n - 1);
    }
}
int main() {
    int a;
    cin>>a;
    cout<<ser(a);
    return 0;
}