/*
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(!head1 && !head2)
    {
        return 1;
    }
    else if(!head1 || !head2)
    {
        return 0;
    }
    
    if(head1->data == head2->data)
    {
        return compare_lists(head1->next, head2->next);
    }
    else
    {
        return 0;
    }
    
    return 1;
}
*/