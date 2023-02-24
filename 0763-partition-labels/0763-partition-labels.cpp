class Solution {
public:
    // s =          "ababcbacadefegdehijhklij"
    //               ↑ 
    // look at this "a" (ask here ki piche se [last se] 'a' konsi index per he)
    // iska answer map se milega , map will contain this information ki ye
    // letter piche se konsi index per appear hua he
    
   
        
        
    vector<int> partitionLabels(string s) 
    {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
            m[s[i]]=i;
        
        // p represents partition index, c represents length of partition
        // p ko jitna dur bhej skte ho
        // bhejo, thats why we are, maximising p, or jab i==p ho jayega it means
        // current partition ke sare log mil ke bus p ko itna hi dur 
        // fek paye to yahi per ans banega or next partition start hoga        
        int p=0,c=0;
        vector<int> ans;
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]>p)
                p=m[s[i]];
            c++;
            if(i==p)
                ans.push_back(c),c=0;
        }
        return ans;
        
    }
};