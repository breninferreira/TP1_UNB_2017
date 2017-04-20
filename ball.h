/** file: ball.h
 ** brief: Ball class
 ** author: Andrea Vedaldi
 **/
 
/**
 * Editor: Pablo Alves Muro Martinez
 * Edições nas linhas: 20, 26, 27, 28, 29
**/
#ifndef __ball__
#define __ball__

#include "simulation.h"

class Ball : public Simulation
{
public:
  // Constructors and member functions
  
  //Construtor com parâmentros para inicialização da posição
  Ball(double positionX , double positionY) ;
  void step(double dt) ;
  void display() ;
  
  //Métodos de GET e SET das posições
  double getPositionX() ;
  double getPositionY() ;
  void setPositionX(double x) ;
  void setPositionY(double y) ;

protected:
  // Data members
  // Position and velocity of the ball
  double x ;
  double y ;
  double vx ;
  double vy ;

  // Mass and size of the ball
  double m ;
  double r ;

  // Gravity acceleration
  double g ;

  // Geometry of the box containing the ball
  double xmin ;
  double xmax ;
  double ymin ;
  double ymax ;
} ;

#endif /* defined(__ball__) */
