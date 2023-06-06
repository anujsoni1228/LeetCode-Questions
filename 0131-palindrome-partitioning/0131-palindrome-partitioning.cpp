class Solution {
public:
  // DP ka question he ye
  
  // image link
  // https://drive.google.com/file/d/1aLiQdLJQwcOkmAqJ7_A7TG8wt-Uf_WNi/view?usp=drivesdk
  
  // Function for checking palindrome string
  bool isPal(string s)
  {
    int i=0,j=s.length()-1;
    while(i<j)
    if(s[i++]!=s[j--])
        return false;
    return true;
  }
  
  // recursive function Banaya Hai alag se
  void solve(string &s,vector<vector<string>> &ans,int par,vector<string> v)
  {
    // aab| (here par==3) so we will stop ans take ans
    if(par==s.length())
    {
      ans.push_back(v);
      return;
    }
    
    // create all possible substrings
    // like a aa aab
    for(int i=par;i<s.length();i++) 
    {
      string x=s.substr(par,i-par+1);
      
      // continue recursion tree only when it is a 
      // palindrome otherwise don't go into depth
      if(isPal(x))
      {
        vector<string> newV=v;
        newV.push_back(x);
        solve(s,ans,i+1,newV);
      }
    }
  }
    vector<vector<string>> partition(string s) 
    {
      vector<vector<string>> ans;
      vector<string> v;
      solve(s,ans,0,v);
      return ans;
    }
};