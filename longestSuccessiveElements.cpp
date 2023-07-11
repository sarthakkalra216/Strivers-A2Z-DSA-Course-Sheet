int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    set<int> st;
    int cnt=0;
    int longw=1;
    for(auto it:a)
    {
        st.insert(it);
    }
    for(auto it:st)
    {
        if(st.find(it-1)==st.end())
        {
            int x=it;
            cnt=1;
            while(st.find(x+1)!=st.end())
            {   
                x=x+1;
                cnt++;
            }
             longw=max(longw,cnt);
        }
    }
    return longw;
}
