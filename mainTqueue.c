/************************************/
/* Program   : mainTqueue.c */
/* Deskripsi : ADT Queue representasi kontigu dengan array,
               model I: head selalu di posisi 0 atau 1 */
/* NIM/Nama  : 24060120120012/Adinda Destifany Zenniar*/
/* Tanggal   : 22 September 2021*/
/***********************************/

#include <stdio.h>
#include "tqueue.h"
#include "boolean.h"

int main(){
    //kamus main
    tqueue A;
    tqueue B;
    char C;

    //algoritma
    createQueue(&A);
    printf("=====printQueue=====\n");
    printQueue(A);
    if(isEmptyQueue(A)){
        printf("Queue kosong\n");
    }
    else{
        printf("Queue tidak kosong\n");
    }
    if(isFullQueue(A)){
        printf("Queue penuh\n");
    }
    else{
        printf("Queue tidak penuh\n");
    }
    if(isOneElement(A)){
        printf("Queue berisi 1 elemen\n");
    }
    else{
        printf("Queue tidak berisi 1 elemen\n");
    }
    enqueue(&A,'D');
    enqueue(&A,'I');
    enqueue(&A,'N');
    printf("=====viewQueue=====\n");
    viewQueue(A);
    dequeue(&A, &C);
    printf("=====viewQueue=====\n");
    viewQueue(A);
    dequeue(&A, &C);
    printf("=====viewQueue=====\n");
    viewQueue(A);
    dequeue(&A, &C);
    printf("=====viewQueue=====\n");
    viewQueue(A);
    printf("head A : %c\n", infoHead(A));
    createQueue(&B);
    enqueue(&B,'I');
    enqueue(&B,'N');
    printf("panjang queue terpanjang : %d\n", maxlength(A,B));
    printf("sizeQueue A : %d\n", sizeQueue(A));
    printf("sizeQueue B : %d\n", sizeQueue(B));
    enqueue2(&A,&B,'D');
    printf("=====viewQueue=====\n");
    viewQueue(A);
    viewQueue(B);
    dequeue2(&A,&B,&C);
    printf("=====viewQueue=====\n");
    viewQueue(A);
    viewQueue(B);
    printf("head A : %c\n", infoHead(A));
    printf("tail A : %c\n", infoTail(A));

    return 0;
}
