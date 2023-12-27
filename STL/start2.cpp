#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int> v = {2,3,3,4,5,6,6,7};
    // Part 1
    /*
    // unique numbers
    // here are so many repeated numbers.
    // for know the unique numbers we need to sort
    sort(v.begin(),v.end());
    // using uniqye function for known the unique numbers
    //unique(v.begin(),v.end());
    // for(auto u: v)
    // {
    //     cout<<u<<" "; // here at first we can found our unique number 
    // }
    // for unique size 
    int sz = unique(v.begin(),v.end()) - v.begin();
    cout<<sz<<" "<<endl;
    for (int i = 0; i < sz; i++)
    {
        cout<<v[i]<<" "; // here i can found the unique numbers.
    }
    */
    //Part 2 
    /*
    //Max element,Min element
    max_element (v.begin(),v.end()); // max element founding , it will return the iterator of the element .
    // for original max elemnt index number .
    // vector<int> :: iterator it = max_element(v.begin(),v.end());
    // cout<<*it<<" ";
    // for indicating the index number . suppose we need to find the max number for indx 1 - 4 max number so,
    vector<int> :: iterator it = max_element(v.begin()+1,v.begin()+5);
    cout<<*it<<" ";
    // for min elemnt 
    // use min_element function . 
    */

   // Problem solving ..
   /*
   // problem 1 (codeforce 381A)
    int t;
    cin>> t;
    vector<int> v(t); //(t) = size // declaring like array
    for (int i = 0; i < t; i++)
    {
        cin>>v[i];
    }
    int sereja = 0, dima = 0, turn = 1; // turn 1 = sereja , turn 2 = dima.
    while(!v.empty()) // vector jotokkhn na porjnto empty hoy
    {
        if(turn == 1)
        {
            if(v[0]>v.back()) // jodi first index ta boro hoy 
            {
                sereja+=v[0];
                v.erase(v.begin());
            }
            else
            {
                sereja+=v.back();
                v.pop_back();
            }
            turn = 2;
        }
        else
        {
            if(v[0]>v.back())
            {
                dima+=v[0];
                v.erase(v.begin());
            }
            else
            {
              dima+=v.back();
              v.pop_back();  
            }
            turn =1;
        }
    }
    cout<<sereja<<" "<<dima;
}
*/

// problem 2 (leetcode 852)
/*
// leetcode submission is diffrent , no need to declare anything just code the problem
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = max_element(arr.begin(),arr.end()) - arr.begin();
        return i;
    }
};
// here at first we know ourr max element thn print the index no of the max elemnt .
*/

//Problem 3 (leetcode 1502)
/*
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       int compare = arr[1] - arr[0];
       for(int i = 2; i<arr.size(); i++)
       {
           if(arr[i] - arr[i-1] != compare) 
               return false;
       }
       return true;
    }
};
// at first sort the array then compare the elements , and solve it.
*/

//problem 4 (https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/)

// code
/*
int t;
cin>>t;

while(t--)
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i = 0 ;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int unique_size = unique(v.begin(),v.end()) - v.begin();
    if(unique_size == x) 
    {
        cout<<"Good"<<endl;
    }
    else if(unique_size>x)
    {
        cout<<"Average"<<endl;
    }
    else
    {
       cout<<"Bad"<<endl; 
    }
}
*/
}