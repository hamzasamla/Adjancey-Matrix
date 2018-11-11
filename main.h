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
		
		int findDegree()
		{
			cout<<"\nFinding Degree\n";
			int v;
			cout<<"Enter vertex to find? ";
			cin>>v;
			int degree=0;
			for(int i=0;i<this->vertices;i++)
			{
				if(this->adj[v][i]==1)
				{
					degree++;
				}
			}
			return degree;
		}
		
		void path()
		{
			int s,d;
			cout<<"Finding Path Exist or Not"<<endl;
			
			cout<<"Enter src: ";
			cin>>s;
			cout<<"Enter Dest: ";
			cin>>d;
			if(this->adj[s][d]==1 || this->adj[d][s]==1)
			{
				cout<<"Path Exists"<<endl;
				
			}
			else
			{
				cout<<"Path doesn't exists"<<endl;
			}
		}
	
};
