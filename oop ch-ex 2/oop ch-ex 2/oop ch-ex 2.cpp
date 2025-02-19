#include <iostream>
#include"Movies.h"
void increment_watched(Movies& movies, std::string name);
void add_movie(Movies& movies, std::string name, std::string rating, int watched);

void increment_watched(Movies& movies, std::string name)
{
    if (movies.increment_watched(name)) {
        std::cout << name << "watch incemented" << std::endl;

    }
    else {
        std::cout << name << "not found" << std::endl;
    }
}
void add_movie(Movies& movies, std::string name, std::string rating, int watched)
{
    if (movies.add_movie(name, rating, watched))
        std::cout << name << "added" << std::endl;
    else {
        std::cout << "alrady exsists" << std::endl;
    }
}
int main()
{
    Movies my_movies;
    my_movies.display();
    add_movie(my_movies, "Ants", "PG-13", 2);
    add_movie(my_movies, "Avengers", "PG", 5);
    add_movie(my_movies, "Cendirela", "PG", 7);
    my_movies.display();
    add_movie(my_movies, "Ants", "PG-13", 2);
    add_movie(my_movies, "ICE AGE", "PG", 12);
    my_movies.display();
    increment_watched(my_movies, "Ants");
    increment_watched(my_movies, "ICE AGE");
    my_movies.display();
    increment_watched(my_movies, "MEOWWWWW");
    return 0;
}
