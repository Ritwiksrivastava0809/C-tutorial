#include<bits/stdc++.h>

using namespace std ;

class dijkstra {
    public :

        vector<int>dijikstra_priority_queue(int V , vector<vector<int>>adj [] , int S){
        
            priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq ;
            vector<int> dist(V);
            for(int  i = 0 ; i < V ; i++) dist[i] = 1e9;
        
            dist[S] = 0 ;
            pq.push({0,S});

            while(!pq.empty()){
                int dis = pq.top().first;
                int node = pq.top().second;
                pq.pop();

                for(auto it : adj[node]){
                    int weight = it[1];
                    int adjnode = it[0];

                    if(dis + weight < dist[adjnode]){
                        dist[adjnode] = dis + weight ;
                        pq.push({dist[adjnode] , adjnode});
                    }
                }
            }
            return dist ;
        }

        vector<int> dijkstra_set(int V , vector<vector<int>> adj[] , int S){
            set<pair<int,int>> st ;
            vector <int> dist(V) ;
            for(int  i = 0 ; i < V ; i++) dist[i] = 1e9;

            st.insert({0 , S}) ;
            dist[S] = 0;

            while(!st.empty()){
                auto it = *(st.begin());
                int dis = it.first;
                int node = it.second;

                st.erase(it);

                for(auto it : adj[node]){
                    int weight = it[1];
                    int adjnode = it[0];

                    if(dis + weight < dist[adjnode]){
                        if(dist[adjnode] != 1e9){
                            st.erase({dist[adjnode] , adjnode});
                        }
                        dist[adjnode] = dis + weight;
                        st.insert({dist[adjnode] , adjnode});
                    }
                }
            }
            return dist;
        }
};

// O(ElogV)