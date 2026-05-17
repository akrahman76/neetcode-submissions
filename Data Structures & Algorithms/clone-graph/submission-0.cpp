/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* node, unordered_map<Node*,Node*>&track_nodes){
        if(node == nullptr){
            return nullptr;
        }

        if(track_nodes.count(node)){
            return track_nodes[node];
        }

        Node* copyNode = new Node(node->val);
        track_nodes[node] = copyNode;
        for(Node* neighbor : node->neighbors){
            copyNode->neighbors.push_back(dfs(neighbor,track_nodes));
        }

        return copyNode;
    }

    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*>track_nodes;

        return dfs(node,track_nodes);
    }
};
