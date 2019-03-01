#include "Vector2d.hh"
#include <string>
#include <sstream>
int main(){
    
    std::stringstream Vector2d;
    Vector2d<< "{x:"<<2<< ",y:"<< 2.4<<"}";
    std::string l = Vector2d.str ();
    printf(l.c_str());
    
}
Vector2d::Vector2d(const float _x, const float _y) : x(_x), y(_y) {}