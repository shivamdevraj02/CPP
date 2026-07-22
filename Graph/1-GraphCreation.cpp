 // undirected weighted graph 


#include<iostream>
#include <vector>
using namespace std;
int main (){

    int edge,vertex;
    cout<<"enter vertex and edge: ";
    cin>>vertex>>edge;


    vector<vector<bool>>ADJ(vertex,vector<bool>(vertex,0));  // and in wighted graph here is booldata type replace with int 

    int u,v;
    for (int i = 0; i <edge; i++)
    {
       cin>>u>>v;
       ADJ[u][v]=1;
       ADJ[v][u]=1;

    }

    /*
     
    For the weighted graph we put the weight of the graph 
    
    int u,v,weight;
   for (int i = 0; i <edge; i++)
   {
      cin>>u>>v>>weight;
      ADJ[u][v]=weight;
      ADJ[v][u]=weight;
 
   }
    
    
    */


    for (int i = 0; i < vertex; i++)
    {
       for (int j = 0; j < vertex; j++)
       {
           cout<<ADJ[i][j]<<" ";
       }


       cout<<endl;
       
    }
    
    

    return 0;
}