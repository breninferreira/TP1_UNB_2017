/** file: test-ball.cpp
 ** brief: Tests the bouncing ball simulation
 ** author: Andrea Vedaldi
 **/

#include "ball.h"

int main(int argc, char** argv)
{
  //Inicialização com parãmetros e SET de novas posições
  Ball ball(0.5, 0.5) ;
  ball.setPositionX(0.7);
  ball.setPositionY(0.7);
  const double dt = 1.0/30 ;
  for (int i = 0 ; i < 100 ; ++i) {
    ball.step(dt) ;
    ball.display() ;
  }
  return 0 ;
}
