//===============================================================================
// Graph.c
// Implementation file for Graph ADT.
//
// Tristan Clark
//===============================================================================

#include<stdio.h>
#include<stdlib.h>
#include"List.h"
#include"Graph.h"

#define WHITE 0
#define GRAY 1
#define BLACK 2

/*** struct ***/

// private GraphObj struct
typedef struct GraphObj{
   int order;
   int size;

   List *adj;
   int *color;
   int *parent;
   int *distance;
   int source;
}GraphObj;

/*** Contructors-Destructors ***/

// Graph newGraph()
// Graph constructor
Graph newGraph(int n) {
   Graph G = malloc(sizeof(struct GraphObj));

   G->adj = malloc((n+1)*sizeof(List));
   G->parent = malloc((n+1)*sizeof(int));
   G->distance = malloc((n+1)*sizeof(int));
   G->color = malloc((n+1)*sizeof(int));

   G->order = n; //n vertices
   G->size = 0;  //no edges
   G->source = NIL;

   for(int i=1;i<(n+1); i++){
      G->adj[i] = newList();
      G->parent[i] = NIL;
      G->distance[i] = INF;
      G->color[i] = WHITE;
   }
   return G;
}

// freeGraph()
// Graph Destructor
void freeGraph(Graph* pG) {
   Graph tmp = *pG;
   for(int i=1; i<(tmp->order+1); i++){
      freeList(&(tmp->adj[i]));
   }
   free(tmp->adj);
   free(tmp->parent);
   free(tmp->distance);
   free(tmp->color);
   free(*pG);
   *pG = NULL;
}

/*** Access functions ***/

// getOrder()
// Returns value of order
int getOrder(Graph G) {return G->order;}

// getSize()
// Returns value of size
int getSize(Graph G) {return G->size;}

// getSource()
// Returns value of source
int getSource(Graph G) {return G->source;}

// getParent()
// Returns the parent of vertex u
// Pre: 1 <= u <= getOrder(G)
int getParent(Graph G, int u) {
   if(u < 1 || u > getOrder(G)) {
      printf("getParent() called on a vertex out of bounds\n");
      exit(1);
   }
   return G->parent[u];
}

// getDist()
// Returns the distance from the most recent BFS source to vertex u
// Pre: 1 <= u <= getOrder(G)
int getDist(Graph G, int u) {
   if(u < 1 || u > getOrder(G)) {
      printf("getParent() called on a vertex out of bounds\n");
      exit(1);
   }
   return G->distance[u];
}

// getPath()
// Appends the vertices of the shortest path from source to u to the List L
// or NIL if it doesnt exist;
// Pre: getSource(G)!=NIL, 1 <= u <= getOrder(G)
void getPath(List L, Graph G, int u) {
   if(u < 1 || u > getOrder(G)) {
      printf("getParent() called on a vertex out of bounds\n");
      exit(1);
   }
}

// makeNull()
// Deletes all edges of G.
void makeNull(Graph G) { 
   
}

// void addEdge()
// Inserts a new edge joining u to v, i.e. u is added to the adjacency
// List of v and vice versa. Note: make sure these are sorted
// Pre: 1 <= u <= getOrder(G)
void addEdge(Graph G, int u, int v) {
   if(u < 1 || u > getOrder(G)) {
      printf("getParent() called on a vertex out of bounds\n");
      exit(1);
   }
}

// void addArc()
// Inserts a new edge joining u to v, i.e. v is added to the adjacency
// List of u.
// Pre: 1 <= u <= getOrder(G)
void addArc(Graph G, int u, int v) {
   if(u < 1 || u > getOrder(G)) {
      printf("getParent() called on a vertex out of bounds\n");
      exit(1);
   }
}

// void BFS()
// BFS algorithm.
void BFS(Graph G, int s) {

}

/*** Other operations ***/

// void printGraph()
// Prints the adjacency list representation of G to the file pointed to
// by out.
void printGraph(FILE* out, Graph G) {
   
}
