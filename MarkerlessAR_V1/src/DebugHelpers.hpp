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

#ifndef DEBUG_HELPERS_HPP
#define DEBUG_HELPERS_HPP

#include <string>
#include <sstream>

// Does lexical cast of the input argument to string
template <typename T>
std::string ToString(const T& value)
{
    std::ostringstream stream;
    stream << value;
    return stream.str();
}

namespace cv
{
    // This function used to show and save the image to the disk (used for during chapter writing).
    inline void showAndSave(std::string name, const cv::Mat& m)
    {
        cv::imshow(name, m);
        cv::imwrite(name + ".png", m);
        //cv::waitKey(25);
    }

    // Draw matches between two images
    inline cv::Mat getMatchesImage(cv::Mat query, cv::Mat pattern, const std::vector<cv::KeyPoint>& queryKp, const std::vector<cv::KeyPoint>& trainKp, std::vector<cv::DMatch> matches, int maxMatchesDrawn)
    {
        cv::Mat outImg;

        if (matches.size() > maxMatchesDrawn)
        {
            matches.resize(maxMatchesDrawn);
        }

        cv::drawMatches
            (
            query, 
            queryKp, 
            pattern, 
            trainKp,
            matches, 
            outImg, 
            cv::Scalar(0,200,0,255), 
            cv::Scalar::all(-1),
            std::vector<char>(), 
            cv::DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS
            );

        return outImg;
    }
}

#endif