#pragma once
#include<iostream>

class Vec3{
    public:
    //desfault one
    Vec3()
        :m_x(0),m_y(0),m_z(0) 
        {}
    //mpdified constructor
    Vec3(float x, float y, float z)
        :m_x(x),m_y(y),m_z(z)
        {}
    //setters
    void setX(int x){m_x = x;}
    void setY(int y){m_y = y;}
    void setZ(int z){m_z = z;}  

    //getters
    float getX(){return m_x;}
    float getY(){return m_y;}
    float getZ(){return m_z;}

    //different vector methods
    Vec3& operator+(const Vec3& v) const;
    Vec3& operator-(const Vec3& v) const;
    float v_dot(const Vec3& v) const;
    Vec3& v_cross(const Vec3& v) const;
    Vec3& v_scalar_mul(const float x) const;
    float v_length() const;
    Vec3& v_normalization() const;

    //destructor;
    ~Vec3(){};

    //copy sontructor
    Vec3(Vec3& obj);
    
    //copy assignment op
    Vec3& operator=(const Vec3& obj);


    //op= overload constructor for float to vec3
    Vec3(const float x){
        m_x= m_y = m_z = x;
    }

    //just op= overload assignment op for float to vec3
    // for same val for x,y,z
    Vec3& operator=(const float x){
        m_x = m_y = m_z= x;
        return *this;
    }

    
    private:
        float m_x,m_y,m_z;

};