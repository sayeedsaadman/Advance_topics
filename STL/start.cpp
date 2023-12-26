/*
array ----> static
vector ---> dynamic

when array declared .. memory array size er jayga create kore ( fixed as array size) and fixed the last index

when vector declared.. dsnt need to mention the size. and directly fixed the end point.
(joto bar element input deya hbe totobar vector er jayga create hbe)


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Part 1
    /*
    //array declare
    int a[1000];
    //vector declare
    //vector<size> name; size as int,double,longlong;
    vector<int> v;
    v.push_back(2); // save to index 0
    v.push_back(3); // 1
    v.push_back(5); // 2
    v.push_back(6); // 3
    cout<<v[3]<<endl; // index 3 print.
    v[2] = 20;// replacing value
    cout<<v[2]<<endl; 
    cout<<v.size()<<endl; // returning vector size . 
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    } // using loop for printing vector values.
*/
// Part 2
/*
    // for user input perpose, the code will be 
    // at first take n -- size; 
    int n ; 
    vector<int> v;
    cin>>n; // 5 element
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a; // element go through a .
        v.push_back(a); // push back to vector the a elemnt.
    }
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    } // printted the value. 
*/
/*
//Part 3 
// vector direct value storing 
vector<int> v = {1,2,3,4,5};
// again print using loop .
v.clear();// for clear all value. 
cout<<v.size()<<endl; // it will be 0 bcz vector is cleared.
cout<<v.empty()<<endl; // if vector empty then it will return 1, else 0;
v.resize(10); // the size will be now 10 ; annd the other elemnt will be  0 ;
*/
/*
//Part 4
// vector coping.
vector<int> v = {2,3,4,5};
vector<int>temp;
temp = v; // coping 
for (int i = 0; i < temp.size(); i++)
{
    cout<<temp[i]<<" ";
}
*/
//Part 5
/*
//using iterator. syntax-->
//vector<int>::iterator name;
// iterator is usually a pointer. its indicate the pointer/adress for the vector.
vector<int> v = {2,3,4,5};
vector<int>::iterator it;
for(it = v.begin(); it != v.end(); it++)
{
    cout<< *it << " "; // bcz of its a pointer thats why the "*".
}
*/
//part 6
/*
//using for each loop.
vector<int> v = {2,3,4,5};
// here u is a variable. it will be exicute like . at first u will store the index 0 number . then it will print . then again index 1,2,3,....
for(int u : v) // here v means, it will collect the number from v vector.
{
    cout<<u<<" ";
}
// we can also use . auto 
for(auto u : v) // here auto will automatic detect the vector variable type.
{
    cout<<u<<" ";
}
 */
//Part 7
/*
// ques : until input = 0 , take input in a vector. 
int n;
vector<int> v;
while(cin>>n) /// eof loop basic
{
    if(n==0)
    break;
    v.push_back(n);
}
cout<<v.size()<<endl;
for( auto u : v)
{
    cout<<u<<" ";
}
*/
//Part 8
/*
// Vector Sorting.... sorting have 2 type .. 
//1 non increasing order. exp : 5 3 2 2 1
//2 non decreasing order. exp : 1 2 2 3 5
// its call non increasing/decreasing because of repeated number . 
// array sorting process
int arr[] = {2,3,19,1,2};
sort(arr,arr+5); // arr+0 to arr+5 point er ag porjnto sort koro .
vector<int> v = {5,32,2,1};
sort(v.begin(),v.end());
for(auto u : v)
{
    cout<<u<<" ";
}
// for sorting greater number to smaller number 
sort(v.begin(),v.end(),greater<int>());
for(auto u : v) cout<<u<<" ";
//another way
sort(v.rbegin(),v.rend()); // rbegin = reverse begin == pichon theke shuru korbe.
for(auto u : v) cout<<u<<" ";
// for number reversing 
reverse(v.begin(),v.end());
for(auto u : v) cout<<u<<" ";
*/
//Part 9
/*
// for accesing the last elemnt of the vector we can use back();
vector<int> v = {2,3,4,5};
cout<<v.back()<<" ";
// for deleting the last element we can use  pop back ();
v.pop_back();
// for front element
cout<<*v.begin()<<endl; // then add index for access the number 
// for front element delete 
v.erase(v.begin()); // in the middle it will the index which i need to remove. 
*/
}