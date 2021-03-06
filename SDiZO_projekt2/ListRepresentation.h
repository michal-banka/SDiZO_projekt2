#pragma once
#include "Libs.h"
#include "BidirectionalListManagment.h"

class List
{
private:
	BidirectionalListManagement* list;
	int vertices;
	int edges;
public:
	List();
	List(BidirectionalListManagement* list, int vertices);
	~List();

	int getVertices();

	void addVertex();
	void removeVertex();
	void removeVertex(int index);
	void editEdge(int from, int to, int newWeight);
	void addEdge();
	void addEdge(int fromVertex, int toVertex, int weight, bool directed);
	void removeEdge();
	void removeEdge(int fromVertex, int toVertex, bool directed);
	
	bool doesEdgeExists(int fromVertex, int toVertex);

	int dijkstra();
	int dijkstra(int from, int to);
	
	int prim(int from);
	int prim2(int from);

	int kruskal();

	int bellman_ford(int from, int to);


	void show();
};

