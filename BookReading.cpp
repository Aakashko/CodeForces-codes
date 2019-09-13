/* Book Reading 

Polycarp is reading a book consisting of n pages numbered from 1 to n. Every time he finishes the page with the number divisible by m, he writes down the last digit of this page number. For example, if n=15 and m=5, pages divisible by m are 5,10,15. Their last digits are 5,0,5 correspondingly, their sum is 10.

Your task is to calculate the sum of all digits Polycarp has written down.

You have to answer q independent queries.

Input
The first line of the input contains one integer q (1≤q≤1000) — the number of queries.

The following q lines contain queries, one per line. Each query is given as two integers n and m (1≤n,m≤1016) — the number of pages in the book and required divisor, respectively.

Output
For each query print the answer for it — the sum of digits written down by Polycarp.

*/

#include<bits/stdc++.h>
#define ll  long long 
using namespace std;
int main()
{
  ll q;
  cin>>q;
  while(q>0)
  {
    ll n,m,tens=0,sum=0;
    cin>>n>>m;
    for(ll i=0;i<10;++i)
    {
       tens+=(m*i)%10;
    }
    ll temp = n/m;
    sum+=(temp/10)*tens;
    ll reminder = temp%10;
    for(ll j=0;j<=reminder;++j)
      sum+=(m*j)%10;
    cout<<sum<<endl;
    --q;
  }
  return 0;
}