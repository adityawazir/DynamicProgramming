#include<bits/stdc++.h>
#include"priorityqueue.h"
using namespace std;
main()
{
minqueue q;
int val[10];
cout<<"NO ofvalues";
int n; cin>>n;
for(int i=0;i<n;i++)
{
cin>>val[i];
q.insert(val[i]);
}
cout<<q.extractmin(root);
cout<<q.extractmin(root);
cout<<q.extractmin(root);
cout<<q.extractmin(root);
cout<<q.extractmin(root);
return 0;
}
