class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++ )
        {
            int num = i/2;
            if(num*2 != i)
            {
                count++;
            }
        }
        return count;
    }
};