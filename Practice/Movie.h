#ifndef _MOVIE_
#define _MOVIE_
#include <string>

class Movie
{
private:
    std::string name{};
    std::string rating{};

public:
    int count{0};

    Movie(std::string name="", std::string rating="", int count=0);
    Movie(const Movie &ref);

    void set_name(std::string user_name)
    {
        name = user_name;
    }
    void set_rating(std::string user_rating)
    {
        rating = user_rating;
    }
    void set_count(int user_count)
    {
        count = user_count;
    }
    std::string get_name()
    {
        return name;
    }
    std::string get_rating()
    {
        return rating;
    }
    int get_count()
    {
        return count;
    }
    ~Movie();
};

#endif // _MOVIE_
