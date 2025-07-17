#include "../../include/objects/rigidBody.h"
#include "../../include/integrators/euler.h"
#include "../../include/physics/physicsWorld.h"

void startPhysicsWorld2d(physicsWorld* world){
    world->capacity = 10;
    world->count = 0;
    world->bodies2d = malloc(sizeof(rgdbdy2d*) * world->capacity);
}

void addBodyToPhysicsWorld2d(physicsWorld* world, rgdbdy2d* rb){
    if(world->count >= world->capacity){
        world->capacity = 2* world->capacity + 1;
        world->bodies2d = realloc(world->bodies2d, sizeof(rgdbdy2d*) * world->capacity);
    }
    world->bodies2d[world->count] = rb;
    world->count++;
}

void physicsWorld2dUpdatePerFrame(physicsWorld* world, float dt){
    for(int i=0; i<world->count; i++){
        integrateEulerWithBody(world->bodies2d[i], dt);
    }
}