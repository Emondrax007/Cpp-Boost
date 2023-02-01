#include <iostream.h>
#include <stdio.h>
#include <conio.h>
class STUDENT
{
 private: char USN[10], Name[10];
                float marks1, marks2, marks3; //marks for the three subjects                           average_marks; //Average marks for the best two
public: void Readdata();
             void Calculate_Average_Marks();
             void Displaydata();
};
void STUDENT::Readdata()
{
cout << "Enter the name and USN : " ;
cin >> Name >> USN;
cout << "Enter marks1, marks2, marks3 : " ;
cin >> marks1 >> marks2 >> marks3;
}
void STUDENT::Calculate_Average_Marks()
{
int smallest;
if( (marks1 < marks2) && (marks1 < marks3) ) average_marks = (marks2+ marks3)/2;
else if (marks2 < marks3) average_marks = (marks1 + marks3)/2;
else average_marks = (marks1 + marks2)/2;
}
void STUDENT::Displaydata()
{
cout << "USN:" << USN << "\t Name:" << Name << "\t Average Marks:";
 cout("%0.2f\n",average_marks);
}
void main()
{
STUDENT student[10];
clrscr();
for(int i=0;i<20;i++)
{
student[i].Read_Data();
}
for(i=0;i<20;i++)
{
student[i].Calculate_Average_Marks();student[i].Display_Data();
}
}
