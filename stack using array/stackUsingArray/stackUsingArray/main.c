//
//  main.c
//  stackUsingArray
//
//  Created by Parth Sikka on 22/11/19.
//  Copyright © 2019 Parth Sikka. All rights reserved.
//

#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main()
{
// This is a program that helps us to implement a stack using an array.
    
    int n;
    
    printf("How many integers would you like to store in the stack? \n") ;
    scanf("%d",&n) ;
    
    int stack[n],top=0,del,c=1 ;
    
//Menu :
    

    
    
    int ch ;
    while(c)
    {
        printf("Please select from the following options: \n") ;
        printf("1.Insertions of Elements :\n") ;
        printf("2.Deletion of Elements :\n") ;
        printf("3.Display :\n") ;

    scanf ("%d",&ch);
    
if (ch == 1)
        {
            
               for(int i = 0 ; i<n ; i++)
               {
                   printf("Enter the %d term :\n" , i) ;
                   scanf("%d" , &stack[i]) ;
                   top++ ;
               }
            
        }
           else if (ch == 2)
            // Deletion :
        {
            printf("How many integers would you like to delete?\n") ;
            scanf("%d",&del) ;
            n = ((n - del)) ;
        }
    else if(ch == 3)
    {
        for (int i = 0 ; i<n ; i++)
        {
            printf("The element at index %d is : ",i) ;
            printf("%d \n",stack[i]) ;
        }
    }
            else
                printf("INVALID INPUT!!!\n") ;
    }
    return 0 ;
    }
    
    
    
    
 
    
    

