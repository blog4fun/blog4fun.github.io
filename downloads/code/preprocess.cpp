#include<iostream>

using namespace std;

#define MY 1;
#define LEFT 1
#define RIGHT 2
//#define MARGIN (LEFT + RIGHT)
#define MARGIN LEFT + RIGHT // error --> please put on your brackets!

#define something
#define crazy
#define happened
#define did
#define you
#define know

int main(){
    cout << MY+3; // expected 4, but got 1 --> buggy
    int x = MARGIN * 2;
    cout << endl << x; // expected 6, but got 5 --> buggy

    something crazy happened did you know

    return 0;
}
