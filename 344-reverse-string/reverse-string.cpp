class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size() -1;

        int left = 0 , right = n;
        while(left < right){
        swap(s[left] , s[right]);
        left++;
        right--;
    }
    }
};