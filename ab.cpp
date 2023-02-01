#include<iostream>
using namespace std;
class a
{
    public:
    a()
    {
        cout<<"constructor is called: "<<endl;
    }
    ~a()
    {
        cout<<"destructor is called: ";
    }
};
int main()
{
    a ob;
    return 0;
}