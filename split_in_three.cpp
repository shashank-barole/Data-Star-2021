#include<bits/stdc++.h>
using namespace std;
#define lli long long int



int main()
{
    int n;
    cin >> n;
    lli sum_n = n*(n+1)/2;
    if((sum_n-3)%3 !=0) cout << "IMPOSSIBLE\n";
    else
    {
        vector<int> belongs_to(n+1,0);
        int x = (sum_n-3)/3;
        int sum_1 = x;
        int sum_2 = x+1;
        int sum_3 = x+2;
        int j=n;
        while (sum_1>0)
        {
            if(sum_1>=j && belongs_to[j]==0) belongs_to[j]=1,sum_1-=j;
            else j--;
        }
        j=n;
        while (sum_2>0)
        {
            if(sum_2>=j && belongs_to[j]==0) belongs_to[j]=2,sum_2-=j;
            else j--;
        }
        j=n;
        while (sum_3>0)
        {
            if(sum_3>=j && belongs_to[j]==0) belongs_to[j]=3,sum_3-=j;
            else j--;
        }

        for(int i=1 ; i<=n ; ++i) cout << belongs_to[i] << " ";

    }

    return 0;
}