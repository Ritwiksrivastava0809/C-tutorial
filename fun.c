#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
    char temp;
    char input[100];
    char stuff[100];
    char *x,*y;
    char destuff[100];
    int count=0;
    printf("enter the input character string \n"); 
    scanf("%s",input);
    // for Bit Stuffing 
    x=input;
    y=stuff; 
    while(*x!='\0') 
    { 
        if(*x=='0') 
        { 
            *y=*x; 
            y++; 
            x++; 
        } 
        else 
        { 
            while(*x=='1' && count!=5) 
            { 
                count++; 
                *y=*x; 
                y++; 
                x++; 
            } 
            if(count==5) 
            { 
                *y='0'; 
                y++; 
            } 
            count=0; 
            
        } 
    }
    *y='\0';
    printf("\nBit stuffed string is"); 
    printf("\n%s",stuff);
    // for Bit Destuffing and taking the value of x from y of stuffing part
    x=stuff;
    y=destuff;
    while(*x!='\0')
    { 
        if(*x=='0') 
        { 
            *y=*x; 
            y++; 
            x++; 
        } 
        else 
        { 
        while(*x=='1' && count!=5) 
        { 
            count++; 
            *y=*x; 
            y++; 
            x++; 
        } 
        if(count==5) 
        { 
            x++;
        } 
        count=0; 
        } 
    }
    *y='\0';
    printf("\nThe destuffed string is"); 
    printf("\n%s\n",destuff);
    printf("\n\nPratham Pratap Singh\n");
    printf("SAP ID: 500082296");
    return 0;  
}