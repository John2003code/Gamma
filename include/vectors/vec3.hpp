#pragma once

class Vec3{
    public:
    Vec3(float x, float y, float z)
        :x(x),y(y),z(z)
        {}
    //setters
    void setX(int x){this->x = x;}
    void setY(int y){this->y = y;}
    void setZ(int z){this->z = z;}  

    //getters
    float getX(){return this->x;}
    float getY(){return this->y;}
    float getZ(){return this->z;}

    //different methods
    Vec3 v_add(Vec3 v1, Vec3 v2);
    Vec3 v_sub(Vec3 v1, Vec3 v2);
    float v_dot(Vec3 v1, Vec3 v2);
    Vec3 v_cross(Vec3 v1, Vec3 v2);
    Vec3 v_scalar_div(Vec3 v1, float x);
    float v_length(Vec3 v);
    Vec3 v_normalization(Vec3 v);

    //destructor;
    ~Vec3(){};
    
    private:
        float x,y,z;

};