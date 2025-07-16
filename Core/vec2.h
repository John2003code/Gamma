#ifndef VEC2_H
#define VEC2_H

// vector for 2d is defined here
// so if we declare vectoe 2d it will be:
//         vec2 vec_name = {2.1,23.45};

typedef struct
{
    float x;
    float y;
}vec2;

float v_dot(vec2 v1, vec2 v2);
float v_cross(vec2 v1, vec2 v2);

vec2 v_add(vec2 v1, vec2 v2);
vec2 v_sub(vec2 v1, vec2 v2);

float v_length(vec2 v);
vec2 v_normalize(vec2 v);

vec2 v_scalar_mul(vec2 v1, float t);
vec2 v_scalar_div(vec2 v1, float t);



#endif