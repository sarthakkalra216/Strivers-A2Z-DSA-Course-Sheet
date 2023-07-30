class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        set<char> st;
        for(int i=0;i<s.length();i++)
        {
            char c1=s[i];
            char c2=t[i];

            //if c1 has been encountered b4
            if(mp.find(c1)!=mp.end())
            {
                //check element is mapped to the same character or not
                if(mp[c1]!=c2)
                {
                    return false;
                }
            }
            //else c1 has never encounterd b4
            else
            {   //check that the mapped charcer is not used b4 using set
                if(st.find(c2)!=st.end())
                {
                    return false;
                }
                else
                {   mp[c1]=c2;
                    st.insert(c2);
                }
            }
        }
        return true;
        }
        
};
