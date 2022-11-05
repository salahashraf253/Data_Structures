// Online C compiler to run C program online
#include <stdio.h>
struct Node{
    int val;
    struct Node*next;
};
struct Node*head=NULL;
void appendNode(int val){
    struct Node*newNode=(struct Node*)(malloc(sizeof(head)));
    if(newNode==NULL){
        return ;
    }
    newNode->val=val;
    newNode->next=NULL;
    if(head!= NULL){
       struct  Node*tmp=head;
       while(tmp->next != NULL){
           tmp=tmp->next;
       }
       tmp->next=newNode;
    }
    else head=newNode;
    // return newNode;
}
void swapTwoNodes(struct Node* n1, struct Node* n2){
	int val = n1->val;
	n1->val = n2->val;
	n2->val = val;
}
void sortUsingSelection()	{
	struct Node* tmp = head;
	struct Node* min_node;

	while (tmp)	{
		struct Node* min_node = tmp;
		struct Node* node = tmp->next;
		while (node){
			if (min_node->val > node->val)min_node = node;

			node = node->next;
		}
		swapTwoNodes(tmp, min_node);
		tmp = tmp->next;
	}
}
/////////////////Insertion Sort\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

struct Node* sorted = NULL;
void sortedInsert(struct Node* newnode)
{
    /* Special case for the head end */
    if (sorted == NULL || sorted->val >= newnode->val) {
        newnode->next = sorted;
        sorted = newnode;
    }
    else {
        struct Node* current = sorted;
        while (current->next != NULL
               && current->next->val < newnode->val) {
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
}
void sortUsingInsertion()
{
    struct Node* current = head;
    while (current != NULL) {
        struct node* next = current->next;
        sortedInsert(current);
        current = next;
    }
    head = sorted;
}

//////////////////////////Quick Sort//////////////////////
struct Node* last_node(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL && temp->next != NULL) {
        temp = temp->next;
    }
    return temp;
}
struct Node* parition(struct Node* first, struct Node* last)
{
    // Get first node of given linked list
    struct Node* pivot = first;
    struct Node* front = first;
    int temp = 0;
    while (front != NULL && front != last) {
        if (front->val < last->val) {
            pivot = first;
            swapTwoNodes(first, front);
            first = first->next;
        }
        front = front->next;
    }
    swapTwoNodes(first,last);
    return pivot;
}
void sortUsingQuick(struct Node* first, struct Node* last)
{
    if (first == last) return;
    struct Node* pivot = parition(first, last);
    if (pivot != NULL && pivot->next != NULL) {
        sortUsingQuick(pivot->next, last);
    }
    if (pivot != NULL && first != pivot) {
        sortUsingQuick(first, pivot);
    }
}
 
void printList(){
    struct Node*tmp=head;
    while(tmp!= NULL){
        printf("%d\n",tmp->val);
        tmp=tmp->next;
    }
}
int main() {
    appendNode(104);
    appendNode(12);
    appendNode(-423);
    appendNode(1);
    print();
    sortUsingQuick(head, last_node(head));
    // sortUsingInsertion();
    // sortUsingSelection();
    printf("After Sorting\n");
    printList();
    return 0;
}
