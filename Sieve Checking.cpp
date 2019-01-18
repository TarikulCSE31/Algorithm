
/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Tarikul Islam
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf          scanf
#define pf          printf
#define ssf         sscanf
#define spf         sprintf
#define fsf         fscanf
#define fpf         fprintf
#define fast        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase       sf ("%d",&tc)
#define sn          sf ("%d",&n)
#define whilecase   while (tc--)
#define eof         while (cin >> n)
#define forcase     for(kase=1; kase<=tc; kase++)
#define arrayloop   for(i=0; i<n; i++)
#define cinstr      cin >> str
#define getstr      getline (cin,str)
#define pcase       pf ("Case %d: ",kase)
#define pii         pair <int,int>
#define pb          push_back
#define in          insert
#define llu         unsigned long long
#define lld         long long
#define U           unsigned int
#define endl        "\n"
#define TarikulCSE  int main()
#define signoff     return 0

const int num = 1500001;
bool check[1500001];

void sieve ()
{
    int i,j;

    check[0] = check[1] = true;

    for (i=4; i<=num; i+=2)
        check[i] = true;

    for (i=3; i*i<=num; i+=2)
         if (check[i] == false)
             for (j=i*i; j<num; j+=2*i)
                check[j] = true;

    return;
}

int main ()
{
    sieve ();

    int n;

    while (cin >> n)
    {
        if (check[n])
            cout << "Composite\n";
        else
            cout << "Prime\n";
    }

    return 0;
}
