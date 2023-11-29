#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    int content;
    struct list *prox;
}TList;

typedef struct stackList{
    int height;
    TList *top;
    TList *base;
}stack;

TList *createNo(int value){
    TList *newList = (TList*)malloc(sizeof(TList));
    newList->content = value;
    newList->prox = NULL;
    return newList;
}

stack *createStack(){
    stack *newStack = (stack*)malloc(sizeof(stack));
    if(newStack == NULL) return NULL;
    newStack->base = NULL;
    newStack->top = NULL;
    newStack->height = 0;
    return newStack;
}

int heightStack(stack *stackInput){
    if(stackInput == NULL) return -1; 
    return stackInput->height;
}   

void push(stack **stackInput, char s){
    if(stackInput == NULL) return; 
    int height = heightStack((*stackInput));
    TList *newNo = createNo(s);
    if(height >= 0){
        if(height == 0){
            (*stackInput)->top = newNo;
            (*stackInput)->base = newNo;
        }else if(height == 1){
            newNo->prox = (*stackInput)->top;
            (*stackInput)->base = (*stackInput)->top;
            (*stackInput)->top = newNo;
        }else{
            newNo->prox = (*stackInput)->top;
            (*stackInput)->top = newNo;
        }  
        (*stackInput)->height++;
        return; 
    }
    return;
}

int pop(stack **stackInput){
    if(stackInput == NULL) return -1;
    int number;
    TList *aux;
    int height = heightStack((*stackInput));
    if(height > 0){
        aux = (*stackInput)->top;
        number = aux->content;
        (*stackInput)->top = (*stackInput)->top->prox;
        aux->prox = NULL;
        free(aux);
        (*stackInput)->height--; 
    }
    return number;
}

void insertBase(stack **stackInput, int value){
    if(stackInput == NULL) return;
    TList *newNo = createNo(value);
    (*stackInput)->base->prox = newNo;
    (*stackInput)->base = newNo;
    (*stackInput)->height++;
}


void analyzeCards(int input){
    stack *stackUse = createStack();
    int numbers = input, showNumber, flag = 1;
    while (numbers > 0) {
        push(&stackUse, numbers);
        numbers--;
    }
    printf("Discarded cards: ");
    while(stackUse->height > 1){
        if(flag % 2 != 0){
            showNumber = pop(&stackUse);
            if(stackUse->height == 1){
                printf("%d\n", showNumber);
            }else{
                printf("%d, ", showNumber);
            }
        }else{
            showNumber = pop(&stackUse);
            insertBase(&stackUse, showNumber);
        }
        flag++;
    }
    int valueFinal = stackUse->top->content;
    printf("Remaining card: %d\n", valueFinal);
    free(stackUse->top);
    free(stackUse);
}

int main(){
    while(1){
        int input;
        scanf("%d", &input);
        if(input == 0) break;
        analyzeCards(input);
    }
    return 0; 
}