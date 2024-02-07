#include<iostream>
using namespace std;
int search(int a[8],int size, int val){
    for(int i=0;i<size;i++){
        if(a[i]==val){
         return i;
        }
    }
   
}
int main(){
    int va;
    cout<<"enter the value to be found:";
    cin>>va;
    int a[10]={9,55,60,81,49,66,49,10};
    cout<<va<<" is found on "<< search(a,8,va)<<" index";
    return 0;

}