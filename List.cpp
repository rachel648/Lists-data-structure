#include<iostream>
#include<iterator>
#include<list>
using namespace std;
void showlist(list<int>g)
{
 list<int>:: iterator it;
for(it=g. begin();it!= g. end();it++)
cout<<'\t'<<*it;
cout<<'n';
}
int main()
{
list <int> glist1, glist2;
for(int i=0;i<10;i++)
{
glist1.push_back(i*2);
glist2.push_front(i*3);
}
cout<<"in list1(glist1)is";
showlist(glist1);
cout<<"in list2(glist2)is";
showlist(glist2);
cout<<"\n glist. front():"<<glist1. front()<<endl;
cout<<"\n glist. back():"<<glist1. back()<<endl;
cout<<"\n glist1. pop_front():";
glist1.pop_front();
showlist(glist1);
cout<<"\n glist2. pop_back():";
showlist(glist2);
cout<<"glist1. reverse():";
glist1. reverse ();
showlist(glist1);
cout<<"\n glist2. sort()";
glist2.sort();
showlist(glist2);
return 0;
}
//end main