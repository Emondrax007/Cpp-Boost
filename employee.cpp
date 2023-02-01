#include<iostream>
using namespace std;
class EMPLOYEE
{
    int Employee_Num,DA,IT,Net_sal,salary;
    string Employee_Name;
    public:
    void read()
    {
        cout<<".............."<<endl;
        cout<<"Enter Employee Number:";
        cin>>Employee_Num;
        cout<<"Enter the Name of the Employee:";
        cin>>Employee_Name;
        cout<<"Enter the gross salary of the Employee:";
        cin>>salary;
    }
    void calculate_salary()
    {
        IT=0.30*salary;
        DA=0.52*IT;
        Net_sal=(salary+DA)-IT;
    }
    void disp()
    {
        cout<<"..............."<<endl;
        cout<<"Employee Number:"<<Employee_Num<<endl;
        cout<<"Name of the Employee:"<<Employee_Name<<endl;
        cout<<"Net salary:"<<Net_sal<<endl;
    }
};
int main()
{
    EMPLOYEE ob1;
    ob1.read();
    ob1.calculate_salary();
    ob1.disp();
    return 0;
}