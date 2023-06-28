class Solution {
    // watch striver video
    // dono array ki lengths ka sum nikalo
    // / by 2 kro
    // to tumko ye pata chlega ki median ke left me kitne elements ane chahiye
    // fir pehle wale (smaller ) array me binary search lagado
    // pehle wale ke mid se dusre wale array ka mid automaticaly decide ho jayega
    // then see left half ke sare eleents (includind left parts pf both arrys)
    // right half se chhote he ya nahi and accordingly move the mid 
    // thoda tough question he ye isliye method thodi si memorie krlena 

    public double findMedianSortedArrays(int[] a, int[] b) {
        if (a.length > b.length) return findMedianSortedArrays(b, a);
        int n1 = a.length, n2 = b.length;
        int low = 0, high = n1;
        while (low <= high) {
            int c1 = low + (high - low) / 2;
            int c2 = (n1 + n2 + 1) / 2 - c1;

            int l1 = c1 == 0 ? Integer.MIN_VALUE : a[c1 - 1];
            int l2 = c2 == 0 ? Integer.MIN_VALUE : b[c2 - 1];
            int r1 = c1 == n1 ? Integer.MAX_VALUE : a[c1];
            int r2 = c2 == n2 ? Integer.MAX_VALUE : b[c2];

            if (l1 <= r2 && l2 <= r1) {
                return   (n1 + n2) % 2 == 0 
                        ? 
                           (Math.max(l1, l2) + Math.min(r1, r2)) / 2.0 
                        : 
                            Math.max(l1, l2);
            } else if (l2 > r1) {
                low = c1 + 1;
            } else {
                high = c1 - 1;
            }
        }
        return 0.0;
    }
}
