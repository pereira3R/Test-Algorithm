#include <stdio.h>
#include <stdlib.h>

////// pilha estatica //////////

typedef struct list{
    int content;
    struct list *prox;
}TList;

typedef struct stackList{
    int height;
    TList *top;
}stack;

TList *createNo(int value){
    TList *newList = (TList*)malloc(sizeof(TList));
    if(newList == NULL) return NULL;
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

void pushS(stack **stackInput, int s){
    if(stackInput == NULL) return; 
    TList *newNo = createNo(s);
    if((*stackInput)->top == NULL){
        (*stackInput)->top = newNo;
    }else{
        newNo->prox = (*stackInput)->top;
        (*stackInput)->top = newNo;
    }  
    (*stackInput)->height++;
    return; 
    
}

int popS(stack **stackInput){
    if(stackInput == NULL) return -1;
    TList *aux;
    int height = heightStack((*stackInput)), valueR;
    if(height > 0){
        aux = (*stackInput)->top;
        (*stackInput)->top = (*stackInput)->top->prox;
        aux->prox = NULL;
        valueR = aux->content;
        free(aux);
        (*stackInput)->height--; 
    }
    return valueR;
}

void removeAllStack(stack **stackInput) {
    if (stackInput == NULL || (*stackInput)->top == NULL) return;

    TList *aux = (*stackInput)->top;
    TList *next;

    while (aux != NULL) {
        next = aux->prox;
        free(aux);
        aux = next;
    }

    (*stackInput)->top = NULL;
    (*stackInput)->height = 0;

    free(*stackInput);
    *stackInput = NULL;
    return;
}

////// ///////////// //////////

////// fila dinamica //////////

typedef struct fila{
    TList *front;
    TList *back;
    int length;
}TQueue;

TQueue *createQueue() {
    TQueue *fila = (TQueue *)malloc(sizeof(TQueue));
    if (fila == NULL) return NULL;
    fila->front = NULL;
    fila->back = NULL;
    fila->length = 0;
    return fila;
}


void pushQ(TQueue **fila, int valor) {
    if (fila == NULL) return;

    TList *novoNo = createNo(valor);
    if ((*fila)->front == NULL) {
        (*fila)->front = novoNo;
        (*fila)->back = novoNo;
    } else {
        (*fila)->back->prox = novoNo;
        (*fila)->back = novoNo;
    }

    (*fila)->length++;
}


int popQ(TQueue **fila) {
    if (fila == NULL || (*fila)->length == 0) return -1;

    int valueR;
    TList *aux = (*fila)->front;

    if ((*fila)->length == 1) {
        valueR = aux->content;
        free(aux);
        (*fila)->front = NULL;
        (*fila)->back = NULL;
    } else {
        valueR = aux->content;
        (*fila)->front = aux->prox;
        free(aux);
    }
    (*fila)->length--;
    return valueR;
}


void showQueue(TQueue *fila){
    if(fila == NULL || fila->length == 0) return;
    TList *aux = fila->front;
    do{
        printf(" [%d] ", aux->content);
        aux = aux->prox;
    }while(aux != fila->back->prox);
    printf("\n");
}
 
void removeAllQueue(TQueue **queue) {
    if (queue == NULL || (*queue)->front == NULL) return;

    TList *aux = (*queue)->front;
    TList *next;

    while (aux != NULL) {
        next = aux->prox;
        free(aux);
        aux = next;
    }

    (*queue)->front = NULL;
    (*queue)->back = NULL;
    (*queue)->length = 0;
    return;
}

/////// ////////////

/////// fila de prioridade /////////

typedef struct queuePList{
    TList *front;
    TList *back;
    int length;
}queuePriority;

queuePriority *createQueueP(){
    queuePriority *queue = (queuePriority*)malloc(sizeof(queuePriority));
    if(queue == NULL) return NULL;
    queue->front = NULL;
    queue->back = queue->front;
    queue->length = 0;
    return queue;
}

void insertQueueP(queuePriority **queue, int value){
    if(queue == NULL) return;
    TList *newNo = createNo(value), *aux, *ant;
    if((*queue)->front == NULL || value > (*queue)->front->content){
        newNo->prox = (*queue)->front;
        (*queue)->front = newNo;
        if ((*queue)->back == NULL) {
            (*queue)->back = newNo;
        }
        (*queue)->length++;
        return;
    } else {
        if(value < (*queue)->back->content){
            (*queue)->back->prox = newNo;
            (*queue)->back = newNo;
            (*queue)->back->prox = NULL;
        } else {
            aux = (*queue)->front;
            while(value < aux->content && aux->prox != NULL){
                ant = aux;
                aux = aux->prox;
            }
            newNo->prox = aux;
            ant->prox = newNo;
        }
    }
    (*queue)->length++;
    return;
}

int removeQueueP(queuePriority **queue) {
    if (queue == NULL || (*queue)->front == NULL) return -1;

    TList *aux = (*queue)->front;
    int valueR = aux->content;

    (*queue)->front = aux->prox;
    if ((*queue)->front == NULL) {
        (*queue)->back = NULL;
    }

    aux->prox = NULL;
    free(aux);

    (*queue)->length--;

    return valueR;
}

void removeAllQueueP(queuePriority **queue) {
    if (queue == NULL || (*queue)->front == NULL) return;

    TList *aux = (*queue)->front;
    TList *next;

    while (aux != NULL) {
        next = aux->prox;
        free(aux);
        aux = next;
    }

    free(*queue);
    *queue = NULL;
    return;
}
///////////////////////////////////


int main() {
    queuePriority *queueP;
    stack *stack;
    TQueue *queue;
    int n, first, second, f1, f2, f3, flag1, flag2, flag3;

    while (scanf("%d", &n) != EOF) {
        queueP = createQueueP();
        stack = createStack();
        queue = createQueue();

        flag1 = 1; flag2 = 1; flag3 = 1;

        while (n > 0) {
            scanf("%d %d", &first, &second);

            if (first == 1) {
                if(flag3 == 1)insertQueueP(&queueP, second);
                if(flag1 == 1)pushQ(&queue, second);
                if(flag2 == 1)pushS(&stack, second);
            } else if (first == 2) {
                if(flag1 == 1){
                    f1 = popQ(&queue);
                    if (second != f1) {
                    flag1 = 0;
                    }
                }
                if(flag2 == 1){
                    f2 = popS(&stack);
                    if (second != f2) {
                        flag2 = 0;
                    }
                }
                if(flag3 == 1){
                    f3 = removeQueueP(&queueP);
                    if (second != f3) {
                        flag3 = 0;
                    }
                }


            }
            n--;
        }

        if ((flag1 == 1 && flag2 == 1) || (flag1 == 1 && flag3 == 1) || (flag2 == 1 && flag3 == 1)) {
            printf("not sure\n");
        } else if (flag1 == 0 && flag2 == 0 && flag3 == 0) {
            printf("impossible\n");
        } else if (flag1) {
            printf("queue\n");
        } else if (flag2) {
            printf("stack\n");
        } else if (flag3) {
            printf("priority queue\n");
        }

        removeAllQueue(&queue);
        removeAllQueueP(&queueP);
        removeAllStack(&stack);
    }

    return 0;
}