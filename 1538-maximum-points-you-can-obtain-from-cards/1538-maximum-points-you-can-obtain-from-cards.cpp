class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int leftSum = 0, rightSum = 0;

        // take first k cards from left
        for (int i = 0; i < k; i++) {
            leftSum += cardPoints[i];
        }

        int maxSum = leftSum;
        // now gradually replace left cards with right cards
        for (int i = 0; i < k; i++) {
            leftSum -= cardPoints[k - 1 - i];   // remove one from left
            rightSum += cardPoints[n - 1 - i];  // add one from right
            maxSum = max(maxSum, leftSum + rightSum);
        }

        return maxSum;
    }
};
