#include <stdio.h>
#include <stdlib.h> 

typedef struct no {
  int key;
  struct no *next;
}TNo;

typedef struct table_hash {
  int length;
  TNo **space;
} TableHash;

TableHash *createTableHash(int lengthInput){
    TableHash *tableH = (TableHash *)malloc(sizeof(TableHash));
    if(tableH == NULL) return NULL;
    tableH->length = lengthInput;
    tableH->space = (TNo **)malloc(lengthInput * sizeof(TNo *));
    for(int i = 0; i < tableH->length; i++){
        tableH->space[i] = NULL;
    }
    return tableH;
}

TNo *createNo(int value){
    TNo *newNo = (TNo*)malloc(sizeof(TNo));
    if(newNo == NULL) return NULL;
    newNo->key = value;
    newNo->next = NULL;
    return newNo;
}

int calculusHash(int lengthIndex, int value){
    return (value % lengthIndex);
}

void insertTableHash(TableHash *table, int value){
    if(table == NULL) return;
    int posIndex = calculusHash(table->length, value);
    TNo *newNo = createNo(value);
    if(table->space[posIndex] == NULL){
        table->space[posIndex] = newNo;
    }else{
        TNo *aux = table->space[posIndex];
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = newNo;
    }
}

void show_table(TableHash *table) {
  for (int i = 0; i < table->length; i++) {
    TNo *no = table->space[i];
    printf("%d ->", i);

    while (no != NULL) {
      printf(" %d ->", no->key);
      no = no->next;
    }
    printf(" \\\n");
  }
}

void removeAllTableHash(TableHash *table) {
    if (table == NULL) return;
    
    for (int index = 0; index < table->length; ++index) {
        TNo *aux = table->space[index];
        
        while (aux != NULL) {
            TNo *nextNo = aux->next;
            free(aux);
            aux = nextNo;
        }
        
        table->space[index] = NULL;
    }
}

int main(){
    
    TableHash *table;
    int qtd, qtdIndex, qtdKey, value;
    scanf("%d", &qtd);
    while(qtd > 0){

        scanf("%d %d", &qtdIndex, &qtdKey);
        table = createTableHash(qtdIndex);

        while(qtdKey > 0){

            scanf("%d", &value);
            insertTableHash(table, value);

            qtdKey--;
        }

        show_table(table);
        if(qtd != 1) printf("\n");

        qtd--;
    }

    removeAllTableHash(table);
    return 0;
}