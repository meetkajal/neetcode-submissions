class Solution {
   public:
    bool isPalindrome(string s) {
        int n = s.size();

        int left = 0;
        int right = n - 1;

        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            if (!isalnum(s[right])) {
                right--;
                continue;
            }

            if (toupper(s[left]) != toupper(s[right])) {
                return false;
            }

            left++;
            right--;
        }
        return true;
    }
};
