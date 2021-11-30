#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int a =0;
        int b= 0;
        for (auto i : word)
        {
            if(i != ch)
            {
                b++;
            }
            else{
                reverse(word.begin(),word.begin()+b+1);
                break;
            }
        }
        return word;
        
    }
};
int main()
{
    // string word = "abcdefd";
    // string word = "xyxzxe";
    string word = "xyxzxe";
    char ch = 'z';
    Solution s;
    cout<< s.reversePrefix(word,ch);
    return 0;
}