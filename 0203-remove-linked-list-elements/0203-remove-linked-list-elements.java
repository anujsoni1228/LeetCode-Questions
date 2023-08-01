class Solution {

    public ListNode removeElements(ListNode head, int n) {
        ListNode dummy = new ListNode();
        ListNode ans = dummy;
        while (head != null) {
            while (head != null && head.val == n) {
                head = head.next;
            }
            dummy.next = head;
            dummy = dummy.next;
            if (head != null) head = head.next;
        }
        return ans.next;
    }
}
