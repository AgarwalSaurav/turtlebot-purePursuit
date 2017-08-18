#include <vector>
#include "Vec2D.h"
#include "PurePursuit.h"
int main(int argc, char ** argv)
{
  Vec2D p1(1, 1);
  Vec2D p2(5, 5);
  Vec2D q(3, 3);
  std::vector <Vec2D> wayPts;
  wayPts.push_back(p1);
  wayPts.push_back(p2);
  PurePursuit controller(wayPts);
  controller.closestPt(p1, p2, q);
  return 0;
}
