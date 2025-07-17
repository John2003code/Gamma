#ifndef EULER_H
#define EULER_H

#include "../../include/objects/rigidBody.h"

// dt here is the time for one frame
// so for example if a machine is running 30fps that means-->
//   in 1 sec it runs 30 static frames
//   hence we can say one frame takes about 1/30 sec 
//   here dt= 1 / 30 sec 
// this will run in physicsWorldUpdate 
void integrateEulerWithBody(rgdbdy2d* rb, float dt);


#endif