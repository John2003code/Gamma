#include "../../include/integrators/euler.h"


void integrateEulerWithBody(rgdbdy2d* rb, float dt){
    if(!rb->is_r2_stationary){
        rb->r2_acc = v_scalar_mul(rb->r2_force, rb->r2_mass);
        rb->r2_vel = v_scalar_mul(rb->r2_acc , dt);
        rb->r2_pos = v_scalar_mul(rb->r2_vel, dt);
    }
}