#include<bits/stdc++.h>

using namespace std;

#define size 4
#define TRUE 1
#define FALSE 0

class graphbfs
{
    int g[size][size];
    int v1, v2,n;
    int visit[size];
    int Q[size];
    int rear, front;

public:
    graphbfs(){
        for (v1 = 0; v1 < size; v1++){
            for (v2 = 0; v2 < size; v2++){
                g[v1][v2] = FALSE;
            }
        }
        for (v1 = 0; v1 < size; v1++){
            visit[v1] = FALSE;
        }
    }

    void display(){
        for (v1 = 0; v1 < size; v1++){
            for (v2 = 0; v2 < size; v2++){
                cout << " " << g[v1][v2];
            }cout<<endl;
        }
    }    
    
    void error(char *Msg){
        cout<<"\n"<<Msg;
        cout<<"Press any buttonto abort";
        getchar();
        exit(1);
    }

    void creategraphs(){
        char ch ;
        int flag;
        flag = TRUE;
        n = 0;
        cout<<"\n\t\t This Is a Program To Create Graph";
        cout<<"\n\t\t The Display Is In Bredth First Search";
        cout<<"\nPress d/D for directed and u/U for undirectred graph";
        cin>>ch;
        if (ch == 'D' || 'd'){
            flag = FALSE;
        }
        do
        {
            cout<<"\nEnter the Edge of a graph  ";
            cout<<"(And press -99 for termination) :: ";
            cin>>v1>>v2;
            if(v1 == -99){
                break;
            }
            if(v1 >= size || v2 >= size){
                error("Incalid Vertex value\n");
            }
            else{
                g[v1][v2] = TRUE;
            }
            if(flag){
                g[v1][v2] = FALSE;
            }
            n++;             
        } while (1);
    }

    void bfstraversal(int v1){
        int v2;
        visit[v1] = TRUE;
        front = rear = -1;
        Q[++rear] = v1;
        while (front != rear)
        {
            v1 = Q[++front];
            cout<<"\n"<<v1;
            for(v2 = 0 ; v2<n; v2++){
                if (g[v1][v2]==TRUE && visit[v2] == FALSE){
                    Q[++rear] = v2;
                    visit[v2] = TRUE;
                }
            }
        }
        
    }
};

int main()
{
    int v1;
    graphbfs G;
    G.creategraphs();
    cout<<"The Adjacency Matrix for the graph is ::  \n";
    G.display();
    cout<<"\nEnter the vertice from which  you need to start :: ";
    cin>>v1;
    if(v1>=size){
        G.error("Invalid Vertex\n");
    }
    cout<<"The bradth first search of the graph is :: \n";
    G.bfstraversal(v1);
    return 0;
}