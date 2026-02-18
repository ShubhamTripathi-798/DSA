#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    // ✅ Sort in descending order using rbegin() and rend()
    sort(arr.rbegin(), arr.rend());

    int mySum = 0;
    int coins = 0;

    for(int i = 0; i < n; i++)
    {
        mySum += arr[i];
        coins++;

        if(mySum > total - mySum)
            break;
    }

    cout << coins << endl;

    return 0;
}
