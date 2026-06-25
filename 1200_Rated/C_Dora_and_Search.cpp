// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>a(n);
//         for(int i=0;i<n;i++) cin>>a[i];
//         int curr_max = n;
//         int curr_min = 1;
//         int i=0;
//         int j=n-1;
//         pair<int,int>ans(0,0);
//         while((j-i+1)>3){
//             if(a[i]==curr_max || a[i]==curr_min){
//                      if(a[i]!=curr_max) curr_min+=1;
//                      else curr_max-=1;
//             }
//             if(a[j]==curr_max || a[j]==curr_min){
//                       if(a[j]!=curr_max) curr_min+=1;
//                       else curr_max-=1;
//             }
//             if(a[i]==curr_max) curr_max-=1;
//             if(a[i]==curr_min) curr_min+=1;
//             if(a[j]==curr_max) curr_max-=1;
//             if(a[j]==curr_min) curr_min+=1;


//              else if(a[i]!=curr_min && a[i]!=curr_max && a[j]!=curr_min && a[j]!=curr_max){
//                   ans = make_pair(i,j);
//                   break;     
//             }

//             i++;
//             j--;
//         }
//           if(ans.first==0 && ans.second==0){
//             cout<<-1<<'\n';
//           }
//           else {
//             cout<<ans.first+1<<" "<<ans.second+1<<'\n';
//           }

//     }
// }



#include <bits/stdc++.h>
using namespace std;
bool isMinOrMax(int val, set<int> &segEle)
{
	if ((*segEle.begin()) == val)
		return true;
	if ((*segEle.rbegin()) == val)
		return true;

	return false;
} 

int main()
{
	int t;
	cin >> t; 

	while (t--)
	{
		int n;
		cin >> n; 

		vector<int> arr(n);


		for (int i = 0; i < n; i++)
			cin >> arr[i]; //? O(N)

	
		set<int> segEle(arr.begin(), arr.end());

		int i = 0, j = n - 1; 


		while (i < j)
		{

			if (isMinOrMax(arr[i], segEle)) //! al
			{
				segEle.erase(arr[i]); //? O(log N)
				i++;
				continue;
			}


			if (isMinOrMax(arr[j], segEle)) 
			{
				segEle.erase(arr[j]);
				j--;
				continue;
			}

			break;
		}

		if (i < j)
		{
			cout << (i + 1) << " " << (j + 1) << "\n";
		}
		else
		{
			cout << "-1\n";
		}
	}

	return 0;
}

