
#include <iostream>
#include <vector> 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getKth(int lo, int hi, int k) {
       
        if(1<=lo || lo<=hi || hi<=1000 || 1<=k || k<=hi-lo+1){
            int result, count=0;
            vector<pair<int, int>> arr;
            for(int i=lo ;i <= hi; i++){
            
                int x=i;
                int ans=0;
                
                while(x!=1){
                    if(x%2 == 0){
                        ans++;
                        x=x/2;
                    }
                    else if(x%2 != 0){
                        ans++;
                        x=3*x+1;
                    }
                }
            
                arr.push_back({ans,i});
            }
            
            /*
            for(auto pr: arr)
            {
                  // Print the element off arr
                  cout << "{";
                  cout << pr.first << " , " << pr.second;
                  cout << "}  ";
            }
            */
            
            sort(arr.begin(),arr.end());
            vector<int>ans;
            // creating new array for finding kth element.
            for(auto it:arr){
                ans.push_back(it.second);
            }
            
            /*
            for(auto pr: ans)
            {
                  // Print the element of ans
                  cout << pr << ",";
            }
            */
            cout << "\n";
            return ans[k-1];
        }
        else cout << "Invalid input for calculation";
     
    }
};

int main()
{
    int low, high, order;
    cout << "Enter the low, high and order number seperately: ";
    cin >> low >> high >> order;
    Solution s1;
    cout << s1.getKth(low,high,order);
    return 0;
}




