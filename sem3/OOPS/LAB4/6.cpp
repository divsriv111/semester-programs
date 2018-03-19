#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
class Movie{
	int year;
	char movie[10],direct[10];
	public:
	void setTitle(char title[]);
	void setYear(int);
	void setDirector(char d[]);
	void display();
};
void Movie::setTitle(char title[])
{
	strcpy(movie,title);
}
void Movie::setYear(int m)
{
	year=m;
}
void Movie::setDirector(char d[])
{
	strcpy(direct,d);
}
void Movie::display()
{
	cout<<"\nMovie name : "<<movie;
	cout<<"\nReleased year : "<<year;
	cout<<"\nDirected by : "<<direct;
}
int main()
{
	char name[10],name2[10];
	int y;
	Movie myFavoriteMovie;
	cout<<"\nEnter movie name\n";
	cin.getline(name,10);
	myFavoriteMovie.setTitle(name);
	cout<<"\nEnter movie's release year\n";
	cin>>y;
	myFavoriteMovie.setYear(y);
	cout<<"\nEnter movie's director's name\n";
	cin>>name2;
	myFavoriteMovie.setDirector(name2);
	myFavoriteMovie.display();
	getch();
	return 0;
}
