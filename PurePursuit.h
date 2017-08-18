/* PurePursuit.h
 * Declaration of the class for pure pursuit controller
 * */

#ifndef PUREPURSUIT_H
#define PUREPURSUIT_H
#include "Vec2D.h"
#include <vector>
class PurePursuit{
  std::vector<Vec2D> wayPts;
  Vec2D startPt;
  Vec2D endPt;
  public:
  PurePursuit(std::vector <Vec2D> wp):wayPts(wp){
    startPt = wayPts.front();
    endPt = wayPts.back();
  }
  void closestPt(const Vec2D, const Vec2D, const Vec2D);
};
#endif /* PUREPURSUIT_H */
