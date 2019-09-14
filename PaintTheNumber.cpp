/* Paint the Numbers:

You are given a sequence of integers a1,a2,…,an. You need to paint elements in colors, so that:

If we consider any color, all elements of this color must be divisible by the minimal element of this color.
The number of used colors must be minimized.
For example, it's fine to paint elements [40,10,60] in a single color, because they are all divisible by 10. You can use any color an arbitrary amount of times (in particular, it is allowed to use a color only once). The elements painted in one color do not need to be consecutive.

For example, if a=[6,2,3,4,12] then two colors are required: let's paint 6, 3 and 12 in the first color (6, 3 and 12 are divisible by 3) and paint 2 and 4 in the second color (2 and 4 are divisible by 2). For example, if a=[10,7,15] then 3 colors are required (we can simply paint each element in an unique color).

Input
The first line contains an integer n (1≤n≤100), where n is the length of the given sequence.

The second line contains n integers a1,a2,…,an (1≤ai≤100). These numbers can contain duplicates.

Output
Print the minimal number of colors to paint all the given numbers in a valid way.

*/

#include<bits/stdc++.h>
#define ll  long long
using namespace std;
int main()
{
 int n,i,j;
 cin>>n;
 vector<int> a(n);
 for( i=0;i<n;++i)
 {
    cin>>a[i];
 } 

 sort(a.begin(),a.end());

 int c=0 ;
 for( i=0;i<n;++i)
 {
   int flag = 0;
   for(j=0;j<i;++j)
   {
   	if(a[i]%a[j]==0)
   {
    	flag = 1;
    	break;
    	
   }

   }  
   if(!flag)
   {
   	++c;
   }
   
 
 }
 cout<<c;
 return 0;
}

   