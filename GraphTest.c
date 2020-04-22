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
   Graph A = newGraph(4);
   
   printf("%d\n",getSize(A)); 
   printf("%d\n",getOrder(A)); 
   printf("%d\n",getSource(A)); 

   freeGraph(&A);
}
