#include "vectors/vec3.hpp"
#include<math.h>



//copy sontructor
Vec3::Vec3(Vec3& obj){
    m_x = obj.m_x;
    m_y = obj.m_y;
    m_z = obj.m_z;
}

//copy assignment op
Vec3& Vec3::operator=(const Vec3& obj){
    if(&obj != this){
        m_x = obj.m_x;
        m_y = obj.m_y;
        m_z = obj.m_z;
        return *this;
    }
    return *this;
}

//op= overload constructor for float to vec3
Vec3::Vec3(const float x){
    m_x= m_y = m_z = x;
}

//just op= overload assignment op for float to vec3
// for same val for x,y,z
Vec3& Vec3::operator=(const float x){
    m_x = m_y = m_z= x;
    return *this;
}


Vec3& Vec3::operator+(const Vec3& v) const{
    Vec3 obj(m_x+v.m_x, m_y+v.m_y, m_z+v.m_z);
    return obj;
}

Vec3& Vec3::operator-(const Vec3& v) const{
    Vec3 obj(m_x-v.m_x, m_y-v.m_y, m_z-v.m_z);
    return obj;
}

float Vec3::v_dot(const Vec3& v) const{
    return (m_x*v.m_x + m_x*v.m_y + m_z*v.m_z);
}

Vec3& Vec3::v_cross(const Vec3& v) const{
    Vec3 obj(m_y*v.m_z - m_z*v.m_y, m_z*v.m_x - m_x*v.m_z, m_x*v.m_y - m_y*v.m_x);
    return obj;
}

Vec3& Vec3::v_scalar_mul(const float val) const{
    Vec3 obj(val*m_x, val*m_y, val*m_z);
    return obj;
}

float Vec3::v_length() const{
    return (sqrt(m_x*m_x + m_y*m_y + m_z*m_z));
}

Vec3& Vec3::v_normalization() const{
    float len = Vec3::v_length();
    if(len == 0.0f){
        Vec3 obj= 0.0f; 
        return obj;
    }
    Vec3 normalized_vec(m_x/len, m_y/len, m_z/len);
    return normalized_vec;
}