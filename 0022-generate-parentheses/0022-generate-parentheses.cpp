class Solution {
public:
// notes me ek link di he uspe photo jake dekh lena
// https://drive.google.com/file/d/1YKZCkS3e-a8Ata5aEkb67mulmSPbWRcM/view?usp=drivesdk

// recursion tree banaya he
// recursion se solve kiya hai is problem ko
// recursive function banaya he

// o--> no of opening brackets left
// c--> no of closing brackets left
// count--> ye maintain krega ki koi invalid case count na ko
// if count becomes -1 it means invalid hai
// jab jab '(' add hoga count badega
// jab jab ')' add hoga count ghatega
// if count==-1 it means invalid case banra he...



void solve(int o,int c,int count,vector<string>& ans,string str)
{
    if(count==-1)
    return;

    if(c==0 && o==0 && count==0)
    {
        ans.push_back(str);
        return;
    }
   
    if(o>0)
    solve(o-1,c,count+1,ans,str+'(');
    if(c>0)
    solve(o,c-1,count-1,ans,str+')');
}
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        string str;
        solve(n,n,0,ans,str);
        return ans;
    }
};