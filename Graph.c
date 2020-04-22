//===============================================================================
// Graph.c
// Implementation file for Graph ADT.
//
// Tristan Clark
//===============================================================================

#include<stdio.h>
#include<stdlib.h>
#include"Graph.h"
#include"List.h"

#define WHITE 0
#define GRAY 1
#define BLACK 2

/*** struct ***/

// private GraphObj struct
typedef struct GraphObj{
   int order;
   int size;

   List *neighbors;
   int *color;
   int *parent;
   int *distance;
   //int source;
}GraphObj;

/*** Contructors-Destructors ***/

// Graph newGraph()
// Graph constructor
Graph newGraph(int n) {
   Graph G = malloc(sizeof(struct GraphObj));

   G->neighbors = malloc((n+1)*sizeof(List));
   G->parent = malloc((n+1)*sizeof(int));
   G->distance = malloc((n+1)*sizeof(int));
   G->color = malloc((n+1)*sizeof(int));

   G->order = n; //n vertices
   G->size = 0;  //no edges
   //G->source = NIL;

   for(int i=1;i<(n+1); i++){
      G->neighbors[i] = newList();
      G->parent[i] = NIL;
      G->distance[i] = INF;
      G->color[i] = WHITE;
   }
   return G;
}
