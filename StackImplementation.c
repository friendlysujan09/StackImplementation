#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void reset(void);
int main()
{
    //clrscr();
    top=-1;
    printf("\n Enter the size of STACK [MAX=100]: ");
    scanf("%d",&n);
    printf("\n\t---------------------------------------------");
    printf("\n\t\t Welcome to the STACK Management");
    printf("\n\t---------------------------------------------");
    printf("\n\t Please Select one of the following options:");
    
    printf("\n\t 1.Display Stack content\n\t 2.Push an item\n\t 3.Pop\n\t 4.RReset Stack\n\t 5.Exit");
    do
    {
        printf("\n Select Choice (1-5):");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                display();
                break;
            }
            case 2:
            {
                push();
                break;
            }
            case 3:
            {
                pop();
                break;
            }
            case 4:           
            {   
                reset();
                break;
            }
            case 5:
            {
                printf("\n\t Hey, you are about to exit stack... ");
                break;
            }
            default:
            {
                printf ("\n\t You can choose (1/2/3/4/5)");
            }
                
        }
    }
    while(choice!=5);
    return 0;
}

void display(){
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}

void push(){
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}

void reset(){
    if(top<=-1){
        printf("\n\t STACK is already empty");
    }
    else{
        top=-1;
        printf("\n\t Congratulation !!! you have successfully reset stack... ");
    }
}



