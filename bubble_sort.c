#include <stdio.h>

void cambiar_pos(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int vector[],int n){
    for(int i = 0; i < n-1; i++){
        for( int j =0; j < n-i-1; j++){
            if( vector[j] > vector [j+1]){
                cambiar_pos(&vector[j],&vector[j+1]);
            }
        }
    }
}

int printVector(int vector[], int n){
    for(int i = 0; i < n; i++){
        printf("%d  , ", vector[i]);
    }
    printf("\n Fin del ordenamiento. \n");
}

main(){
    int vector[]={100,1992,0,5,200000,-22,-1,300,15,32};
    int n = sizeof(vector)/sizeof(vector[0]);
    bubbleSort(vector,n);
    printVector(vector,n);
    return 0;
}