#include "Graph.h"
#include <stdlib.h>
#include <stdbool.h>

Graph GraphNew(int nV) {
    Graph g = malloc(sizeof(Graph));
    g->nV = nV;
    g->adjMatrix = calloc(nV, sizeof(int*));

    for (int i = 0; i < nV; i++) {
        g->adjMatrix[i] = calloc(nV, sizeof(int));
    }

    for (int i = 0; i < nV; i++) {
        for (int j = 0; j < nV; j++) {
            g->adjMatrix[i][j] = -1;
        }
    }
    
    return g;
}

void GraphFree(Graph g) {
    free(g->adjMatrix);
    free(g);
}

int GraphNumVertices(Graph g) {
    return g->nV;
}

// This function expects the graph to have non-negative weight edges only.
// Negative values in the adj matrix mean absence of edge.
bool GraphHasEdge(Graph g, int v, int w) {
    return g->adjMatrix[v][w] >= 0;
}

int GraphWeight(Graph g, int v, int w) {
    return g->adjMatrix[v][w];
}

void GraphInsert(Graph g, int v, int w, int weight) {
    g->adjMatrix[v][w] = weight;
    g->adjMatrix[w][v] = weight;
}
