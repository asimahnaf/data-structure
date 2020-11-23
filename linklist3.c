#include <stdio.h>
#include <stdlib.h>
struct node *creatlinklist(int arr[], int size);
int seartchlinklist(struct node *head, int value);

struct node{
    int data;
    struct node *next;
};

int main(){
    
    int a[] = {5,10,30};
    struct node *head = NULL;  
    head = creatlinklist(a, 3);
    printf(" %d\n", seartchlinklist(head, 10));
    while(head != NULL){
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL ");
    
     return 0;
}

struct node *creatlinklist(int arr[], int size){

struct node *head = NULL, *temp = NULL, *current = NULL;

    for(int i = 0; i < size; i++){
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        if(head == NULL){
            head = temp;
            current = temp;
        }else{
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}

//search-linklist

int seartchlinklist(struct node *head, int value){
    int index = 1;
    while(head != NULL){
        if(head->data == value){
            return index;
        }
            index++;
            head = head->next;
    }
    return -1;

}
