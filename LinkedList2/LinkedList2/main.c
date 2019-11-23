//
//  main.c
//  LinkedList2
//
//  Created by Parth Sikka on 23/11/19.
//  Copyright © 2019 Parth Sikka. All rights reserved.
//


#include<stdio.h>
#include<stdlib.h>
#include<curses.h>

struct node
{
    int data ;
    struct node* link ;
} ;

void push(struct node** head_ref, int new_data)
{
    //Step 1 : allocate memmory to the node :
    struct node* new_node= (struct node*) malloc(sizeof(struct node)) ;
    
    //Step 2 : Add data to the next node ;
    new_node->data = new_data ;
    
    //Step 3 : point this node to the next node ;
    new_node -> link = (*head_ref) ;
    
    // Step 4: Point head to the new node
    (*head_ref) = new_node ;
    
}

void inserAfter(struct node* prev_node, int new_data)
{
    //Step 1 : To check if the previous node is not null
 
    if (prev_node == NULL)
    {    printf("The previous node can not be null") ;
    return ;
}
    //Step 2 : create a new node :
    struct node* new_node = (struct node*) malloc(sizeof(struct node)) ;
    
    //Step 3 : Add data to the new node again!
    new_node -> data = new_data ;
    
    //Step 4 : Point this node to the next node :
    new_node -> link = prev_node->link ;
    
    //Step 5 : Point prev node to this node :
    prev_node->link = new_node ;
    
}
void append(struct node** head_ref, int new_data)
{
// This function will add data to the end of the linked list !
    //Step 1 : create a new node :
    struct node* new_node = (struct node*) malloc(sizeof(struct node)) ;
    
    // Step 2  : we say that the last node is right now pointing to the head and then traverse it till the end so that we use a single last and tmp node !
    struct node* last = *head_ref ;
    
    // Step 3 : We add the data to this new node :
    new_node -> data = new_data ;
    
    // Step 4 : Point this node to the Null node since it is the last node :
    new_node -> link = NULL ;
    
    // Step 5 : If this is the first node, add this as the head node :
    if(head_ref==NULL)
    {
        *head_ref = new_node ;
        return ;
        
    }
    // Step 6 : traverse to the last node :
    while(last->link != NULL)
    {
        last = last->link ;
        
    }
    
    //Step 7 : Point the link of the last node to the new node :
    last->link = new_node ;
    
    
}

void printList(struct node *node)
{
    printf(" The Singly Linked List you wanted is : [");
  while (node != NULL)
  {
     
      printf(" %d ",node->data) ;
      
     node = node->link;
  }
    printf("]") ;
}

int main()
{
    // This is a program for Linked List (singly)
    struct node* head = NULL ;
    // to add 7 in the end of the list :
   
    push(&head,8) ;
    push(&head,9) ;
    push(&head,2) ;
    append(&head,3) ;
    inserAfter((head->link)->link, 25) ;
    
    printList(head) ;
    
    return 0 ;
    
}


