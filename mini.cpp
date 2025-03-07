#include<iostream>
using namespace std;
int main()
{
int t,x;
cin>>t;
for(int i=0;i<t;i++)
{
    bool y=false;
    cin>>x;
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                cout<<x/i<<" "<<x-(x/i)<<endl;
                y=true;
                break;
            }
        }
        if(!y)
        {
            cout<<"1 "<<x-1<<endl;
        }
    
}
    return 0;
}