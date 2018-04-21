#include<opencv2/opencv.hpp>
using namespace cv;

int main()
{
	//读入视频
	VideoCapture capture(0);

	//循环显示每一帧
	while(1)
	{
		Mat frame;
		capture>>frame;
		imshow("vedio",frame);
		waitKey(30);
	}
	return 0;
}
