// simple modulus in c++ program input from user...

#include <iostream>
using namespace std;

int main() {
    int x, y, ans = 0;
    cout<<"Enter the value of (x and y): ";
    cin>> x >> y;
    ans = x % y;
    cout<< "modulus is: " << ans << endl;

return 0;
}

