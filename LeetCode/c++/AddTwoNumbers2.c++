#include <iostream> 
#include <string> 
using namespace std;

struct ListNode{
    int val;
    ListNode *next; 
};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode *auxG = NULL; 
    ListNode *auxL1 = l1; 
    ListNode *auxL2 = l2; 
    int counter1 = 0; int counter2 = 0;
    while(auxL1){
        counter1++; 
        auxL1 = auxL1->next; 
    }
    while(auxL2){
        counter2++;
        auxL2 = auxL2->next; 
    }
    if(counter1 > counter2){
        auxG = l1; 
    }else{
        auxG = l2; 
    }
    auxL1 = l1; auxL2 = l2;
    ListNode *l3 = NULL;
    int sum = 0; 
    while(auxG){

        if(auxL1){
            sum += auxL1->val;
            auxL1 = auxL1->next;
        }

        if(auxL2){
            sum += auxL2->val;
            auxL2 = auxL2->next;
        }

        if(l3 == NULL){
            ListNode *newNode = new ListNode;
            newNode->val = sum % 10;
            newNode->next = NULL; 
            l3 = newNode;
        }else{
            ListNode *runEnd = l3;
            while(runEnd->next){
                runEnd = runEnd->next;
            }
            ListNode *newNode = new ListNode;
            newNode->val = sum % 10;
            newNode->next = NULL; 
            runEnd->next = newNode; 
        }

        sum = sum / 10;
        auxG = auxG->next; 
        if(auxG == NULL){
            if(sum != 0){
                ListNode *runner = l3;
                while(runner->next){
                    runner = runner->next;
                }
                ListNode *newNode = new ListNode;
                newNode->val = sum;
                newNode->next = NULL; 
                runner->next = newNode; 
            }
        }
    }
    return l3; 

}

int main(){
    ListNode *l1 = NULL; ListNode *l2 = NULL; 

    //l1 
    ListNode *node1 = new ListNode;
    ListNode *node2 = new ListNode;
    ListNode *node3 = new ListNode;

    node1->val = 3;
    node2->val = 4;
    node3->val = 2;

    node1->next = NULL;
    node3->next = node2;
    node2->next = node1;
    l1 = node3;

    //l2
    ListNode *node11 = new ListNode;
    ListNode *node22 = new ListNode;
    ListNode *node33 = new ListNode;

    node11->val = 4;
    node22->val = 6;
    node33->val = 5;

    node11->next = NULL;
    node33->next = node22;
    node22->next = node11;
    l2 = node33; 

    ListNode *aux1 = l1; 
    printf("List1: ");
    while(aux1){
        printf("%d ", aux1->val);
        aux1 = aux1->next;
        if(aux1== NULL){
            printf("\n");
        }
    }

    ListNode *aux2 = l2; 
    printf("List2: ");
    while(aux2){
        printf("%d ", aux2->val);
        aux2 = aux2->next;
        if(aux2 == NULL){
            printf("\n");
        }
    }

    ListNode *aux3 = addTwoNumbers(l1, l2); 
    printf("List3: ");
    while(aux3){
        printf("%d ", aux3->val);
        aux3 = aux3->next; 
        if(aux3 == NULL){
            printf("\n");
        }
    }
    return 0;
}