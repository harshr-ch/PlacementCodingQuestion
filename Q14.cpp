class Solution {
public:
    string truncateSentence(string s, int k) {
        string t="";
        int i=0;
        while(k && i<s.size())
        {
            if(s[i]==' ')
                k--;
            if(k!=0)
                t+=s[i];
            i++;
        }
        return t;
    }
};