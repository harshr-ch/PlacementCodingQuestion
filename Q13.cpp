class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> mp;
        for(int i=0;i<allowed.length();i++)
            mp[allowed[i]]=1;
        int sum=words.size();
        for(int i=0;i<words.size();i++)
        {
            for(auto it:words[i])
            {
                if(mp[it]==0)
                {
                    sum--;
                    break;
                }    
            }
        }
        return sum;
    }
};