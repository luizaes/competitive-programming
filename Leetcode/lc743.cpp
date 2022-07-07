class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n, vector<pair<int, int>>());
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> minHeap;
        set<int> visited;
        int minTime = 0;
        
        for(int i = 0; i < times.size(); i++) {
            int source = times[i][0]-1, target = times[i][1]-1, weight = times[i][2];
            adj[source].push_back(make_pair(weight, target));
        }
        
        minHeap.push(make_pair(0, k-1));
        while(!minHeap.empty()) {
            pair<int, int> minPair = minHeap.top(); minHeap.pop();
            if(visited.count(minPair.second) > 0) continue;
            
            visited.insert(minPair.second);
            minTime = max(minTime, minPair.first);
            
            for(int i = 0; i < adj[minPair.second].size(); i++) {
                pair<int, int> adjVertex = adj[minPair.second][i];
                if(visited.count(adjVertex.second) == 0) {
                    minHeap.push(make_pair(minPair.first+adjVertex.first, adjVertex.second));
                }
            }
        }
        if(visited.size() == n) return minTime;
        else return -1;
    }
};