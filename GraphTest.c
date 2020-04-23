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
   Graph A = newGraph(30);
   
   //printf("%d\n",getSize(A)); 
   //printf("%d\n",getOrder(A)); 
   //printf("%d\n",getSource(A));
   addEdge(A,13,30);
   addEdge(A,7,28);
   addEdge(A,7,21);
   addEdge(A,26,6);
   addEdge(A,9,15);
   addEdge(A,23,18);
   addEdge(A,14,13);
   addEdge(A,19,26);
   addEdge(A,18,20);
   addEdge(A,14,7);
   addEdge(A,13,1);
   addEdge(A,20,10);
   addEdge(A,30,23);
   addEdge(A,11,16);
   addEdge(A,17,29);
   addEdge(A,23,17);
   addEdge(A,15,28);
   addEdge(A,14,5);
   addEdge(A,10,8);
   addEdge(A,17,30);
   addEdge(A,9,21);
   addEdge(A,8,12);
   addEdge(A,14,3);
   addEdge(A,21,28);
   addEdge(A,29,3);
   addEdge(A,7,12);
   addEdge(A,27,7);
   addEdge(A,5,15);
   addEdge(A,17,6);
   addEdge(A,17,27);
   addEdge(A,21,18);
   addEdge(A,8,3);
   addEdge(A,9,2);
   addEdge(A,17,10);
   addEdge(A,27,14);
   addEdge(A,25,17);
   addEdge(A,13,24);
   addEdge(A,17,14);
   addEdge(A,29,9);
   addEdge(A,14,16);
   addEdge(A,26,29);
   addEdge(A,18,29);
   addEdge(A,30,20);
   addEdge(A,3,25);
   addEdge(A,13,11);
   addEdge(A,15,19);
   addEdge(A,13,18);
   addEdge(A,2,26);
   printGraph(stdout,A);
   printf("done\n"); 

   freeGraph(&A);
}
