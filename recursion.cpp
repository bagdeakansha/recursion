#include <iostream>
using namespace std;
/*int front(int n)
{
    if(n==0)//base case
    {
        return 1;//always return value
    }

front(n-1);//recursion relationship
cout<<n<<"\t";//head recursion
}
int main()
{
    front(5);

}*/
//power-------------------------
/*int pwrec(int b, int p)
{
    if(b==0)
    {
        return 0;
    }
    if(p==0)
    {
        return 1;
    }
    int c=b*pwrec(b,p-1);//recursion relationship
    return c;
}
int main()
{
int b,p;
cout<<"enter 1st value";
cin>>b;
cout<<"enter power";
cin>>p;
cout<<"result="<<pwrec(b,p);
}*/
//factorial-------
/*if(b==1)
{
    return 1;
}
int c=b*fact(p-1);
return c;*/
//fibacconi series--------
/*int fib(int b)
{
    if(b==0)
    {
        return 0;
    }
    if(b==1)
    {
        return 1;
    }
    int c=fib(b-1)+fib(b-2);//recursion relationship
    return c;
}

int main()
{
int b;
cout<<"enter base ";
cin>>b;

cout<<"result="<<fib(b);
}*/
//--------------------------
