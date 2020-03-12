#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visited[100];
int c=0;

void postorderIterative(Node* root)
{

	stack<Node*> stk;
	stk.push(root);


	stack<int> out;


	while (!stk.empty())
	{

		Node *curr = stk.top();
		stk.pop();

		out.push(curr->data);


		if (curr->left)
			stk.push(curr->left);

		if (curr->right)
			stk.push(curr->right);
	}


	while (!out.empty())
	{
		cout << out.top() << " ";
		out.pop();
	}
}
int main()
{
    int tc,kase,i,j,n,e,q,x;
    int edge,node;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(i=1; i<n; i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for(i=1; i<=n; i++)
        {
            sort(adj[i].begin(), adj[i].end());
        }
        cin>>q;
        for(i=1; i<=q; i++)
        {
            cin>>x;
            if(x==1)
            {
                int u,tm;
                cin>>u>>tm;
            }
            else
            {
                int u;
                cin>>u;
                if(visited[u])
                {
                    cout<<""
                }
            }
        }

    }

}
