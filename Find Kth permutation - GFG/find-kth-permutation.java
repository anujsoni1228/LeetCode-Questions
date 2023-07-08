//{ Driver Code Starts
import java.io.*;
import java.util.*;

// } Driver Code Ends
class Solution {
    
    public String kthPermutation(int n, int k) {
        int[] fact = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
        StringBuilder ans = new StringBuilder();
        int pos = 1, i;
        while (pos <= n) {
            i = 1;
            while (i <= n) {
                if (fact[i] < 0) {
                    i++;
                    continue;
                }
                if (k - Math.abs(fact[n - pos]) > 0) {
                    k -= Math.abs(fact[n - pos]);
                } else {
                    break;
                }
                i++;
            }
            ans.append(i);
            fact[i] = -fact[i];
            pos++;
        }
        return ans.toString();
    }
}
 


//{ Driver Code Starts.

class IntArray
{
    public static int[] input(BufferedReader br, int n) throws IOException
    {
        String[] s = br.readLine().trim().split(" ");
        int[] a = new int[n];
        for(int i = 0; i < n; i++)
            a[i] = Integer.parseInt(s[i]);
        
        return a;
    }
    
    public static void print(int[] a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }
    
    public static void print(ArrayList<Integer> a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }
}

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            int[] a = IntArray.input(br, 2);
            
            Solution obj = new Solution();
            String res = obj.kthPermutation(a[0],a[1]);
            
            System.out.println(res);
            
        }
    }
}

// } Driver Code Ends