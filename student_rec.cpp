#include <iostream>
using namespace std;
class student
{
    char name[20];
    int avg,reg_no,marks1,marks2,marks3;
    public:
    void read()
    {
        cout<<"Enter the name and registration number:";
        cin>>name>>reg_no;
        cout<<"Enter marks in the three subjects:";
        cin>>marks1>>marks2>>marks3;
    }
    int average()
    {
        avg=(marks1+marks2+marks3)/3;
        return 0;
    }
    void disp()
    {
        cout<<"The average of marks is:"<<avg<<endl;
    }

}stu1;
int main()
{
    stu1.read();
    stu1.average();
    stu1.disp();
    return 0;
}