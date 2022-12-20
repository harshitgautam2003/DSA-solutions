class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> s; 
        s.push(0);
        unordered_set<int> vis = {0};
        while (!s.empty()) {
            int i = s.top();
             s.pop();
            for (int j : rooms[i])
                if (vis.count(j) == 0) {
                    s.push(j);
                    vis.insert(j);
                    if (rooms.size() == vis.size()) return true;
                }
        }
        return rooms.size() == vis.size(); 
    }
};