#include "../include/vectors/vec3.hpp"
#include<math.h>



Vec3 Vec3::v_add(Vec3 v1, Vec3 v2) {
    return Vec3(v1.x+v2.x, v1.y+v2.y, v1.z+v2.z);
}

Vec3 Vec3::v_sub(Vec3 v1, Vec3 v2) {
    return Vec3(v1.x-v2.x, v1.y-v2.y, v1.z-v2.z);
}

float Vec3::v_dot(Vec3 v1, Vec3 v2){
    return (v1.x*v2.x + v1.y*v2.y + v1.z*v2.z);
}

Vec3 Vec3::v_cross(Vec3 v1, Vec3 v2){
    return Vec3(v1.y*v2.z - v1.z*v2.y, v1.z*v2.x - v1.x*v2.z, v1.x*v2.y - v1.y*v2.x);
}

Vec3 Vec3::v_scalar_div(Vec3 v, float x){
    return Vec3(x*v.x, x*v.y, x*v.z);
}

float Vec3::v_length(Vec3 v){
    return (sqrt(pow(v.x,2)+ pow(v.y,2)+ pow(v.z,3)));
}

Vec3 Vec3::v_normalization(Vec3 v){
    float len = Vec3::v_length(v);
    if(len == 0.0f) return Vec3(0,0,0);
    Vec3 normalized_vec = Vec3(v.x/len, v.y/len, v.z/len);
    return normalized_vec;
}