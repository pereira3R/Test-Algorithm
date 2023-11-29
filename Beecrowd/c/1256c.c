#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int content;
    struct no *left, *right;
} noTree;

noTree *createNo(int value) {
    noTree *newNo = (noTree *)malloc(sizeof(noTree));
    if (newNo == NULL)
        return NULL;
    newNo->content = value;
    newNo->left = NULL;
    newNo->right = NULL;
    return newNo;
}

noTree *insert(noTree *no, int value) {
    if (no == NULL) {
        noTree *newNode = createNo(value);
        return newNode;
    } else {
        if (value < no->content) {
            no->left = insert(no->left, value);
        } else if (value > no->content) {
            no->right = insert(no->right, value);
        }
        return no;
    }
}


noTree *removeThre(noTree *root, int value){
    if(root == NULL){
        printf("Valor nã encontrado");
        return NULL; 
    }else{
        if(root->content == value){
            if(root->left == NULL && root->right == NULL){
                free(root);
                return NULL;
            }else{   
                if(root->left == NULL || root->right == NULL){
                    noTree *aux;
                    if(root->left !=  NULL){
                        aux = root->left;
                    }else{
                        aux = root->right;
                    }
                    free(root);
                    return aux;
                }else{
                    noTree *aux = root->left;
                    while(aux->right != NULL){
                        aux = aux->right;
                    }
                    root->content = aux->content;
                    aux->content = value;
                    root->left = removeThre(root->left, value);
                    return root;
                }
            }
        }else{
            if(value > root->content){
                root->right = removeThre(root->right, value);
            }else if(value < root->content){
                root->left = removeThre(root->left, value);
            }
            return root; 
        }
    }
}

noTree *search(noTree *root, int value){
    if(root == NULL){
        return NULL;
    }else{
        if(root->content == value){
            return root;
        }else{
            if(value < root->content){
                search(root->left, value);
            }else{
                search(root->right, value);
            }
        }
    }
}

void showInOrder(noTree *root){
    if(root != NULL){
        showInOrder(root->left);
        printf(" %d", root->content);
        showInOrder(root->right);
    }
}

void showPreOrder(noTree *root){
    if(root != NULL){
        printf(" %d", root->content);
        showPreOrder(root->left);
        showPreOrder(root->right);
    }
}

void showPosOrder(noTree *root){
    if(root != NULL){
        showPosOrder(root->left);
        showPosOrder(root->right);
        printf(" %d", root->content);
    }
}

void showThre(noTree *root){
    if(root != NULL){
        printf(" %d", root->content);
        showThre(root->left);
        showThre(root->right);
    }
}

void removeAllTree(noTree *root) {
    if (root == NULL) {
        return;
    }

    removeAllTree(root->left);
    removeAllTree(root->right);

    free(root);
}

int main() {
    noTree *tree = NULL;
    int qtd, values, i = 1;
    scanf("%d", &qtd);
    while (qtd > 0) {
        int numNo;
        scanf("%d", &numNo);

        tree = NULL;

        while (numNo > 0) {
            scanf("%d", &values);
            tree = insert(tree, values);
            numNo--;
        }

        printf("Case %d:\n", i);
        printf("Pre.:");
        showPreOrder(tree);
        printf("\nIn..:");
        showInOrder(tree);
        printf("\nPost:");
        showPosOrder(tree);
        printf("\n\n");

        i++;
        qtd--;
    }

    removeAllTree(tree);
    return 0;
}
