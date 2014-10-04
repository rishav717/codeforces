#define LOCAL_TEST
#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cstdio>
using namespace std;
int main()
{
	#ifdef LOCAL_TEST
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	ios :: sync_with_stdio(false);
	cout << fixed << setprecision(16);
	int n,temp,i,j;
	cin>>n;
	vector<int> boxes;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		boxes.push_back(temp);
	}
	sort(boxes.begin(),boxes.end());
	vector<int> ans;
	for(i=0;i<boxes.size();i++)
	{
		bool flag=false;
		for(j=0;j<ans.size();j++)
		{
			if(boxes[i]>=ans[j])
			{
				ans[j]++;
				flag=true;
				break;
			}
		}
		if(!flag)
			ans.push_back(1);
	}
	cout<<ans.size()<<endl;
	return 0;
}
