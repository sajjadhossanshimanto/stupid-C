#include <bits/stdc++.h>
using namespace std;


const int maxn = 1005;
int value[maxn], weight[maxn];

void input_array(int n, int* arr){
    for (int i=0; i<n; i++){
        cin >> *(arr + i);
    }
}

void print_array(int n, int* arr){
    for (int i=0; i< n; i++){
        cout << *(arr+i) << " ";
    }
    cout << endl;
}

int cache[maxn][maxn];
int knap(int cur, int left_weight){
    if (cache[cur][left_weight]!=-1) return cache[cur][left_weight];

    if (cur<0) return 0;

    int take = 0;
    if (weight[cur]<=left_weight){
        take = knap(cur-1, left_weight-weight[cur]) + value[cur];
    }
    int not_take = knap(cur-1, left_weight);

    cache[cur][left_weight] = max(take, not_take);
    return cache[cur][left_weight];
}

int main(){
    int n, t, w;
    cin >> t;
    while (t--){
        for (int i=0; i<maxn; i++){
            for (int j=0; j<maxn; j++){
                cache[i][j] = -1;
            }
        }
        cin >> n >> w;

        input_array(n, weight);
        input_array(n, value);

        // print_array(n, weight);
        
        cout << knap(n-1, w) << endl;
    }
    
    return 0;
}