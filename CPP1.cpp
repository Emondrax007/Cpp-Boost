#include <iostream>
#include <string.h>
using namespace std;
struct cricket
{
    string pName[20];
    string teamName;
    int batting_avg[3];
};
struct cricket t1[3];
int main()
{
    int sum = 0;
    
    for (int i = 0; i < 3; i++)
    {
        
        cout << "Enetr the team name : ";
        cin >> t1[i].teamName;
        for (int j = 0; j < 10; j++)
        {
            cout << "Enter the name of the player : ";
            cin >> t1[i].pName[j];
            cout << "Enter the batting avg of the player : ";
            cin >> t1[i].batting_avg[j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            sum += t1[i].batting_avg[j];
        }
        sum /= 3;
        cout << "The batting avg of team " << i + 1 << " is " << sum << endl;
    }
    return 0;
}