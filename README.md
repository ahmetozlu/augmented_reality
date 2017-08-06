## 1. INRODUCTION

This repository includes an "Open Source Markerless Augmented Reality" tutorial with step by step approach.

## 2. FOLDERS AND THEIR EXPLANATIONS

**MarkerlessAR_V1:** It is the first step of "Open Source Markerless Augmented Reality" and it has these capabilities:
- Using feature descriptors to find an arbitrary image on video
- Feature extraction: In this project, I am interested in corner detection. The [corner detection](http://docs.opencv.org/2.4/doc/tutorials/features2d/trackingmotion/harris_detector/harris_detector.html) is based
on an analysis of the edges in the image. A corner-based edge detection algorithm
searches for rapid changes in the image gradient. Usually it's done by looking for
extremums of the first derivative of the image gradients in the X and Y directions.
- Matching of feature points
- Pattern pose estimation
- Enabling support for OpenGL visualization in OpenCV
- Rendering the augmented reality (without 3D model parsing just with OpenGL draw functions)
- The Demo video of this step is available on Youtube: https://www.youtube.com/watch?v=caWl8nG6mLk
- The screenshot:
![screenshot_1](https://user-images.githubusercontent.com/22610163/28993909-d6e0be12-79c9-11e7-9548-77ce73071e12.png)

**MarkerlessAR_V2:** It is the second step of "Open Source Markerless Augmented Reality" and it has these capabilities:
- Parsing the 3D (.OBJ) model
- Loading / Rendering the 3D model
- Scaling the 3D model
- Loading .BMP file as a texture to on 3D model
- UV Mapping (projecting a 2D image to a 3D model's surface for texture mapping)
- The Demo video of this step is available on Youtube: https://www.youtube.com/watch?v=nPfR5ACrqu0
- The screenshot:
![screenshot_2](https://user-images.githubusercontent.com/22610163/28994049-6ea49036-79cd-11e7-88bf-696f046c67f3.png)

## 3. USAGE
To build this app use the CMake to generate project files for your IDE, then build the project in your IDE.

***NOTE***: You will need to have OpenCV built with OpenGL support in order to run the demo (prebuilt versions of OpenCV don't support OpenGL).

### How to enable OpenGL Support in OpenCV:
* Linux:   Execute; 

      sudo apt-get install libgtkglext1 libgtkglext1-dev
      
* MacOSX:  Install QT4 and then configure OpenCV with QT and OpenGL.

* Windows: Enable WITH_OPENGL=YES flag when building OpenCV to enable OpenGL support.

### Building the project using CMake from the command-line:
* Linux:

      export OpenCV_DIR="~/OpenCV/build"
      mkdir build
      cd build
      cmake -D OpenCV_DIR=$OpenCV_DIR ..
      make 

* MacOSX (Xcode):

      export OpenCV_DIR="~/OpenCV/build"
      mkdir build
      cd build
      cmake -G Xcode -D OpenCV_DIR=$OpenCV_DIR ..
      open ARProject.xcodeproj

* Windows (MS Visual Studio):

      set OpenCV_DIR="C:\OpenCV\build"
      mkdir build
      cd build
      cmake -G "Visual Studio 9 2008" -D OpenCV_DIR=%OpenCV_DIR% ..
      start ARProject.sln

### Running the project:
Just execute "ARProject".

## 4. STUDYINGS WHICH ARE IN PROGRESS

These 2 important tasks are in progress and they will be submitted with MarkerlessAR_V3 soon:
- Working on Performance Issues to Get Realtime Tracking
- Multiple Object Detection And Tracking

***!!! Important Note:*** The applications in this tutorial work stable with OpenCV 2.4.10 (You should build OpenCV with OpenGL support for executing this project!)

## Citation

      @ONLINE{vdtc,
          author = "Ahmet Özlü",
          title  = "Open Source Markerless Augmented Reality",
          year   = "2017",
          url    = "https://github.com/ahmetozlu/Open-Source-Markerless-Augmented-Reality"
      }

## Author
Ahmet Özlü

## License
This system is available under the MIT license. See the LICENSE file for more info.
