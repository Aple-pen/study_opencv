#include <opencv2/opencv.hpp>
#include <iostream>

int main() {	
	cv::Mat img2(480, 640, CV_8UC1); //unsigned char, 1-channel(�׷��̽�����)
	cv::Mat img3(480, 640, CV_8UC3); //unsigned char, 3-channels(Ʈ���÷�)
	cv::Mat img4(cv::Size(640, 480), CV_8UC3); //Size�� �̿��� ��� ũ�� ����.

	cv::Mat	img5(480, 640, CV_8UC1, cv::Scalar(128)); //����� �ʱⰪ ����
	cv::Mat img6(460, 640, CV_8UC3, cv::Scalar(0, 0, 255)); 

	cv::Mat mat1 = cv::Mat::zeros(3, 3, CV_32SC1); //0���� �ʱ�ȭ �� 3x3 ��� ����
	std::cout << "0���� �ʱ�ȭ �� ��� \n" << mat1 << std::endl;

	cv::Mat mat2 = cv::Mat::ones(3, 3, CV_32FC1); //1�� �ʱ�ȭ �� 3x3 ��� ����
	std::cout << "1�� �ʱ�ȭ �� ��� \n" << mat2 << std::endl;

	cv::Mat mat3 = cv::Mat::eye(3, 3, CV_32FC1); // 3x3 ������� ����
	std::cout << "3x3 ������� \n" << mat3 << std::endl;

	float data[] = { 1,2,3,4,5,6 };
	cv::Mat mat4(2, 3, CV_32FC1, data); //�Ϲ� float �迭�� �����Ͽ� 2x3 ��� ����
	std::cout << "�迭�� 3x2 ����� ���� \n" << mat4 << std::endl;

	cv::Mat mat5 = (cv::Mat_<float>(2, 3) << 1, 2, 3, 4, 5, 6); // << �����ڸ� �̿��� ��� �ʱ�ȭ
	cv::Mat mat6 = cv::Mat_<float>({ 2,3 }, { 1,2,3,4,5,6 }); //c++11 �� �ʱ�ȭ ����Ʈ�� �̿��� ��� �ʱ�ȭ
}