#ifndef _CAMERAPARAMS_H
#define _CAMERAPARAMS_H
#include <opencv2/core/core.hpp>
using namespace cv;

	CvMat* intrinsic = (CvMat*)cvLoad("intrinsic.xml");	
	CvMat* distor = (CvMat*)cvLoad("distortion.xml");

	Mat cameraMatrix = cvarrToMat(intrinsic);
	Mat distortions = cvarrToMat(distor);



#endif


