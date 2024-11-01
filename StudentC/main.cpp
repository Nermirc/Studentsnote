#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main()
{
    int rollno,phy,che,it,total;
    float percentage ;
    char name[30],div[10];

    cout <<  "Input the roll number of the Student " << endl ;
    cin >> rollno ;

    cout << "Input the name of students" << endl;
    cin >> name;

    cout << "Input the mark of physics , chemistry and Information tech ..: ";
    cin >>  phy >> che >> it;
    total = phy + che + it;
    percentage = total / 3.0 ;

    if(percentage >= 60)
    {
        strcpy(div,"First");
    }
    else if(percentage < 60 && percentage >= 48)
    {
        strcpy(div,"Second");
    }
    else if (percentage < 48 && percentage >= 36)
    {
        strcpy(div,"Pass ");
    }
    else
    {
        strcpy(div,"Fail ");
    }
    cout << "Roll no :" <<  rollno << endl << "Name " << name <<endl;

    cout << "Marks in physics " <<phy << endl;
    cout << "Marks in chemistry " << che << endl;
    cout << "Marks in information tech " << it << endl;
    cout << "Total mark " << total << endl;
    cout << "Percentage " << percentage << endl;
    cout << "Division " << div << endl;
}
