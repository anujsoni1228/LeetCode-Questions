class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> im) {
       for(int i=0;i<im.size();i++)
       {
          reverse(im[i].begin(),im[i].end());
          for(auto j=0;j<im[i].size();j++)
              im[i][j]=im[i][j]==0;
       }
       return im;
   }
};