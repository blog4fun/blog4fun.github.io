#include<iostream>
using namespace std;

int msb(unsigned x){
    union {
        double v;
        int b[2];
    };

    v = x; // store x as double (8 bytes = 64 bits) in v
    return (b[1] >> 20) - 1023; // obtain the exponent part
}
