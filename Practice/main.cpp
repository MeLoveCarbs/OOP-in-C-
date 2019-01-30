#include <stdio.h>
#include "Movies.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void add_movie(string &name, string rating, int count, Movies &collection)
{
    if (collection.add_movie(name, rating, count))
        cout << "\nMovie successfully added: " << name << endl;
    else
        cout << "\nMovie is already inside your collection" << endl;

    return;
}

void increment(string name, Movies &collection)
{
    if (collection.increment(name))
        cout << "\nYou have watched 1 more time of Movie: " << name << endl;
    else
        cout << "\nMovie not found" << endl;
    return;
}
void display(Movies &collection)
{
    cout << "====================================" << endl;
    for (auto elem: collection.vec) {
        cout << "\nMovie name: " << elem.get_name() << ". Rating: " << elem.get_rating() << ". Number of times watched: " << elem.get_count() << endl;
    }
    if (collection.vec.size() == 0)
        cout << "\nNo movies in collection" << endl;
    cout << "====================================" << endl;

}

int main(void)
{
    Movies my_movies;
    int choice{0};


    do {
        cout << "Hello, what do you want to do with your movie collection?\n1) Add Movie.\n2) Increment movies watched.\n3) Display your current collection.\n4) Quit program." << endl;
        cin >> choice;
        fflush(stdin);
        if (choice == 1) {
            cout << "\nEnter your movie title:" << endl;
            string movie_title;
            getline(cin, movie_title);
            int rating_choice {0};
            while (rating_choice > 4 || rating_choice < 1) {
                cout << "\nAge rating of the movie:\n1) PG-13\n2) NC-16\n3) M-18\n4) R-21\nNOTE: Please choose the above options ONLY." << endl;
                cin >> rating_choice;
                fflush(stdin);
            }
            vector <string> age_rating{"PG-13", "NC-16", "M-18", "R-21"};
            cout << "\nHow many times have you watched the movie?" << endl;
            int count {};
            cin >> count;
            fflush(stdin);
            add_movie(movie_title, age_rating.at(rating_choice-1), count, my_movies);
        }
        else if (choice == 2) {
            cout << "\nEnter your movie title:" << endl;
            string movie_title;
            getline(cin, movie_title);
            increment(movie_title, my_movies);
        }
        else if (choice == 3)
            display(my_movies);
        else if (choice != 4)
            cout << "\nPlease enter the correct option" << endl;
    }
    while (choice != 4);
    cout << "\n================================================\nYour movies collection are updated! Thank you for using my program!"
         "\n================================================" << endl;



    return 0;
}
