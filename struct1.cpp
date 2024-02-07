#include<iostream>
using namespace std;
struct date{
    int day;
    char month[20];
    int year;
    int date;
}d[2];

int main(){  
    int flag =0;
   cout << "Enter information of students: " << endl;
    for(int i = 0; i < 2; ++i)
    {
        d[i].date = i+1;
        cout << "date" << d[i].date << ":" << endl;

        cout << "enter day: ";
        cin >> d[i].day;

         cout<<"Enter month:";
        cin>> d[i].month;

        cout << "Enter year: ";
        cin >> d[i].year;
         
       

        cout << endl;
    }
    if(d[0].day=d[1].day){
        if(d[0].year=d[1].year){
            for(int i=0;i<2;i++){
                if(d[0].month==d[1].month){
            
                flag=1;
            }
        }
    }
    }
    if(flag=1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}