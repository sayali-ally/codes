#include<bits/stdc++.h>
using namespace std;
class LRUCache{
    list<int>dq;
    unordered_map<int,list<int>::iterator>mp;
    int csize;

public:
LRUCache(int);
void refer(int);
void display();
}
LRUCache: LRUCache(int n){
    return csize=n;
}
void LRUCache:refer(int x){
    if(mp.find(x)==mp.end()){   //not present in cache
        if(dq.size()==csize){ //if the cache size is full
            int last = dq.back();
            dq.pop_back();
            mp.erase(last);
        }
    }
    else{  //if present in cache 
        dq.erase(mp[x]);
    }
    dq.push_front(x);
    mp[x]=q.begin();
}

void LRUCache:display(){
    for(it=dq.begin();it!=dq.end();it++){
        cout<<*it<<" ";
    }
}