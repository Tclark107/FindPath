/****************************************************************************************
*  GraphTest.c
*  My test for Graph ADT
*****************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"List.h"
#include"Graph.h"

int main(int argc, char* argv[]){

   // init a Graph
   Graph A = newGraph(100);
   
   //printf("%d\n",getSize(A)); 
   //printf("%d\n",getOrder(A)); 
   //printf("%d\n",getSource(A));
   addArc(A,64,4);
   addArc(A,64,3);
   addArc(A,42,2);
   addArc(A,2,64);
   addArc(A,4,2);
   addArc(A,3,42);
   //addEdge(A,4,5);
   //addEdge(A,5,6);
      
   //printGraph(stdout,A);


   List L = newList();
   List I = newList();
   List J = newList();
   List K = newList();
   
   append(I,3);
   append(I,42);
   append(I,2);
   append(I,64);
   printList(stdout,I);
   printf("\n");

   
   BFS(A,3);
   getPath(L,A,64);
   printList(stdout,L);
   printf("\n");

   append(I,2);
   printList(stdout,I);
   printf("\n");

   moveFront(L);
   BFS(A,2);
   getPath(L,A,2);
   printList(stdout,L);
   printf("\n");





   /*BFS(A,3);
   getPath(I,A,6);

   BFS(A,2);
   getPath(J,A,3);

   BFS(A,4);
   getPath(K,A,4);
   
   printList(stdout,L);
   printf("\n");
   printList(stdout,I);
   printf("\n");
   printList(stdout,J);
   printf("\n");
   printList(stdout,K);
   printf("\n");
   
   printGraph(stdout,A);
   makeNull(A);
   */
   
   //printGraph(stdout,A);


   printf("done\n"); 
   
   freeList(&L);
   freeList(&I);
   freeList(&J);
   freeList(&K);
   freeGraph(&A);
}
