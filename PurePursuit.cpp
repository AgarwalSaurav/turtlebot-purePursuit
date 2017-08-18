#include "PurePursuit.h"

void PurePursuit::closestPt(const Vec2D p1, const Vec2D p2, const Vec2D q)
{
  if(p1.isEquals(p2)){
    std::cout<<"Start and End Points are equal\n";
    return;
  }
  double alpha;
  auto v12 = p2 - p1;
  auto vq2 = p2 - q;
  alpha = (vq2 * v12) / (v12 * v12);
  std::cout<<alpha;
  

}

