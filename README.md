# 1. INRODUCTION

This repository includes an "Open Source Markerless Augmented Reality" tutorial with step by step approach.

# 2. FOLDERS AND THEIR EXPLANATIONS

**MarkerlessAR_V1:** It is the first step of "Open Source Markerless Augmented Reality" and it has these capabilities:
- Using feature descriptors to find an arbitrary image on video
- Feature extraction
- Matching of feature points
- Pattern pose estimation
- Enabling support for OpenGL visualization in OpenCV
- Rendering the augmented reality (without 3D model parsing just with OpenGL draw functions)
- The Demo video of this step is available on Youtube: https://www.youtube.com/watch?v=caWl8nG6mLk

**MarkerlessAR_V2:** It is the second step of "Open Source Markerless Augmented Reality" and it has these capabilities:
- Parsing the 3D (.OBJ) model
- Loading / Rendering the 3D model
- Scaling the 3D model
- Loading .BMP file as a texture to on 3D model
- UV Mapping (projecting a 2D image to a 3D model's surface for texture mapping)
- The Demo video of this step is available on Youtube: https://www.youtube.com/watch?v=nPfR5ACrqu0

# 3. STUDYINGS WHICH ARE IN PROGRESS

These 2 important tasks are in progress and they will be submitted with MarkerlessAR_V3 soon:
- Working on Performance Issues to Get Realtime Tracking
- Multiple Object Detection And Tracking

***!!! Important Note:*** The applications in this tutorial work stable with OpenCV 2.4.10 (You should build OpenCV with OpenGL support for executing this project!)
