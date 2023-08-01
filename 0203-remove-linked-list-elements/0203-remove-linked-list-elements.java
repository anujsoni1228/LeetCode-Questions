class Solution {

    public ListNode removeElements1(ListNode head, int n) {
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

    public ListNode removeElements(ListNode head, int n) {
        if (head == null) return null;
        head.next = removeElements(head.next, n);
        return head.val == n ? head.next : head;
    }
}
