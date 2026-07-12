class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int answer = nums[0];
        int maxEndingHere = 1;
        int minEndingHere = 1;

        for (int num : nums) {
            int previousMax = maxEndingHere;

            maxEndingHere = max({
                num,
                previousMax * num,
                minEndingHere * num
            });

            minEndingHere = min({
                num,
                previousMax * num,
                minEndingHere * num
            });

            answer = max(answer, maxEndingHere);
        }

        return answer;
    }
};