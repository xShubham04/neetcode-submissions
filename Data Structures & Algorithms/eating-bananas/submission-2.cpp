class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        int res=end;
        while(start<=end){
            int mid=start+(end-start)/2;
            long long time=0;
            for(int p :piles)
            time+=ceil((double)p/mid);
            if(time<=h){
                res=mid;
                end=mid-1;
            }else start=mid+1;
        }
        return res;
    }
};
