class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int max=200;
        string str="";
        if(strs.size()==0)
            return str;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size()<=max)
                max=strs[i].size();
        }
        string s = "";
        int flag=0;
        for(int i=0;i<max;i++)
        {
            flag=0;
            char ch=strs[0][i];
            for(int j=0;j<strs.size();j++)
            {
                if(ch!=strs[j][i])
                { 
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                s+=ch;
            else
                break;
        }
        return s;
    }
};