                                
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int countDigits(int n){\
    int cnt = (int)(log10(n)+1);
    return cnt;
}

int main() {
    long long int N = 32982655464635;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}
                                
                            