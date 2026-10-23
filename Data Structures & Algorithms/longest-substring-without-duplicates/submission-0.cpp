class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
    int n=s.length();
    if(n<=1)
        return n;

    int res=0;

    int left=0;

    unordered_map<char,int>lastseen;

    for(int right=0;right<n;right++){

        char currentChar=s[right];

        if(lastseen.find(currentChar)!=lastseen.end()&& lastseen[currentChar]>=left){

            left=lastseen[currentChar]+1;

        }
        lastseen[currentChar]=right;

        res=max(res,right-left+1);


        }

    return  res;


        
    }
};
