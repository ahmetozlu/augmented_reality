# Marker-less Augmented Reality

In this project readers will learn how to create a standard real-time project using OpenCV (for desktop), and how to perform a new method of marker-less augmented reality, using the actual environment as the input instead of printed square markers. It covers some of the theory of marker-less AR and show how to apply it in useful projects. ***Please contact if you need professional marker-less AR project with the super high accuracy!***

See the related **[Medium post](https://medium.com/@ahmetozlu93/marker-less-augmented-reality-by-opencv-and-opengl-531b2af0a130)** for more information!

## Quick Demo

- *MarkerlessAR_V1*

<p align="center">
  <img src="https://user-images.githubusercontent.com/22610163/30681274-685c38c8-9ead-11e7-85c1-d186fa3d8af8.gif">
</p>

- *MarkerlessAR_V2*

<p align="center">
  <img src="https://user-images.githubusercontent.com/22610163/30681326-a2b8fdda-9ead-11e7-8db0-319397c5e6c8.gif">
</p>

- When my OpenGL code works :D

<p align="center">
  <img src="https://user-images.githubusercontent.com/22610163/38023882-0a488c78-328c-11e8-8be0-58df223ca761.gif">
</p>

---

**TODOs:**

- Fixing the performance issues:
  - Separate "detection" and "tracking" in 2 threads.
  - Once the target image is detected just track the keypoints using sparse optical flow (calcOpticalFlowPyrLK) and compute camera pose (solvePnp) instead of performing feature detection and matching on every frame. The feature detection will be performed again when tracking is lost on most of the keypoints.
- Dimensionality reduction will be performed on key points to make pattern detector more robust.

---

## Citation
If you use this code for your publications, please cite it as:

    @ONLINE{mar,
        author = "Ahmet Özlü",
        title  = "Marker-less Augmented Reality with OpenCV and OpenGL",
        year   = "2018",
        url    = "https://github.com/ahmetozlu/augmented_reality"
    }

## Author
Ahmet Özlü

## License
This system is available under the MIT license. See the LICENSE file for more info.
