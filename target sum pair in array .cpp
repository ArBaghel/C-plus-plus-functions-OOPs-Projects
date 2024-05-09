#include<iostream>
#include<algorithm>
using namespace std;

int targetSum(int arr[] ,int n , int target){
 sort(arr,arr+n);
 int s=0;
 int e=n-1;
 while(s<e){
 if (arr[s]+arr[e]==target){
   cout<<"Par is found:"<<arr[s]<<" "<<arr[e]<<endl;
   return 0;
   }
   (arr[s]+arr[e]<target)?s++:e--;
  }
  cout << "Pair not found" << endl;
 }
 int main(){
 int n;
 cout << "enter array size" << endl;
 cin >> n;
 int arr[n];
 cout << "enter array elements" << endl;
 for(int i=0;i<n;i++){
  cin >>arr[i];
  }
  int target;
  cout << "enter targetSum" << endl;
  cin >> target;
  cout << targetSum(arr,n, target) << endl;
 }
