#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int player,z,m;
    cout<<"                            THE GUESSING GAME    "<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Select one player or two player"<<endl;
    cin>>player;
if(player==1)
{
    cout<<"Enter number of games "<<endl;
    cin>>test;
    int game=1;
while(test--)
{
    cout<<"Game "<<game;
    game++;
    int t;
    srand(clock());
    t=rand();
    //cout<<t; answer
    //cout<<endl;

    t=t%20;
    if(t==0)
    {
        t=1;
    }

    //cout<<t;
    int g,count=0,flag=0,p=5;
    for(int i=0;i<p;i++)
    {
        cout<<endl;
        cin>>g;
        count++;
        if(g>t)
        {
            cout<<"too high";
           continue;
        }
        if(g<t)
        {
            cout<<"too low";
           continue;
        }
        if(g==t)
        {
            flag=1;
            cout<<"you guessed at "<<count<<endl;
            break;
        }

    }
    if(flag==0)
    {
        cout<<endl<<"not guessed and number was :"<<t<<endl;
    }
}
}
int score=0,p=0;
z=3;
if(player==2)
{
    char stl[20];
    string str1 ("medium");
    string str2 ("difficult");
    cout<<"choose difficulty"<<endl<<"medium"<<endl<<"difficult"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    scanf("%19s",&stl);
    string st=stl;
    if((st.compare(str1))==0)
    {
        p=5;
    }
    if((st.compare(str2))==0)
    {
        p=3;
    }
    if((st.compare(str1))!=0 && (st.compare(str2))!=0)
    {
        cout<<"error"<<endl<<"Write the difficulty correctly"<<endl<<"score 0"<<endl;
        p=0;
        z=0;
    }
    int game=1;
    cout<<"player 1 have 3 games :"<<endl;
    while(z--)
{
    cout<<"Game "<<game;
    game++;
    int t;
    srand(clock());
    t=rand();
    //cout<<t; answer
    //cout<<endl;

    t=t%20;
    if(t==0)
    {
        t=1;
    }

    //cout<<t;
    int g,count=0,flag=0;
    for(int i=0;i<p;i++)
    {
        cout<<endl;
        cin>>g;
        count++;
        if(g>t)
        {
            cout<<"too high";
           continue;
        }
        if(g<t)
        {
            cout<<"too low";
           continue;
        }
        if(g==t)
        {
            flag=1;
            cout<<"you guessed at "<<count<<endl;
            score=score+1;
            cout<<"score :"<<score<<endl;
            break;
        }

    }
    if(flag==0)
    {
        cout<<endl<<"not guessed and number was :"<<t<<endl;
        cout<<"score :"<<score<<endl;
    }
}
m=score;
score=0;
game=1;
z=3;

  cout<<"------------------------------------------------------------------"<<endl;
  if((st.compare(str1))==0)
    {
        p=5;
    }
    if((st.compare(str2))==0)
    {
        p=3;
    }
  if((st.compare(str1))!=0 && (st.compare(str2))!=0)
    {
        cout<<"error"<<endl<<"Write the difficulty correctly"<<endl<<"score 0"<<endl;
        p=0;
        z=0;
    }
  cout<<"player 2 have 3 games :"<<endl;
    while(z--)
{
    cout<<"Game "<<game;
    game++;
    int t;
    srand(clock());
    t=rand();
    //cout<<t; answer
    //cout<<endl;

    t=t%20;
    if(t==0)
    {
        t=1;
    }

    //cout<<t;
    int g,count=0,flag=0;
    for(int i=0;i<p;i++)
    {
        cout<<endl;
        cin>>g;
        count++;
        if(g>t)
        {
            cout<<"too high";
           continue;
        }
        if(g<t)
        {
            cout<<"too low";
           continue;
        }
        if(g==t)
        {
            flag=1;
            cout<<"you guessed at "<<count<<endl;
            score=score+1;
            cout<<"score :"<<score<<endl;
            break;
        }

    }
    if(flag==0)
    {
        cout<<endl<<"not guessed and number was :"<<t<<endl;
        cout<<"score :"<<score<<endl;
    }
}
cout<<"----------------------------------------------------------------"<<endl<<endl;
if(m>score)
    cout<<"Player 1 wins"<<endl;
if(m<score)
    cout<<"Player 2 wins"<<endl;
if(m==score)
    cout<<"Match draw"<<endl;

}

    return 0;
}
