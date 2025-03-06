#include <bits/stdc++.h>
using namespace std;
/*
need to tell after each edge is added
- number of component 
- size of largest component 
*/
const int max_n = 100005;
int parent[max_n];
int group_size[max_n];

int find(int a){
    if (parent[a]==-1) return a;

    int par = find(parent[a]);
    parent[a] = par;
    return par;
}

int max_size = 0;
bool dj_union(int a, int b){
    int par_a = find(a);
    int par_b = find(b);

    if (par_a==par_b) return false;

    if (group_size[par_a]>group_size[par_b]){
        parent[par_b] = par_a;
        group_size[par_a] += group_size[par_b];
        max_size = max(max_size, group_size[par_a]);
    }
    else{
        parent[par_a] = par_b;
        group_size[par_b] += group_size[par_a];
        max_size = max(max_size, group_size[par_b]);
    }
    
    return true;
}

int main(){
    memset(parent, -1, sizeof(parent));
    // memset(group_size, 1, sizeof(group_size));// does't works with 1
    for (int i=0; i<max_n; i++){
        group_size[i] = 1;
    }

    int n, e;
    cin >> n >> e;
    int cc=n;
    while (e--){
        int a, b;
        cin >> a >> b;

        if (dj_union(a, b)){
            cc--;
        }

        cout << cc << " " << max_size << endl;
    }
    
    return 0;
}