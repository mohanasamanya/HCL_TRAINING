class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        vector<pair<int, int>> res;
        if(!head) return res;
        
        Node* left = head;
        Node* tail = head;
        while(tail->next!=NULL){
            tail = tail->next;
        }
        Node* right = tail;
        while(left!= right && left->prev!=right){
            int sum = left->data + right->data;
            
             if(target == sum){
            res.push_back({left->data,right->data});
            left = left->next;
            right = right->prev;
            
        }
        else if(target>sum){
            left=left->next;
        }
        else{
            right=right->prev;
        }
        }
        return res;
        
    }
};
