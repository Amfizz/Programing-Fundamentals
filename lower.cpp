#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[50];
    cin.get(a,50);
    for(int i=0;strlen(a)>i;i++){
        if(a[i]>=97){
            a[i]=a[i]+32;
        }
    }
    for(int i=0;strlen(a)>i;i++){
        cout<<a[i];
    }
}