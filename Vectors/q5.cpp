#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main() {
    string s1, s2,temp;
    s1 = "FAST";
    s2 = "UNIVERISTY";
    cout << "Before swapping:" << endl;
    cout << s1 << endl << s2 << endl;
    std::swap(s1, s2);
    cout << "After swapping:" << endl;
    cout << s1 << endl << s2;

    
    
}