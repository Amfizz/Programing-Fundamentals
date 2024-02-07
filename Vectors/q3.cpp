#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;
int main() {
    ofstream outfile("table.txt", ios::trunc);
    outflie<< "3 * 1 = 3" << endl << "3 * 2 = 6" << endl << "3 * 3 = 9" << endl << "3 * 4 = 12" << endl << "3 * 5 = 15";
    outfile.close();
    return 0;
}