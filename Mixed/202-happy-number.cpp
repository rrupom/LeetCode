class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> us;

        while (n != 1) {
            if (us.count(n)) return false;
            else {
                us.insert(n);
                n = squareSum(n);
            }
        }

        return true;
    }

private:
    int squareSum(int num) {
        int sum = 0;
        while (num) {
            int digit = num % 10;
            sum += (digit * digit);
            num /= 10;
        }

        return sum;
    }
};