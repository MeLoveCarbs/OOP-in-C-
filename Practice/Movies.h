#ifndef _MOVIES__
#define _MOVIES__
#include <vector>
#include "Movie.h"
#include <string>

class Movies
{
public:
    std::vector<Movie> vec;
    Movies();
    Movies(const Movies &ref);
    ~Movies();
    bool add_movie(std::string name, std::string rating, int count);
    bool increment(std::string name);


};

#endif // _MOVIES__
