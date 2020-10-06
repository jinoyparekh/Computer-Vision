// OpenCV program that loads and displays an image

#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace cv;

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
		

  Mat img = imread( argv[1], -1 );

  if( img.empty() ) return -1;

  namedWindow( "Fruits", WINDOW_AUTOSIZE );
  imshow( "Fruits", img );
  waitKey( 0 );
  destroyWindow( "Fruits" );

  return 0;
}
