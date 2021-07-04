class Solution {
public:
    
    void check(map<char,string> &mp)
    {
        mp['a']=".-";
        mp['b']="-...";
        mp['c']="-.-.";
        mp['d']="-..";
        mp['e']=".";
        mp['f']="..-.";
        mp['g']="--.";
        mp['h']="....";
        mp['i']="..";
        mp['j']=".---";
        mp['k']="-.-";
        mp['l']=".-..";
        mp['m']="--";
        mp['n']="-.";
        mp['o']="---";
        mp['p']=".--.";
        mp['q']="--.-";
        mp['r']=".-.";
        mp['s']="...";
        mp['t']="-";
        mp['u']="..-";
        mp['v']="...-";
        mp['w']=".--";
        mp['x']="-..-";
        mp['y']= "-.--";
        mp['z']="--..";
    }
    
    int uniqueMorseRepresentations(vector<string>& words) {
        map<string,int> mp;
        map<char,string> mp1;
        check(mp1);
        for(int i=0;i<words.size();i++)
        {
            string s="";
            for(auto it:words[i])
            {
                s+=mp1[it];
            }
            mp[s]++;
        }
        return mp.size();
    }
};