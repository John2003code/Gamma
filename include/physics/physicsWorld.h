#ifndef PHYSICSWORLD_H
#define PHYSICSWORLD_H
#include "../Objects/rigidBody.h"
#include<stdlib.h>


typedef struct 
{
    rgdbdy2d** bodies2d;
    size_t count;
    size_t capacity;
}physicsWorld;

void startPhysicsWorld2d(physicsWorld* world);
void physicsWorld2dUpdatePerFrame(physicsWorld* world, float dt);
void addBodyToPhysicsWorld2d(physicsWorld* world, rgdbdy2d* rb);


#endif