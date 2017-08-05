/*
---------------------------------------------------------------------
--- Author         : Ahmet Özlü
--- Mail           : ahmetozlu93@gmail.com
--- Date           : 1st August 2017
--- Version        : 1.0
--- OpenCV Version : 2.4.10
--- Demo Video     : https://www.youtube.com/watch?v=caWl8nG6mLk
---------------------------------------------------------------------
*/

#ifndef ARDrawingContext_HPP
#define ARDrawingContext_HPP

// File includes:
#include "GeometryTypes.hpp"
#include "CameraCalibration.hpp"

// Standard includes:
#include <opencv2/opencv.hpp>

void ARDrawingContextDrawCallback(void* param);

class ARDrawingContext
{
public:
  ARDrawingContext(std::string windowName, cv::Size frameSize, const CameraCalibration& c);
  ~ARDrawingContext();

  
  bool                isPatternPresent;
  Transformation      patternPose;


  //! Set the new frame for the background
  void updateBackground(const cv::Mat& frame);

  void updateWindow();

private:
    friend void ARDrawingContextDrawCallback(void* param);
    //! Render entire scene in the OpenGl window
    void draw();

  //! Draws the background with video
  void drawCameraFrame();

  //! Draws the AR
  void drawAugmentedScene();

  //! Builds the right projection matrix from the camera calibration for AR
  void buildProjectionMatrix(const CameraCalibration& calibration, int w, int h, Matrix44& result);
  
  //! Draws the coordinate axis 
  void drawCoordinateAxis();
  
  //! Draw the cube model
  void drawCubeModel();

private:
  bool               m_isTextureInitialized;
  unsigned int       m_backgroundTextureId;
  CameraCalibration  m_calibration;
  cv::Mat            m_backgroundImage;
  std::string        m_windowName;
};

#endif