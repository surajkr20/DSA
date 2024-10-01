int size(Node* head){
    int n = 0;
    Node*  Temp = head;
    while(Temp != NULL){
        Temp = Temp->next;
        n++;
    }
    return n;
}