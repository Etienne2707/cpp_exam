#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"
#include <string>

class Dummy : public ATarget
{
private:
    /* data */
public:
    Dummy(/* args */);
    ~Dummy();
    Dummy* clone() const;
};

#endif
