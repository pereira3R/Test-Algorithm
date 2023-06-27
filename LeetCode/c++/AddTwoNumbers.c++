#include <iostream> 
#include <string> 
using namespace std; 

struct ListNode{
    int val;
    ListNode *next;
}; 

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode* auxL1 = l1;
        ListNode* auxL2 = l2;
        string strL1 = "";
        string strL2 = "";
        string strL3 = "";
        //getting the last value
            while(auxL1 != NULL){
                strL1 += std::to_string(auxL1->val);
                auxL1 = auxL1->next;
            }
            while(auxL2 != NULL){
                strL2 += std::to_string(auxL2->val);
                auxL2 = auxL2->next;
            }

            reverse(strL1.begin(), strL1.end());
            reverse(strL2.begin(), strL2.end());
        //make the sum of values string and convert for the type int
        long long int sum = stoll(strL2) + stoll(strL1);
        strL3 = std::to_string(sum);
        int counter = 0;
        ListNode *l3 = NULL;
        while(counter <= strL3.size() - 1){
            ListNode * newNode = new ListNode;
            newNode->val = strL3[counter] - '0';
            newNode->next = l3;
            l3 = newNode;
            counter += 1;
        }
        return l3;
    }
    
int main(){
    //Create list the problem
    ListNode *l1 = NULL; ListNode *l2 = NULL; 
    
    //list 1
    ListNode *node1 = new ListNode;
    ListNode *node2 = new ListNode;
    ListNode *node3 = new ListNode;
    
    node1->val = 3;
    node2->val = 4;
    node3->val = 2;
    
    node1->next = nullptr;
    node3->next = node2;
    node2->next = node1;
    
    //list 2
    ListNode *node11 = new ListNode;
    ListNode *node22 = new ListNode;
    ListNode *node33 = new ListNode;
    l1 = node3;

    node11->val = 4;
    node22->val = 6;
    node33->val = 5;
    
    node11->next = nullptr;
    node33->next = node22; 
    node22->next = node11;
    l2 = node33;

    ListNode *aux = l1;
    printf("List1: ");
    while(aux!=NULL){
        printf("%d ", aux->val);
        aux = aux->next; 
        if(aux ==  NULL){
            printf("\n");
        }
    }
    ListNode *aux1 = l2;
    printf("List2: ");
    while(aux1!=NULL){
        printf("%d ", aux1->val);
        aux1 = aux1->next; 
        if(aux1 ==  NULL){
            printf("\n");
        }
    }

    ListNode *auxL3 = addTwoNumbers(l1, l2);
    ListNode *aux3 = auxL3;
    printf("List3: ");
    while(aux3!=NULL){
        printf("%d ", aux3->val);
        aux3 = aux3->next; 
        if(aux3 ==  NULL){
            printf("\n");
        }
    } 
}