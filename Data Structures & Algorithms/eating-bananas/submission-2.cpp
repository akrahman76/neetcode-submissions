class Solution {
   public:
    int getHours(int x, vector<int>& piles) {
        int k = 0;

        for (int a : piles) {
            int div = a / x;
            int rem = a % x;
            k += rem == 0 ? div : div + 1;
        }
        return k;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int left = 1;
        int right = piles[piles.size() - 1];
        int minK = INT_MAX;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int k = getHours(mid, piles);
            if (k <= h) {
                minK = min(mid, minK);
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return minK;
    }
};
