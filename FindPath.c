/*********************************************************************************
*  FindPath.c
*  This program will read an input file in the specified format
*  and then print the output for the adjacency list of the graph
*  and the shortest path from a source to a destination.
*
*  Tristan Clark
*********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"List.h"
#include"Graph.h"

int main(int argc, char * argv[]){

   FILE *in, *out;
   int start, end;
   Graph G;
   List L = newList();

   // check command line for correct number of arguments
   if( argc != 3 ){
      printf("Usage: %s <input file> <output file>\n", argv[0]);
      exit(1);
   }

   // open files for reading and writing 
   in = fopen(argv[1], "r");
   out = fopen(argv[2], "w");
   if( in==NULL ){
      printf("Unable to open file %s for reading\n", argv[1]);
      exit(1);
   }
   if( out==NULL ){
      printf("Unable to open file %s for writing\n", argv[2]);
      exit(1);
   }
   
   // get the order of the graph;
   fscanf(in, "%d", &start);
   G = newGraph(start);


   /* read in a line of input and add an edge or Arc */
   while( fscanf(in, "%d %d", &start, &end) != EOF ) {
      if(start == 0) break;
      addEdge(G,start,end);
   }

   printGraph(out,G);
   fprintf(out, "\n");

   // Run BFS to find the shortest path from source to destination.
   while( fscanf(in, "%d %d", &start, &end) != EOF ) {
      if(start == 0) break;

      // Run BFS and find the shortest path from start to end
      BFS(G,start);
      getPath(L,G,end);
      
      moveBack(L);
      for(int i = getDist(G,end);i>0;--i) movePrev(L);
      if(get(L) != start) {
         fprintf(out,"The distance from %d to %d is infinity\n",start,end);
         fprintf(out,"No %d-%d path exists\n",start,end);
      } else {
         fprintf(out,"The distance from %d to %d is %d\n",start,end,getDist(G,end));
         fprintf(out,"A shortest %d-%d path is: ",start,end);
         while(index(L)>=0) {
            fprintf(out,"%d ",get(L));
            moveNext(L);
         }
         fprintf(out,"\n");
      }
      fprintf(out,"\n");
   }


   /* close files */
   fclose(in);
   fclose(out);
   
   freeList(&L);
   freeGraph(&G);

   return(0);
}
