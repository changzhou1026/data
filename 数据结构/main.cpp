// 12:53 PM/09/22/2017
//#define VALUE_TYPE char
#include "ds.h"
#include "graph.h"
#include "tools.h"

int main()
{
	graph g(30);
	string filename = "graph.txt";
	createGraphFromTxt(g, filename);
	cout << g << endl;
}
