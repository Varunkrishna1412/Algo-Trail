    #include <stdio.h>
    #include <stdlib.h>

    struct node{
            int data;
            struct node *next;
    };
    struct node *top=NULL;



    void push(int num){
        struct node *n= (struct node *)malloc(sizeof(struct node));
        n->data = num;
        n->next = top;
        top= n;
        
    }
    void pop(){
        struct node *t;
        if(top==NULL){
            printf("Stack underflow.\n");
        }
        else{
            t=top;
            printf("%d\n",top->data);
            top=top->next;
            free(t);
                    
        }
    }
    void peek(){
        if(top==NULL){
            printf("Stack underflow.\n");
        }
        else{
            printf("%d\n",top->data);				
        }
    }
    void display(){
        struct node *t;
        if(top==NULL){
            printf("Stack underflow.\n");
        }
        else{
            for(t=top;t!=NULL;t=t->next){
                printf("%d->  ",t->data);
            }				
        }
    }

    int main(){
        int opt,value;
        char exit_opt;
        
        
        
        while(1){
            printf("\nEnter 1 to push an element.\n");
            printf("Enter 2 to pop an element.\n");
            printf("Enter 3 to peek.\n");
            printf("Enter 4 to display elements.\n");
            printf("Enter 5 to quit.\n");
            printf("Your option:");
            scanf("%d",&opt);

            switch(opt){
            case 1:
                printf("Enter element\n");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                fflush(stdin);
                printf("\nDo you wish to exit? (y/n):");
                scanf("%c",&exit_opt);
                break;
            
        }
        if(exit_opt=='y'){
            break;
        }
        }
        return 0;
    }