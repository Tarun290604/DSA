#include<bits/stdc++.h>
using namespace std;

int main(){
//------------------------pair
    pair<int,int> p = {1,4};
    pair<int, pair<int,int>> p1 = {1,{1,3}};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

//------------------------vector
    vector<int> ans;

    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(3);
    ans.emplace_back(2);
    ans.emplace_back(99);
    ans.emplace_back(919);

    vector<int>::iterator it=ans.begin();
    // vector<int>::iterator it1 = ans.back();
    // vector<int>::iterator it2 = ans.rbegin();
    vector<int>::iterator it3= ans.end();
    cout<<*it<<" "<<" "<<" "<<*it3<<" "<<endl;
    while(it!=ans.end()){
        cout<<*it<<" ";
        it++;
    }
     cout<<endl;
    // for(auto a=ans.begin(); a != ans.end();a++)
    //     cout<<*a<<endl;

    // for(auto i : ans)
    //     cout<<i<<endl;

    ans.erase(ans.begin()+1,ans.begin()+3);

    for(auto i : ans)
        cout<<i<<" ";

    cout<<endl;


//------------------------ List which are made up of linkedList 

    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.emplace_back(6);

    for(auto i:ls){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<ls.size()<<endl;

    cout<<ls.front()<<endl;
    cout<<ls.back()<<endl;
    ls.pop_back();
    cout<<ls.size()<<endl;

//------------------------Deque
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.emplace_front(4);
    dq.emplace_back(5);

    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl;
    dq.clear();
    cout<<dq.size()<<endl;

//------------------------Stack
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<s.size()<<endl;

    s.pop();
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

//------------------------Priority_Queue(Max-Heap and Min-Heap)
    priority_queue<int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(3);
    pq.push(9);
    pq.push(7);

    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
    cout<<endl;

    priority_queue<int, vector<int>,greater<int>> pq1;
    pq1.push(1);
    pq1.push(5);
    pq1.push(3);
    pq1.push(9);

    while(!pq1.empty()){
        cout<<pq1.top()<<" "; 
        pq1.pop();
    }
    cout<<endl;

//------------------------Queue
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(1);

    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

//------------------------Set
    set<int> st;
    st.insert(3);
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(4);
    st.insert(5);
    st.insert(5);

    for(auto i: st){
        cout<<i<<" ";
    }
    cout<<endl;

    st.erase(5);

    for(auto i: st){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<st.count(1)<<endl;

    // auto i=st.find(3);
    // cout<<*i<<endl;

//-------------------Multiset

    multiset<int> ms;
    ms.insert(3);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(4);
    
    for(auto i: ms){
        cout<<i<<" ";
    }
    cout<<endl;
    ms.erase(1);
    for(auto i: ms){
        cout<<i<<" ";
    }

//-----------------------UnorderedSet
    unordered_set<int> us;
    us.insert(3);
    us.insert(1);
    us.insert(1);
    us.insert(1);
    us.insert(2);
    us.insert(4);
    us.insert(4);

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    for(auto i: us){
        cout<<i<<" ";
    }
    cout<<endl;
    us.erase(1);
    for(auto i: us){
        cout<<i<<" ";
        }
    cout<<endl;

//------------------------map
    map<int,int> mp;
    mp[1]=2;
    mp.insert({3,1});
    mp.insert({1,1});
    mp.insert({2,1});
    mp.insert({4,1});

    // auto pos=mp.find(1);
    // cout<<*pos<<endl;

    cout<<endl;
    cout<<endl;
    cout<<mp.size()<<endl;
    for(auto m:mp){
        cout<<m.first<<" "<<m.second<<endl;
    }
    cout<<endl;
    cout<<endl;

//-------------------MultiMap
    multimap<int,int> mmp;
    mmp.insert({1,1});
    mmp.insert({1,1});
    mmp.insert({1,1});
    cout<<endl;
    cout<<endl;

    for(auto m:mmp){
        cout<<m.first<<" "<<m.second<<endl;
    }
    cout<<endl;
    cout<<endl;

// Number of 1 bit occurences in 32bit number are given by following
    cout<< __builtin_popcount(55)<<endl;
    
    return 0;
}

//Different Comparators to be written for sorting in a way
   bool comp(pair<int,int> p1, pair<int,int> p2){
        if(p1.second>p2.second) return false;
        if(p1.second < p2.second) return true;
        if(p1.first>p2.first) return true;
        return false;
    }