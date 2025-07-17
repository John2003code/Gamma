#ifndef RIGIDBODY_H
#define RIGIDBODY_H

#include "../core/vec2.h"
#include<stdlib.h>
// rigidBody2d is the struct for defining basic body2d it can be box or 
// circle
typedef struct rigidBody2d
{
    int is_r2_stationary;
    float r2_mass;
    // inverse mass is created because if we try to find acc = F/ mass is slow
    // division is slow. hence we need inverse_mass = 1 / mass
    // noe acc = f * inverse_mass which is faster
    float r2_inverse_mass;
    vec2 r2_pos;
    vec2 r2_vel;
    vec2 r2_acc;
    vec2 r2_force;
}rgdbdy2d;


//API
rgdbdy2d* createRigidBody2d(vec2 pos, float mass, int is_static);
void rigidBody2dApplyForce(rgdbdy2d* rb, vec2 new_force);
void rigidBody2dClearForce(rgdbdy2d* rb);


#endif