//===============================================================================
// Graph.h
// Header file for Graph ADT.
//
// Tristan Clark
//===============================================================================

#define INF -1
#define NIL 0

/*** Exported type ***/

typedef struct GraphObj* Graph;

/*** Constructors-Destructors ***/

// newGraph()
// Returns a Graph with n vertices and no edges.
Graph newGraph(int n);
