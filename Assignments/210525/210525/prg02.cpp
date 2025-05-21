//Q2.Movie Rating System
//Problem :
//Create a class Movie with members : title, genre, rating(out of 10).Write functions to accept movie details and another function to print "Hit", "Average", or "Flop" based on the rating.

#include<iostream>

using namespace std;

class Movie
{
private:
	char title[20];
	char genre[20];
	float rating;
public:
	void setTitle(char[]);
	void getTitle();
	void setGenre(char[]);
	void getGenre();
	void setRating(int);
	void getRating();
	void display();
	void imdb();
};

void Movie::setTitle(char*t)
{
	strcpy(title, t);
}
char Movie::getTitle()
{
	return title;
}

int main()
{

}