#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long l,r,i;
    cin>>l>>r;
    cout<<"YES"<<endl;
    for(i=l;i<=r;i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
    }
    return 0;
}
