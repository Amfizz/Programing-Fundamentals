#include <iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
    char rollno[20];
} s[50];

int main(){
   int n;
  cout<<"Enter the number of students:";
  cin>>n;
    cout << "Enter information of students: " << endl;
    for(int i = 0; i < n; ++i)
    {
        s[i].roll = i+1;
        cout << "For student number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter marks: ";
        cin >> s[i].marks;
         
        cout<<"Enter roll no:";
        cin>> s[i].rollno;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    for(int i = 0; i < n; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
        cout << "Rollno:" << s[i].rollno<<endl;
    }

    return 0;
}
