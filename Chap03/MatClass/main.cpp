#include <opencv2/opencv.hpp>
#include <iostream>

int main() {	
	cv::Mat img2(480, 640, CV_8UC1); //unsigned char, 1-channel(그레이스케일)
	cv::Mat img3(480, 640, CV_8UC3); //unsigned char, 3-channels(트루컬러)
	cv::Mat img4(cv::Size(640, 480), CV_8UC3); //Size를 이용한 행렬 크기 설정.

	cv::Mat	img5(480, 640, CV_8UC1, cv::Scalar(128)); //행렬의 초기값 설정
	cv::Mat img6(460, 640, CV_8UC3, cv::Scalar(0, 0, 255)); 

	cv::Mat mat1 = cv::Mat::zeros(3, 3, CV_32SC1); //0으로 초기화 한 3x3 행렬 정의
	std::cout << "0으로 초기화 한 행렬 \n" << mat1 << std::endl;

	cv::Mat mat2 = cv::Mat::ones(3, 3, CV_32FC1); //1로 초기화 한 3x3 행렬 정의
	std::cout << "1로 초기화 한 행렬 \n" << mat2 << std::endl;

	cv::Mat mat3 = cv::Mat::eye(3, 3, CV_32FC1); // 3x3 단위행렬 정의
	std::cout << "3x3 단위행렬 \n" << mat3 << std::endl;

	float data[] = { 1,2,3,4,5,6 };
	cv::Mat mat4(2, 3, CV_32FC1, data); //일반 float 배열을 참조하여 2x3 행렬 정의
	std::cout << "배열을 3x2 행렬이 참조 \n" << mat4 << std::endl;

	cv::Mat mat5 = (cv::Mat_<float>(2, 3) << 1, 2, 3, 4, 5, 6); // << 연산자를 이용한 행렬 초기화
	cv::Mat mat6 = cv::Mat_<float>({ 2,3 }, { 1,2,3,4,5,6 }); //c++11 의 초기화 리스트를 이용한 행렬 초기화
}