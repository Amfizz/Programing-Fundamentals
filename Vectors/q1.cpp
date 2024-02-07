#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main() {
    vector<int>g1(10);
    //size of vector
    cout << g1.size() << endl;
  //increasing size
    for (int i = 1; i <= 13; i++) 
        g1.push_back(i);
    //displaying size
    cout << g1.size() << endl;
    //displaying data
    for (int i = 0; i < 13; i++) 
        cout << g1[i] << " ";
    cout << endl;
    //reducing size
    g1.pop_back();
    g1.pop_back();
   // displaying size
    cout << g1.size() << endl;
    //displaying max size
    cout<<g1.max_size() << endl;
    //fetch last value by vector method
   cout<< g1.back()<<endl;
   //fetch last value by array method
   cout << g1[11];
   //fetch last + 1 value by vector method
   cout << g1.back()+1 << endl;
   //fetch last + 1 value by array method
   cout << g1[11+1];
   //using insert and erase
   g1.insert(g1.begin(), 6);
   g1.erase(g1.begin());
   //using clear
   g1.clear();
   return 0;

}