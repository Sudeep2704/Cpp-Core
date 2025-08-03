#include <iostream>
#include <queue>     
using namespace std;

const int MAX = 100;
int a[MAX][MAX];
int visited[MAX];
int n;

void bfs(int start) {
    queue<int> q;
    visited[start] = 1;
    q.push(start);

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << endl;

        for(int v = 1; v <= n; v++) {
            if(a[u][v] == 1 && visited[v] == 0) {
                visited[v] = 1;
                q.push(v);

            }
        }
    }
}

void dfs(int m) {
    cout << m << endl;
    visited[m] = 1;

    for (int v = 1; v <= n; v++) {
        if (a[m][v] == 1 && visited[v] == 0) {
            dfs(v);
        }
    }
}




}



int main() {

    

cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    bfs(start);

    
    
    return 0;
}
