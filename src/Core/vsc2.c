#include<stdio.h>
#include "vec2.h"

float v_dot(vec2 v1, vec2 v2){
    return (v1.x * v2.x + v1.y * v2.y);
}

float v_cross(vec2 v1, vec2 v2){
    return (v1.x * v2.y - v1.y * v2.x);
}

vec2 v_add(vec2 v1, vec2 v2){
    return (vec2){v1.x+v2.x, v1.y+v2.y};
    
}
vec2 v_sub(vec2 v1, vec2 v2){
    return (vec2){v1.x-v2.x, v1.y-v2.y};
}

vec2 v_scalar_mul(vec2 v, float t){
    return (vec2){t * v.x, t * v.y};
}
vec2 v_scalar_div(vec2 v, float t){
    if(t != 0.0f) return (vec2){v.x / t, v.y / t};
    else return (vec2){-1,-1};
}

float v_length(vec2 v){
    return (v.x * v.y + v.y *v.y);
}
vec2 v_normalize(vec2 v){
    float len= v_length(v);
    if(len == 0.0f) return (vec2){0,0};
    else{
        return v_scalar_div(v, len);
    }
}


