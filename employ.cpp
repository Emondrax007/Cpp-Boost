#include<iostream>
using namespace std;
class EMPLOYEE
{
    public:
    int salary;
    char Employee_Name[10];
    void read()
    {
        cout<<".............."<<endl;
        cout<<"Enter the Name of the Employee:";
        cin>>Employee_Name;
        cout<<"Enter the salary of the Employee:";
        cin>>salary;
    }
    void disp()
    {
        cout<<"..............."<<endl;
        cout<<"Name of the Employee:"<<Employee_Name<<endl;
        cout<<"Salary of the employee:"<<salary<<endl;
    }
};
int main()
{
    EMPLOYEE ob1[3],temp;
    for(int i=0;i<3;i++)
    {
        ob1[i].read();
    }
    for(int i=0;i<2;i++)
    {
        if(ob1[i].salary > ob1[i+1].salary)
        {
            temp=ob1[i+1];
            ob1[i+1]=ob1[i];
            ob1[i]=temp;

        }
    }
    cout<<"\n"<<"Employee with  the highest salary:";
    ob1[2].disp();
    cout<<"\n"<<"employee with the lowest salary:";
    ob1[0].disp();
    cout<<"\n";
    

    
    
    return 0;
}