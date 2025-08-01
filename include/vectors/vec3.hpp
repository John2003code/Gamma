#pragma once
#include<iostream>

class Vec3{
    public:
    Vec3()
        :x(0),y(0),z(0) 
        {}

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

    //different vector methods
    Vec3 operator+(const Vec3& v) const;
    Vec3 operator-(const Vec3& v) const;
    float v_dot(const Vec3& v) const;
    Vec3 v_cross(const Vec3& v) const;
    Vec3 v_scalar_mul(const float x) const;
    float v_length() const;
    Vec3 v_normalization() const;

    //destructor;
    ~Vec3(){};
    
    private:
        float x,y,z;

};