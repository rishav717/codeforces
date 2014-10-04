#include<iomanip>
#include<iostream>
#include<cstdio>
//#define LOCAL_TEST
#define loop(i,n) for(i=0;i<n;i++)
using namespace std;
int main()
{
	#ifdef LOCAL_TEST
		freopen("in.txt","r",stdin);
		freopen("out.txt","w",stdout);
	#endif
	cout<<fixed<<setprecision(16);
	int n,k,w;
	while(cin>>n>>k>>w)
	{
		char boxes[100010];
		cin>>boxes+1;
		cout<<boxes<<endl;
		int i,l,r,ones[100010]={0},kones[100010]={0};
		for(i=1;i<=n;i++)
		{
			ones[i]=ones[i-1]+boxes[i]-'0';
			if(i>=k)
				kones[i]=kones[i-k]+boxes[i]-'0';
			else
				kones[i]=boxes[i]-'0';
		}
		for(i=0;i<w;i++)
		{
			cin>>l>>r;
			cout<<ones[r]-ones[l-1]+(r-l+1)/k-2*(kones[r]-kones[l-1])<<endl;
		}
	}
	return 0;
}
