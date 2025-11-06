class Solution {
public:
    int romanToInt(string s) {
        int len = s.length();
        int num=0;
        int i=0;
        while(i<len) {

            if (s[i] == 'I') {

                if (s[i + 1] == 'V') {
                    num = num + 4;
                    i++;
                    i++; continue;
                } else if (s[i + 1] == 'X') {
                    num = num + 9;
                    i++;
                    i++; continue;
                } else {
                    num = num + 1;
                    i++; continue;
                }
            }

            if (s[i] == 'X') {
                if (s[i + 1] == 'L') {
                    num = num + 40;
                    i++;
                    i++; continue;
                } else if (s[i + 1] == 'C') {
                    num = num + 90;
                    i++;
                    i++; continue;
                } else {
                    num = num + 10;
                    i++; continue;
                }
            }

            if (s[i] == 'V') {
                num = num + 5;
                i++; continue;
            }

            if (s[i] == 'L') {
                num = num + 50;
                i++; continue;
            }

            if (s[i] == 'C') {
                if (s[i + 1] == 'D') {
                    num = num + 400;
                    ++i;
                    i++; continue;
                } else if (s[i + 1] == 'M') {
                    num = num + 900;
                    i++;
                    i++; continue;
                } else {
                    num = num + 100;
                    i++; continue;
                }
            }

            if (s[i] == 'D') {
                num = num + 500;
                i++; continue;
            }
            if (s[i] == 'M') {
                num = num + 1000;
                i++; continue;
            }
        }
        return num;
    }
};