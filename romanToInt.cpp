class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        for (char c : s) {
            if (c == 'I') {
                num += 1;
            } else if (c == 'V') {
                num += (num % 5 == 0) ? 5 : 3;
            } else if (c == 'X') {
                num += (num % 10 == 0) ? 10 : 8;
            } else if (c == 'L') {
                num += (num % 50 == 0) ? 50 : 30;
            } else if (c == 'C') {
                num += (num % 100 == 0) ? 100 : 80;
            } else if (c == 'D') {
                num += (num % 500 == 0) ? 500 : 300;
            } else if (c == 'M') {
                num += (num % 1000 == 0) ? 1000 : 800;
            }
        }
        return num;
    }
};
