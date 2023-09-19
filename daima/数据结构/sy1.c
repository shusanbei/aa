#include "graph.cpp"
#define MaxSize 100
typedef struct{
	int u;
    int v;
    int w;
}Edge;

void InsertSort(Edge E[],int n){
	int i,j;
	Edge temp;
	for (i=1;i<n;i++){
		temp=E[i];
		j=i-1;
		while (j>=0 && temp.w<E[j].w){
			E[j+1]=E[j];
			j--;
		}
		E[j+1]=temp;
	}
}
void Kruskal(MatGraph g){
	int u1,v1,sn1,sn2,k;
	int vset[MAXV];
	Edge E[MaxSize];
	k=0;
	for (int i=0;i<g.n;i++){
		for (int j=0;j<=i;j++){
			if (g.edges[i][j]!=0 && g.edges[i][j]!=INF){
				E[k].u=i;
				E[k].v=j;
				E[k].w=g.edges[i][j];
				k++;
			}
		}
	}
	InsertSort(E,g.e);
	for (int i=0;i<g.n;i++)
		vset[i]=i;
	k=1;
	int j=0;
	while (k<g.n){	
		u1=E[j].u;v1=E[j].v;
		sn1=vset[u1];
		sn2=vset[v1];
		if (sn1!=sn2){
			printf("(%d,%d):%d\n",u1,v1,E[j].w);
			k++;
			for (int i=0;i<g.n;i++){
				if (vset[i]==sn2){
					vset[i]=sn1;
				}
			}
		}
		j++; 
	}
}
int main(){
	MatGraph g;
	int A[][MAXV]={
		{0,5,INF,7,INF,INF},
		{INF,0,4,INF,INF,INF},
		{8,INF,0,INF,INF,9},
		{INF,INF,5,0,INF,6},
		{INF,INF,INF,5,0,INF},
		{3,INF,INF,INF,1,0}}; 
	int n=6,e=10;
	CreateMat(g,A,n,e);
	printf("图G的邻接矩阵:\n");
	DispMat(g);
	printf("Kruskal算法结果\n");
	Kruskal(g);
	return 0;
}