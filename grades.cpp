#include<iostream>
using namespace std;
int main(){
    char a[5][4]={{'B','A','B','C'},{'D','B','C','C'},{'A','A','D','B'},{'A','C','A','D'},{'C','D','D','A'}};
    char iel[5][4];
    int k=0;
     for(int i=0;5>i;i++){
        for(int j=0;4>j;j++){
            cout<<"enter value:";
            cin>>iel[i][j];
        }
     }
    for(int i=0;5>i;i++){
        for(int j=0;4>j;j++){
            if(a[i][j]==iel[i][j]){
                k++;
            }
        }
    }
    cout<<"your scre is:"<<k<<endl;
    if(k>=18){
        cout<<"A grade";
    }
    else if(k>=14 && k<18){
        cout<<"B garde";

    }
    else if(k>=10 && k<14){
        cout<<"C grade";

}
else{
    cout<<"you are fail";
}
return 0;
}