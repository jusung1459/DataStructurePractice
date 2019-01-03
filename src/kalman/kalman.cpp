#include <stdlib.h>
#include <string>
#include "Eigen/Dense"

class KalmanFilter {

public:
  KalmanFilter(
      const Eigen::MatrixXd& X,  // input vecotor
      const Eigen::MatrixXd& P,  // state covariance matrix
      const Eigen::MatrixXd& K,
      
      const Eigen::MatrixXd& H,  // observation matrix
      const Eigen::MatrixXd& I,  // identity matrix
      const Eigen::MatrixXd& B,  // control input matrix
      const Eigen::MatrixXd& R,   // measurement nouse covariance matrix
      const Eigen::MatrixXd& u
  );

  void timeUpdate();

  void measurementUpdate();

private:
  Eigen::MatrixXd X,P,H,I,R;
};

KalmanFilter::KalmanFilter(
  const Eigen::MatrixXd& X,  
  const Eigen::MatrixXd& P,  
  const Eigen::MatrixXd& K,
      
  const Eigen::MatrixXd& H, 
  const Eigen::MatrixXd& I,  
  const Eigen::MatrixXd& B, 
  const Eigen::MatrixXd& R,  
  const Eigen::MatrixXd& u
) {
   = X;
  
}

//http://bilgin.esme.org/BitsAndBytes/KalmanFilterforDummies?fbclid=IwAR2EPMMgkOddiAFO4Bb7k4iJkBTyGJ_S7jiXt3kROeEvJ6qyypG9jKXc7zE

KalmanFilter KalmanFilter::timeUpdate() {

}

Eigen::MatrixXd KalmanFilter::measurementUpdate() {
  
}