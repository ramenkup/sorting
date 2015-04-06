//
//  main.cpp
//  Bubblesort, InsertionSort, SelectionSort, and Palindrome checker.
//
//  Created by Spencer Klinge on 4/5/15.
//  Copyright (c) 2015 Spencer Klinge. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

void bubbleSort(){
    int array[200], a, b, c, swap;
    printf("Enter number of elements\n");
    scanf("%d" , &a);
    
    printf("Enter %d integers\n", a);
    
    for(b = 0; b < a; b++)
        scanf("%d", &array[b]);
    
    for (b= 0; b < (a - 1); b++)
    {
        for(c=0; c<a-b-1; c++)
        {
            if(array[c] > array[c+1])
            {
                swap= array[c];
                array[c]= array[c+1];
                array[c+1]= swap;
            }
        }
    }
    
    printf("Sorted list:\n");
    for(b=0; b<a; b++)
        printf("%d\n", array[b]);
    
}

void insertionSort(){
    int a, array[1000], b, c, temp;
    
    printf("Enter number of elements\n");
    scanf("%d", &a);
    
    printf("Enter %d integers\n", a);
    
    for(b=0; b <a; b++){
        scanf("%d", &array[b]);
    }
    
    for (b=1; b<=a-1;b++){
        c=b;
        
        while( c > 0 && array[c] < array[c-1]) {
            temp= array[c];
            array[c]= array[c-1];
            array[c-1]=temp;
            c--;
        }
    }
    printf("Sorted list:\n");
    
    for(b=0; b <=a-1; b++){
        printf("%d\n", array[b]);
    }
}

void selectionSort(){
    int array[1000], a, b, c, pos, swap;
    printf("Enter number of elements\n");
    scanf("%d", &a);
    
    printf("Enter %d integers\n",a);
    
    for( b =0 ; b<a; b++)
        scanf("%d", &array[b]);
    
    for(b=0; b<(a-1) ; b++){
        pos= b;
        
        for(c=b+1; c < a; c++){
            if( array[pos] > array[c] )
                pos=c;
        }
        if(pos !=b){
            swap= array[b];
            array[b]= array[pos];
            array[pos]= swap;
        }
    }
    printf("Sorted list:\n");
    
    for( b=0; b<a; b++)
        printf("%d\n", array[b]);
        
}

void Palindrome() {
    int m, rev = 0, temp;
    printf("Enter a number to check if it is a palindrome\n");
    scanf("%d",&m);
    
    temp=m;
    
    while( temp != 0)
    {
        rev= rev *10;
        rev= rev + temp%10;
        temp = temp/10;
        
    }
    
    if ( m == rev )
        printf("%d is a palindrome number.\n", m);
    else
        printf("%d is not a palindrome number.\n", m);
    
}



int main(){
    bubbleSort();
    insertionSort();
    selectionSort();
    Palindrome();
    
}
