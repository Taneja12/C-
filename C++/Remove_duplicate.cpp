// ONLY WORK FOR SORTED ARRAY



//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int remove_duplicate(vector<int> &arr) {
        if (arr.empty()) return 0;
        
        int n = arr.size();
        int j = 0 ;
        
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[j]){
                ++j;
                arr[j] = arr[i];
            }
        }
        return j+1;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.remove_duplicate(arr);
        for (int i = 0; i < ans; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends