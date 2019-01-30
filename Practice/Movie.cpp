#include "Movie.h"

Movie::Movie(std::string user_name, std::string user_rating, int user_count)
    :name(user_name), rating(user_rating), count(user_count)
{
//    name = user_name;
//    rating = user_rating;
//    count = user_count;
}

Movie::Movie(const Movie &ref)
    :Movie(ref.name, ref.rating, ref.count)
{

}

Movie::~Movie()
{
}
