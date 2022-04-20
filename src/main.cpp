#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <stdio.h>
#include <pose_tracker_3d.h>

using namespace cv;
using namespace std;
using namespace pose_tracker_3d;

int main(int argc, char* argv[])
{
    PoseTracker3D::hello_world();
}
