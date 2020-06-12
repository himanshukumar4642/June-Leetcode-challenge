class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_map<int,int> m;
    vector<int> dat;
    RandomizedSet() {
            }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        /*if(m.find(val)!=m.end())
            return false;
        dat.push_back(val);
        m[val]=dat.size()-1;
        return true;*/
         if(m.find(val) != m.end())
            return false;
        dat.push_back(val);
        m[val] = dat.size()-1;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(m.find(val)==m.end())
            return false;
        int pos=m[val];
        swap(dat[pos],dat[dat.size()-1]);
        m[dat[pos]]=pos;
        dat.pop_back();
        m.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int ind=rand()%dat.size();
        return dat[ind];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
