#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"
#include <string>

class BrickWall : public ATarget
{
private:
    /* data */
public:
    BrickWall(/* args */);
    ~BrickWall();
    BrickWall* clone() const;
};

#endif
