
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your No :- ";
    cin>>n;
    int m;
    cout<<"Enter your no of collumns :- ";
    cin>>m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout <<j<<" ";
        }
        cout<<endl;
    }
}