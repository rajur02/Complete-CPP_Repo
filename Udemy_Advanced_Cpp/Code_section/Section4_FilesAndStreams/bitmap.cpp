#include <iostream>
#include <fstream>
#include "C:\Users\rrevannavar\OneDrive - HARMAN\Documents\Rajkumar\Cpp\CPP_Codes\Udemy_Advanced_Cpp\Code_section\Section4_FilesAndStreams\o46_1bitmap.h"

using namespace std;

// Save the image data to file
bool bitmap::write() {
	bitmap_file_header file_header;
	bitmap_info_header info_header;

	// Calculate the size of the bitmap
	file_header.file_size = sizeof(bitmap_file_header)
							+ sizeof(bitmap_info_header)
							+ width * height * sizeof(pixel);
	file_header.data_offset = sizeof(bitmap_file_header) + sizeof(bitmap_info_header);

	// Set the image's width and height
	info_header.width = width;
	info_header.height = height;

	// Open the file where we will write the bitmap
	ofstream ofile(filename, fstream::out | fstream::binary);

	if (!ofile.is_open()) {
		return false;
	}

	// Write the File Header
	ofile.write(reinterpret_cast<char *>(&file_header), sizeof(bitmap_file_header));
	
	// Write the Info Header
	ofile.write(reinterpret_cast<char *>(&info_header), sizeof(bitmap_info_header));
	
	// The first argument to write is an array containing the image data
	// The second argument is the size of the data
	ofile.write(reinterpret_cast<char *>(pixels.data()), pixels.size() * sizeof(pixel));

	if (!ofile) {
		return false;
	}
	
	ofile.close();

	return true;
}

// Set the pixel at (x, y)
void bitmap::set_pixel(int x, int y, pixel p) {
	int idx = y * width + x;   // Calculate pixel offset

	pixels[idx] = p;           // The vector index is the pixel offset
}

// Set all the pixels in an entire row
void bitmap::set_row(int row, pixel p) {
	for (int i = 0; i < width; ++i) {
		set_pixel(i, row, p);
	}
}

// Set all the pixels in the image
void bitmap::set_all(pixel p) {
	for (int i = 0; i < height; ++i) {
		set_row(i, p);
	}
}

int main() {
	const int width{800};
	const int height{600};
	const int x_mid = width/2;
	const int y_mid = height/2;
	const int x_unit = x_mid/4;
	const int y_unit = y_mid/4;
	
	bitmap bmp("cpp.bmp");
	
	pixel background{127, 127, 127};
	bmp.set_all(background);
	
	pixel cyan{255, 255, 25};
		
	// Draw stem of "C"
	for (int x = 0; x < x_unit; ++x)
		for (int y = 0; y < height; ++y)
			bmp.set_pixel(x, y, cyan);

	// Draw top and bottom of "C"
	for (int x = x_unit; x < x_mid; ++x) {
		for (int y = 0; y < y_unit; ++y) {
			bmp.set_pixel(x, y, cyan);
		}
		for (int y = height - y_unit; y < height; ++y) {
			bmp.set_pixel(x, y, cyan);
		}
	}
	
	// Draw first +
	for (int x = x_mid - 2 * x_unit; x < x_mid; ++x) {
		for (int y = y_mid-y_unit/2; y < y_mid + y_unit/2; ++y) {
			bmp.set_pixel(x, y, cyan);
		}
	}
	
	for (int x = x_mid - 3*x_unit/2; x < x_mid-x_unit/2; ++x) {
		for (int y = 3 * y_unit; y < 5* y_unit; ++y) {
			bmp.set_pixel(x, y, cyan);
		}
	}
	
	// Draw second +
	for (int x = 5* x_unit; x < 7 * x_unit; ++x) {
		for (int y = y_mid-y_unit/2; y < y_mid + y_unit/2; ++y) {
			bmp.set_pixel(x, y, cyan);
		}
	}
	
	for (int x = x_mid + 3*x_unit/2; x < x_mid + 5*x_unit/2; ++x) {
		for (int y = 3 * y_unit; y < 5* y_unit; ++y) {
			bmp.set_pixel(x, y, cyan);
		}
	}
	
	if (bmp.write())
		std::cout << "Succeeded\n";
	else
		std::cout << "Failed\n";
}