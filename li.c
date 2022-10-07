#include<stdlib.h>
struct node{
        int a,b,c;
        struct node *link;
            };
            void main()
            {
               /* struct node *head=NULL;
                head=(struct node*)malloc(sizeof(struct node));
                head->a=10;
                head->link=NULL;
                struct node *current=NULL;
                current=(struct node*)malloc(sizeof(struct node));
                current->b=20;
                head->link=current;
                printf("%d\t", head->link=current);
                head->link->link=NULL;
                current->c=30;
                current->link=NULL;
                head->link->link=current;
                printf("%d\t", head->link->link=current);
                printf("%d\t", current->link=NULL);*/
                struct node *h=NULL;
                h=(struct node*)malloc(sizeof(struct node));
                h->a=10;
                h->link=NULL;
                struct node *d=NULL;
                d=(struct node*)malloc(sizeof(struct node));
                d->b=20;
                d->link=NULL;
                h->link=d;
                printf("%d\n",h->link=d);
                d=(struct node*)malloc(sizeof(struct node));
                d->c=30;
                d->link=NULL;
                h->link->link=d;
                 printf("%d\n",h->link->link=d);
            }
