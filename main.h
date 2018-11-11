#include<iostream>
using namespace std;

class Matrix
{
	private:
		int vertices;
		int edge;
		int **adj;
	
	public:
		Matrix()
		{
			cout<<"How Many Vertices? "<<endl;
			cin>>this->vertices;
			cout<<"How many Edges?"<<endl;
			cin>>this->edge;
			adj=new int*[this->vertices];
		
			
			for(int i=0;i<this->vertices;i++)
			{
				adj[i]=new int[this->vertices];
				for(int j=0;j<this->vertices;j++)
				{
					adj[i][j]=0;
				}
			}
			
			
			int u,v;
			for(int i=0;i<this->edge;i++)
			{
				cout<<"Enter src and dest"<<endl;
				cout<<"From: ";
				cin>>u;
				cout<<"To: ";
				cin>>v;
				
				addEdge(u,v);
			}
			
			
		}
		
		int addEdge(int u, int v)
		{
			adj[u][v]=1;
			adj[v][u]=1;
		}
		
		void display()
		{
			for(int i=0;i<this->vertices;i++)
			{
				cout<< i <<" ";
				for(int j=0;j<this->vertices;j++)
				{
					cout<<adj[i][j]<<" ";
					
				}
				cout<<endl;
			}
		}
	
};
