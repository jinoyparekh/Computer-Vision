//OpenCV program that loads and displays an image

#include <opencv2/opencv.hpp>

void loader(char** argv ) {
	std::cout << "\n"
	<< "OpenCV program that loads and displays an image from disk\n"
	<< argv[0] << " ../fruits.jpg\n"
	<< std::endl;
}
	

int main( int argc, char** argv ) {
	
	if (argc != 2) {
		loader(argv);
		return 0;
	}
		

  cv::Mat img = cv::imread( argv[1], -1 );

  if( img.empty() ) return -1;

  cv::namedWindow( "Fruits", cv::WINDOW_AUTOSIZE );
  cv::imshow( "Fruits", img );
  cv::waitKey( 0 );
  cv::destroyWindow( "Fruits" );

  return 0;
}
