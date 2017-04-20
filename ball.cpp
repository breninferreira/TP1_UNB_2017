/** file: ball.cpp
 ** brief: Ball class - implementation
 ** author: Andrea Vedaldi
 **/

/**
 * Editor: Pablo Alves Muro Martinez
 * Edições nas linhas: 15 a 29, 30 a 43, 66
**/

#include "ball.h"

#include <iostream>

//Construtor com parâmetros de inicialização da posição
Ball::Ball(double positionX , double positionY){
  r = 0.1;
  x = positionX;
  y = positionY;
  vx = 0.3;
  vy = -0.1;
  g = 9.8;
  m = 1;
  xmin = -1;
  xmax = 1;
  ymin = -1;
  ymax = 1;
  
}

//Metodos de GET e SET da posição
double Ball::getPositionX(){
  return x;
}
double Ball::getPositionY(){
  return y;
}
void Ball::setPositionX(double positionX){
  x = positionX;
}
void Ball::setPositionY(double positionY){
  y = positionY;
}


void Ball::step(double dt)
{
  double xp = x + vx * dt ;
  double yp = y + vy * dt - 0.5 * g * dt * dt ;
  if (xmin + r <= xp && xp <= xmax - r) {
    x = xp ;
  } else {
    vx = -vx ;
  }
  if (ymin + r <= yp && yp <= ymax - r) {
    y = yp ;
    vy = vy - g * dt ;
  } else {
    vy = -vy ;
  }
}

//Metodo display usando os métodos GET E SET
void Ball::display()
{
  std::cout<<Ball::getPositionX()<<" "<<Ball::getPositionY()<<std::endl ;
}
