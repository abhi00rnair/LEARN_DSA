class LRUCache {
public:

class Node{
    public:
    int key;
    int val;
    Node*prev;
    Node*next;
    Node(int key, int val){
        this->key=key;
        this->val=val;
    }
};
Node *head=new Node(-1,-1);
Node *tail=new Node(-1,-1);
unordered_map<int,Node*>mp;
int cap;
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
        head->prev=NULL;
        tail->next=NULL;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            Node*temp=mp[key];
            int rett=temp->val;
            mp.erase(key);
            deletenode(temp);
            addnode(temp);
            mp[key]=head->next;
            return rett;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node*curr=mp[key];
            mp.erase(key);
            deletenode(curr);
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new Node(key,value));
        mp[key]=head->next;
    }

    void addnode(Node* temp){
        Node*tp=head->next;
        temp->next=tp;
        temp->prev=head;
        head->next=temp;
        tp->prev=temp;
    }

    void deletenode(Node*temp){
        Node*prevv=temp->prev;
        Node*nextt=temp->next;
        prevv->next=nextt;
        nextt->prev=prevv;

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */