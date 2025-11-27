#include<iostream>
using namespace std;
void move(int n,char from, char aux, char to)
{
    if(n==1)
    {
        cout<<"Move disk 1 from "<<from<<" to "<<to<<endl;

    }
    else if(n>1)
    {
        move(n-1,from,aux,to);
        cout<<"move disk "<<n<<" from "<<from<<" to "<<to<<endl;
        move(n-1,aux,to,from);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<"\nsequence of moves: \n";
    move(n,'A','B','C');
    return 0;
}
