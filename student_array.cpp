#include <iostream>
using namespace std;
class student
{
    char name[20];
    int avg,usn,marks1,marks2,marks3;
    public:
    void read()
    {
        cout<<"Enter the name and usn number:";
        cin>>name>>usn;
        cout<<"Enter marks in the three subjects:";
        cin>>marks1>>marks2>>marks3;
    }
    int average()
    {
        if(marks1>marks2 && marks3>marks2)
        {
            avg=(marks1+marks3)/2;
        }

        else if(marks2>marks1 && marks3>marks1)
        {
            avg=(marks2+marks3)/2;

        }
        else
        {
            avg=(marks1+marks2)/2;
        }
        
        return 0;
    }
    void disp()
    {
        cout<<"The average of marks is:"<<avg<<endl;
    }

};
int main()
{
    student stu1[3];
    for(int i=0;i<3;i++)
    {
        stu1[i].read();
        stu1[i].average();
        stu1[i].disp();
    }
    return 0;
}