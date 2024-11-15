//還沒搞懂!!!!
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(struct ListNode* head, int val) {
    struct ListNode* newNode = createNode(val);
    struct ListNode* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


// void insertmid(struct ListNode** org_list, struct ListNode* ins_node) {
//     struct ListNode* newNode = createNode(ins_node->val);
//     newNode->next = *org_list.next;
//     *org_list->next = &newNode;
// }

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode temp;
    struct ListNode *current = &temp;
    printf("init list1 %p\n",list1);
    printf("init list2 %p\n",list2);

    while( list1 != NULL && list2 != NULL) {
        printf("\n\nlist1 %p\n",list1);
        printf("list2 %p\n",list2);
        if ( (*list1).val <= (*list2).val ){
            current->next = list1;
            list1 = (*list1).next;
            current->next = list1;
            printf("(*current).next change to         %p\n",(*current).next);
        }else{
            (*current).next = list2;
            list2 = (*list2).next;
            (*current).next = list2;
        }
    }
    // printf("%p\n",list1);
    // printf("%p\n",(*current).next);
    // printf("%p\n",(*list1).next);
    // printf("%p\n",list2);

    if (list1.next == NULL) {
        (*current).next = list1;
    }else{
        (*current).next = list2;
    }

    return temp.next;

}

void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main(){

    struct ListNode* list1 = createNode(1);
    insertAtEnd(list1, 2);
    insertAtEnd(list1, 4);


    struct ListNode* list2 = createNode(1);
    insertAtEnd(list2, 3);
    insertAtEnd(list2, 4);
    //insertmid(&head, list2);
    struct ListNode* mer = mergeTwoLists(list1, list2);
    printList(mer);


}