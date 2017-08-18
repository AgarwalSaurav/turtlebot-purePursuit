/* Vec2D.h
 * Declaration of class for 2D vector objects
 * */

#ifndef VEC2D_H
#define VEC2D_H
#define EPS 0.000001
#include <iostream>
#include <cmath>
class Vec2D
{
  double x, y;
  public:
  Vec2D():x(0),y(0){}
  Vec2D(double xi, double yi):x(xi), y(yi){};
  Vec2D(Vec2D const &) = default; // Copy constructor
  Vec2D & operator= (Vec2D const &) = default;
  Vec2D(Vec2D &&) = default; // Move constructor
  Vec2D & operator= (Vec2D &&) = default;
  void print(){
    std::cout<<"("<<x<<","<<y<<")\n";
  }
  void get(double &xg, double &yg){
    xg = x;
    yg = y;
  }
  double getX() const {return x;}
  double getY() const {return y;}
  void set(const double xs, const double ys){
    x = xs;
    y = ys;
  }
  Vec2D operator- ()const{
    Vec2D nv;
    nv.x = -x;
    nv.y = -y;
    return nv;
  }
  Vec2D & operator+= (const Vec2D &v){
    x += v.x;
    y += v.y;
    return *this;
  }
  Vec2D & operator-= (const Vec2D &v){
    Vec2D nv = -v;
    *this += nv;
    return *this; 
  }
  Vec2D operator+ (const Vec2D v)const {
    Vec2D sum = *this;
    sum += v; 
    return sum;
  }
  Vec2D operator- (const Vec2D v)const {
    Vec2D subs = *this;
    subs -= v;
    return subs;
  }
  double operator* (const Vec2D v)const {
    return x * v.x + y * v.y;
  }
  bool operator == (const Vec2D v)const {
    if(x == v.x && y == v.y)
      return 1;
    else
      return 0;
  }
  bool isEquals(const Vec2D v, double eps = EPS) const{
    Vec2D subs = *this - v;
    if(subs.norm() == 0)
      return 1;
    else
      return 0;
  }
  double norm(){
    return std::sqrt(x*x + y*y);
  }
  
};
Vec2D operator* (const int , const Vec2D );
Vec2D operator* (const Vec2D , const int );
Vec2D operator* (const double , const Vec2D );
Vec2D operator* (const Vec2D , const double );
#endif /* VEC2D_H */
