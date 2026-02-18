#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int s = 0, d = 0;
    int left = 0, right = n - 1;
    int turn = 0; // 0 = Sereja, 1 = Dima

    while(left <= right)
    {
        int pick;

        if(arr[left] > arr[right])
        {
            pick = arr[left];
            left++;
        }
        else
        {
            pick = arr[right];
            right--;
        }

        if(turn == 0)
            s += pick;
        else
            d += pick;

        turn = 1 - turn; // switch turn
    }

    cout << s << " " << d << endl;
    return 0;
}
