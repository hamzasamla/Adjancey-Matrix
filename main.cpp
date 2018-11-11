#include<iostream>
#include<stdlib.h>
#include "main.h"
using namespace std;

int main()
{
	Matrix M;
//	M.addEdge(0,1);
//	M.addEdge(0,2);
//	M.addEdge(1,0);
//	M.addEdge(1,2);
//	M.addEdge(1,3);
//	M.addEdge(2,0);
//	M.addEdge(2,3);
//	M.addEdge(2,1);
	system("cls");
	M.display();
	
	int m=M.findDegree();
	cout<<"Degree of Vertice is: "<<m<<endl;
	M.path();
	system("pause");
}
