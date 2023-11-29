#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    char content;
    struct list *prox;
}TList;

typedef struct stackList{
    int height;
    TList *top;
}stack;

TList *createNo(char value){
    TList *newList = (TList*)malloc(sizeof(TList));
    newList->content = value;
    newList->prox = NULL;
    return newList;
}

stack *createStack(){
    stack *newStack = (stack*)malloc(sizeof(stack));
    if(newStack == NULL) return NULL;
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
        }else{
            newNo->prox = (*stackInput)->top;
            (*stackInput)->top = newNo;
        }  
        (*stackInput)->height++;
        return; 
    }
    return;
}

void pop(stack **stackInput){
    if(stackInput == NULL) return;
    TList *aux;
    int height = heightStack((*stackInput));
    if(height > 0){
        aux = (*stackInput)->top;
        (*stackInput)->top = (*stackInput)->top->prox;
        aux->prox = NULL;
        free(aux);
        (*stackInput)->height--; 
    }
    return;
}

void removeStack(stack *stackInput){
    if(stackInput == NULL) return;
    while(stackInput->height > 0){
        pop(&stackInput);
        stackInput->height--;
    }
    free(stackInput);
}

int analyzeString(char *string){
    stack *stackUse = createStack();
    int countD = 0;
    int index = 0;
    while (string[index] != '\0') {
        if (stackUse->top != NULL && stackUse->top->content == '<' && string[index] == '>') {
            pop(&stackUse);
            countD++;
        } else {
            if (string[index] == '<' || string[index] == '>') {
                push(&stackUse, string[index]);
            }
        }
        index++;
    }
    removeStack(stackUse);
    return countD;
}

int main(){

    char stringUser[1000];
    int qtd;
    scanf("%d", &qtd); 
    while(qtd > 0){
        scanf("%s", stringUser);
        printf("%d\n", analyzeString(stringUser));
        qtd--;
    }
    return 0; 
}