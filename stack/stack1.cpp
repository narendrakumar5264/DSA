#include<stdio.h>
#include<conio.h>

#define Size 5
int top = -1;
int i;
int stack[Size];
int Push();
int Pop();
void traverse();
int main()
{
    int choice;
    char ch;
    
do{
    printf("enter your choice  \n");
    printf(" \n 1 for push: \n 2 for pop \n 3 for traverse \n");
    scanf("%d", &choice);
    switch(choice)
 
 {   case 1:
    Push();
    break;
    case 2:
    printf("\n poped element is =  %d \n", Pop());
    break;
    case 3:
    traverse();
    break;
    default:
    printf("enter the correct choice :");
}
    
  printf("\n do you want to continue \n");
  fflush(stdin);
  scanf("%c", &ch);
}
while(ch=='y'||ch =='Y');
return 0;
}
int Push()
{
    int item;
    if(top==Size-1)
    {printf("overflow");}
    else{
        printf("\n enter the value of item");
        scanf("%d", &item);
        stack[top++] = item;
        
    }
}
    int Pop()
    {
    int item;
if(top = -1)
{
    printf("\n stack is empty \n");
}
else
{
    item = stack[top--];
    return item;}

}

void traverse()
{
    if(top == -1)
    {
        printf("\n stack is empty \n");}
        else
        {
            for(i=top;i>0;i--)
            {
                printf("\n %d", stack[i]);
                
                
                
            }
        }
    }