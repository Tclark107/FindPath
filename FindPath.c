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
   Graph G;;

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
   //fprintf(out,"Order is: %d\n",getOrder(G));
   //fprintf(out,"print Graph:\n");
   //printGraph(out,G);
   //fprintf(out,"after Graph:\n");

   /* read in a line of input and add an edge or Arc */
   while( fscanf(in, "%d %d", &start, &end) != EOF ) {
      if(start == 0) break;
      //fprintf(out,"%d %d\n", start,end);
      addEdge(G,start,end);
   }

   printGraph(out,G);

   //fprintf(out,"after adds:\n");
   
   // Run BFS to find the shortest path from source to destination.
   while( fscanf(in, "%d %d", &start, &end) != EOF ) {
      if(start == 0) break;
      //fprintf(out,"%d %d\n", start,end);
   }


   /* close files */
   fclose(in);
   fclose(out);

   freeGraph(&G);

   return(0);
}

/*int n, count=0;
   FILE *in, *out;
   char line[MAX_LEN];
   char tokenlist[MAX_LEN];
   char* token;

   // read each line of input file, then count and print tokens 
   while( fgets(line, MAX_LEN, in) != NULL)  {
      count++;
      n = 0;
      token = strtok(line, " \n");
      tokenlist[0] = '\0';
      while( token!=NULL ){
         strcat(tokenlist, "   ");
         strcat(tokenlist, token);
         strcat(tokenlist, "\n");
         n++;
         token = strtok(NULL, " \n");
      }
      fprintf(out, "%s\n", tokenlist);
   } */
