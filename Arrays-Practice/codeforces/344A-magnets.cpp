#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string curr, prev;
    cin>>prev;
    int groups = 1;
    for(int i = 1; i < n; i++)
    {
        cin>>curr;
        
        if(curr != prev){
            groups++;
        }
        
        prev = curr;
    }
    cout<<groups<<endl;
    return 0;
}