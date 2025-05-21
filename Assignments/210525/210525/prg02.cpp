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
	char* getTitle();
	void setGenre(char[]);
	char* getGenre();
	void setRating(float);
	float getRating();
	void display();
	void imdb();
};

void Movie::setTitle(char* t)
{
	strcpy(title, t);
}
char* Movie::getTitle()
{
	return title;
}

void Movie::setGenre(char* g)
{
	strcpy(genre, g);
}
char* Movie::getGenre()
{
	return genre;
}
void Movie::setRating(float r)
{
	rating = r;
}
float Movie::getRating()
{
	return rating;
}


void Movie::display()
{
	cout << title << "\t" << genre << "\t" << rating << endl;
}

void Movie::imdb()
{

		if (rating <= 5)
			cout << "Flop" << endl;
		else if (rating >= 8)
			cout << "Hit" << endl;
		else
			cout << "Average" << endl;
}

int main()
{
	Movie m;
	char t[20];
	char g[20];
	float r;
	cin.getline(t, 20);
	cin.ignore();
	cin.getline(g, 20);
	//cin.ignore();
	cin >> r;
	
	m.setTitle(t);
	m.setGenre(g);
	m.setRating(r);
	m.imdb();
	m.display();
}