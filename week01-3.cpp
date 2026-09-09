//week01-3.cpp學習計畫 basic 第三題
//LeetCode 28.Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        int N1 = haystack.length(), N2 = needle.length();
        for (int i=0 ;i<= N1-N2;i++){
            if (haystack.substr(i,N2) == needle) return i;
        }
    return -1;//找不到
    }
