Given a singly linked list l and an integer n, find the nth element from the end in l. If there are fewer than n elements in l, return -1.

Example

For l = [1, 2, 3, 4] and n = 3, the output should be
nthElementFromTheEnd(l, n) = 2;
For l = [10, 4, 2, 5, 8, 3, 2, 4] and n = 9, the output should be
nthElementFromTheEnd(l, n) = -1.

int nthElementFromTheEnd(ListNode<int> * l, int n) {
    int cnt = 0,i=0;
    ListNode<int> * head = l;
    while(head!=NULL){
        head = head->next;
        cnt++;
    }

    if(n>cnt){
        return -1;
    }
    
    while(i<cnt-n){
        l = l->next;
        i++;
    }

    return l->value;
}
