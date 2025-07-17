#include "../../include/objects/rigidBody.h"

rgdbdy2d* createRigidBody2d(vec2 pos, float mass, int is_static){
    rgdbdy2d* rb;
    rb->r2_pos = pos;
    rb->r2_mass = mass;
    rb->is_r2_stationary = is_static;
    rb->r2_inverse_mass= (is_static || mass <= 0)? 0.0f : (1.0f / mass);
    rb->r2_vel = (vec2){0.0f,0.0f};
    rb->r2_force = (vec2){0.0f,0.0f};
    rb->r2_acc = (vec2){0.0f,0.0f};

    return rb;
}


void rigidBody2dApplyForce(rgdbdy2d* rb, vec2 new_force){
    if(!rb->is_r2_stationary){
        rb->r2_force = v_add(rb->r2_force, new_force);
    }
}

void rigidBody2dClearForce(rgdbdy2d* rb){
    rb->r2_acc = (vec2){0.0f, 0.0f};
    rb->r2_force = (vec2){0.0f, 0.0f};
}

