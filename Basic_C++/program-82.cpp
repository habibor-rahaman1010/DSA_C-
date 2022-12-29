// divide 2 value use function in c++ program by pointer...

#include <iostream>
using namespace std;

int doSum(int* x, int* y) {
    int result;
    int* div = &result;
    *div = *x / *y;
    return *div;
}

int main() {
    int x, y;
    cout<<"Enter the value of (x and y): ";
    cin>> x >> y;
    int *ptr = &x;
    int *ptr2 = &y;

    int ans = doSum(ptr, ptr2);
    cout<< ans <<"\n";

return 0;
}
