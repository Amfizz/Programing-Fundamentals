#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
int main() {
    ofstream outfile("table.txt");
    outfile << "2*1=2" << endl << "2*2=4" << endl << "2*3=6" << endl << "2*4=8" << endl << "2*5=10";
    outfile.close();
    return 0;
}