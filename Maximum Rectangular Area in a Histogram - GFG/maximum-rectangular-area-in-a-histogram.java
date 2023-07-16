//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim());
		while(t-->0){
		    long n = Long.parseLong(br.readLine().trim());
		    String inputLine[] = br.readLine().trim().split(" ");
		    long[] arr = new long[(int)n];
		    for(int i=0; i<n; i++)arr[i]=Long.parseLong(inputLine[i]);
		    System.out.println(new Solution().getMaxArea(arr, n));
		}
	}
}




// } Driver Code Ends


class Solution
{
    public long largestRectangleArea(long[] h) {
        long[] l = new long[h.length];
        long ans = 0;
        Stack<Integer> s = new Stack<>();
        for (int i = 0; i < h.length; i++) {
            while (!s.empty() && h[s.peek()] >= h[i]) s.pop();
            if (s.empty()) l[i] = -1;
            else l[i] = s.peek();
            s.push(i);
        }
        s = new Stack<>();
        for (int i = h.length - 1; i >= 0; i--) {
            while (!s.empty() && h[s.peek()] >= h[i]) s.pop();
            ans = Math.max(ans, ((s.empty() ? h.length : s.peek()) - l[i] - 1) * h[i]);
            s.push(i);
        }
        return ans;
    }
    public long getMaxArea(long hist[], long n) 
    {
        return largestRectangleArea(hist);
    }
        
}



