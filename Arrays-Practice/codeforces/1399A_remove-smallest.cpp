#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }
        bool flag = 1;
        sort(vec.begin(),vec.end());
        for(int i = 0; i < n-1; i++)
        {
            if(vec[i+1]-vec[i] > 1)
            {
                flag = 0;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
       
    }
    return 0;
}