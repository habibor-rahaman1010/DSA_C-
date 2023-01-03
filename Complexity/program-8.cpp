//Fibonacci program time and space complexity find out in c++ program...

#include <iostream>
using namespace std;

/*
    Time complexity O(n ^ 2)
    Space complexity O(n)
*/

int called = 0;
long long int save[1000];

int fibo(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    if(save[n] != 0){
        return save[n];
    }

    long long int x = fibo(n - 1);
    called++;
    long long int y = fibo(n - 2);
    called++;
    save[n] = (x + y);

    return (x + y);
}

int main() {
    long long int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    long long int fib = fibo(n);
    cout<<"Fibonacci is: " <<fib <<"\n";
    cout<<"Fibonacci function called: " <<called <<"\n";

return 0;
}

