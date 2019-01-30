#include "Movies.h"


Movies::Movies()
{
}

Movies::Movies(const Movies &ref)
    :Movies()
{

}

Movies::~Movies()
{
}

bool Movies::add_movie(std::string name, std::string rating, int count)
{
    Movie movie_obj;
    name[0] = toupper(name[0]);
    for (size_t i {1}; i < name.length(); i++)
        name[i] = tolower(name[i]);
    bool flag{1};
    for (auto elem: vec) {
        if (elem.get_name() == name)
            flag = 0;
    }
    if (flag == 1) {
        movie_obj.set_name(name);
        movie_obj.set_rating(rating);
        movie_obj.set_count(count);
        vec.push_back(movie_obj);
    }


    return flag;
}

bool Movies::increment(std::string name)
{
    for (size_t i {0}; i < name.length(); i++)
        name[0] = tolower(name[0]);

    bool flag {0};
    for (auto &elem: vec) {
        if (elem.get_name() == name) {
            elem.count += 1;
            flag = 1;
        }
    }

    return flag;
}
