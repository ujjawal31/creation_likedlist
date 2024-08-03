#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *next;
}*p,*pHead,*pTail,*temp;
void crtN(){
  int value;
  char z;
  do {
    p= (struct node*)malloc(sizeof(struct node));
    scanf("%d\n",&value);
    p->data=value;
    p->next=NULL;
    if(pHead==NULL){
      pHead=p;
      pTail=p;
    }
    else{
      pTail->next=p;
      pTail=p;
    }
    printf("press 'y' to continue ,'n' to exit");
    
    scanf("%c",&z);
    
  }while(z=='y');
  }
int main() {
 crtN();
  temp=pHead;
  while(temp!=NULL){
    printf("the linkd list is : %d\n",temp->data);
    temp=temp->next;
  }
}