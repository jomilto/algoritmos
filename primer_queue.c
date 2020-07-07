#include <stdio.h>
#define SIZE 5
int items[SIZE], front = -1, rear = -1;

void enQueue(int item){
    if(rear == SIZE-1){
        printf("Nuestro queue esta lleno. \n ");
    }else{
        if (front == -1){
            front = 0;
        }
        rear++;
        items[rear] = item;
        printf("Se inserto el valor %d correctamente. \n ",item);
    }
}

void deQueue(){
    if(rear == -1){
        front = -1;
        printf("Nuestro queue esta vacio. \n ");
    }else{
        printf("Se elimino el valor %d correctamente. \n ", items[front]);
        
        for(int i = 0; i <= rear; i++){
            items[i]= items[i+1];
        }
        rear--;
    }
}

void printQueue(){
    printf("Inicio de Queue. \n");
        for(int i = 0; i <= rear; i++){
            printf("%d -> %d \n",i,items[i]);
        }
    printf("Fin de Queue. \n");
}

main(){
    enQueue(10);
    enQueue(12);
    enQueue(13);
    enQueue(15);
    enQueue(17);
    printQueue();
    enQueue(18);
    printQueue();
    deQueue();
    printQueue();
    enQueue(18);
    printQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    printQueue();
    deQueue();
    printQueue();
    enQueue(19);
    enQueue(20);
    return 0;
}