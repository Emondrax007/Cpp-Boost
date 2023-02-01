#include<iostream>
using namespace std;
class CIRCLE
{
    float radius;
    float area;
    float PI=3.14;
    public:
    void read()
    {
        cout<<"Enter the the radius of the circle:";
        cin>>radius;
    }
    int calc_area()
    {
        area=PI*radius*radius;
        return 0;
    }
    void disp()
    {
        cout<<"The area of the circle is:"<<area<<endl;
    }
} ob1;
int main()
{
    ob1.read();
    ob1.calc_area();
    ob1.disp();
    return 0;
}