#include "Vec2D.h"

Vec2D operator* (const int sc, const Vec2D v){
  Vec2D mul(sc * v.getX(), sc * v.getY());
  return mul;
}
Vec2D operator* (const Vec2D v, const int sc){
  return sc*v;
}

Vec2D operator* (const double sc, const Vec2D v){
  Vec2D mul(sc * v.getX(), sc * v.getY());
  return mul;
}
Vec2D operator* (const Vec2D v, const double sc){
  return sc*v;
