/*
 * Practice 12
 * Name: 曾千芸
 * Student Number: 109504501
 * Course 2021-CE1003-B
 */

#include    <iostream>

using namespace std;

void add(float ax, float ay, float bx, float by, float *cx, float *cy) {
    
    float *ptr_ax, *ptr_ay, *ptr_bx, *ptr_by;
    
    ptr_ax = &ax;
    ptr_ay = &ay;
    ptr_bx = &bx;
    ptr_by = &by;
    
    *cx = *ptr_ax + *ptr_bx;
    *cy = *ptr_ay + *ptr_by;
}

void scale(float ax, float ay, double s, float *cx, float *cy) {
    float *ptr_ax, *ptr_ay;
    
    ptr_ax = &ax;
    ptr_ay = &ay;
    
    *cx = *ptr_ax * s;
    *cy = *ptr_ay * s;
}

int main() {
    float ax, ay, bx, by, cx, cy, s;

    cout << "A: ";
    cin >> ax >> ay;
    cout << "B: ";
    cin >> bx >> by;
    cout << "s: ";
    cin >> s;

    add(ax, ay, bx, by, &cx, &cy);
    cout << "A + B = " << "(" << cx << ", " << cy << ")" << endl;

    scale(ax, ay, s, &cx, &cy);
    cout << "A * s = " << "(" << cx << ", " << cy << ")" << endl;

    return 0;
}
