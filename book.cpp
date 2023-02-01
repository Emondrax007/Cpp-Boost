#include <iostream>
using namespace std;
class BOOK
{
public:
    int price, ISBN_no;
    char name[10], author[10];

    void read()
    {
        cout << "\n\nEnter the name  of the book :";
        cin >> name;
        cout << "\n\nEnter the Author :";
        cin >> author;
        cout << "\n\nEnter the price:";
        cin >> price;
        cout << "\n\nEnter the ISBN_ no :";
        cin >> ISBN_no;
    }
    void disp()
    {
        cout <<"\n"<< "The name  of the book :"<<name;
        
        cout <<"\n"<< "The name of the  Author :"<<author;
        
        cout <<"\n"<< "Price of the book:"<<price;
                
        cout <<"\n"<< "ISBN_ no of the book :"<<ISBN_no;
    
    }
};

int main()
{
    int s;
    BOOK abc[5];
    for (int i = 0; i < 5; i++)
    {
        abc[i].read();
    }
    cout<<"\n Enter the  isbn  number of the book to be searched";
    cin>>s;
    for (int i = 0; i < s; i++)
    {
        if (abc[i].ISBN_no == s)
        {
            abc[i].disp();
            break;
        }
    }
    cout << "\n";
    return 0;
}
