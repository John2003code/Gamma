#include "../include/vectors/vec3.hpp"
#include<math.h>



Vec3 Vec3::operator+(const Vec3& v) const{
    return Vec3(x+v.x, y+v.y, z+v.z);
}

Vec3 Vec3::operator-(const Vec3& v) const{
    return Vec3(x-v.x, y-v.y, z-v.z);
}

float Vec3::v_dot(const Vec3& v) const{
    return (x*v.x + y*v.y + z*v.z);
}

Vec3 Vec3::v_cross(const Vec3& v) const{
    return Vec3(y*v.z - z*v.y, z*v.x - x*v.z, x*v.y - y*v.x);
}

Vec3 Vec3::v_scalar_mul(const float val) const{
    return Vec3(val*x, val*y, val*z);
}

float Vec3::v_length() const{
    return (sqrt(x*x + y*y + z*z));
}

Vec3 Vec3::v_normalization() const{
    float len = Vec3::v_length();
    if(len == 0.0f) return Vec3(0,0,0);
    Vec3 normalized_vec = Vec3(x/len, y/len, z/len);
    return normalized_vec;
}