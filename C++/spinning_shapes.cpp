/* To render a 3D object onto a 2D field (screen) is necessary project each point (x,y,z) onto a plane located z' units away
   from the viewer, so that the corresponding 2D position is x',y'
   (x',y') = [ (z'*x/z),(z'*y/z) ] * onto a plane located z' units away
   from the viewer, so that the corresponding 2D position is x',y'*/
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <math.h>

int const delay_time = 1;
char shape_selected = 32; // 32 --> " " (space on ANSI CODE)

/*circle equation: (x,y,z) = (x0, y0, z0) + (r1*cosθ, r1*sinθ, 0)
 (x',y') = [ (z'*x/z+z"),(z'*y/z+z") ]
 z' must be < than width/2 and height/2, so that x' < width/2 and y' < height/2 and enable display the whole figure
 inside the screen
 if we want to display the render on a fraction of the screen then:
 screen_width*(fraction) = z'*(r1 + x0) / (z"+0)
 z' = screen_width*(fraction)*z"/(r1 + x0)
 eg. fraction = 1/2 of screen --> z' = ( screen_width*z"*1 )/( 2*(r1 + x0) )*/

//field to draw 76x26 characteres
int const width = 100;
int const height = 100;
char frame[height][width];
float zbuffer[height][width] = {0};
float x = 0, y = 0, z =0;
float X0 = 0, Y0 = 0, Z0 = 0;                             // x0 --> distance shift on 'x' from the center
float theta = 0, phi = 0;                                 // max = 2pi --> ~6.28 --> 360°
float R1 = 10, L1 = 10;                                   // r1 -> radius circle  l1 -> length square
float Z2 = 5;
float Z_1 = 1/z;
int X1 = 0, Y1 = 0; 
float Z1 = (height*Z2*1) / ( 2*(R1+X0) ); //x1 --> x', y1 --> y', z1 --> z'
float theta_increment = 0.5, phi_increment = 0.5;
float pi = 3.14;
float L;

//delay function
void delay(int secs) {
  for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

//clear screen no matter the system
void clear_screen() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void select_shape();
void print_field();
void render_frame(float, float);

int main()
{
	//select_shape();
	//print_shape(shape_selected);
	//print_field();
	render_frame(90,90);

	return 0;
}

void render_frame(float A, float B)
{
	float sin_A = sin(A), cos_A = cos(A);
	float sin_B = sin(B), cos_B = cos(B);

	for (float theta = 0; theta < 2*pi; theta += theta_increment){
		float sin_theta = sin(theta), cos_theta = cos(theta);

		for (float phi = 0; phi < 2*pi; phi += phi_increment){
			float sin_phi = sin(phi), cos_phi = cos(phi);
				//Circle 
			float x_c = R1 * cos_theta + X0;
			float y_c = R1 * sin_theta + Y0;
				//3D coordinates
			x = x_c*(cos_B*cos_phi + sin_A*sin_B*sin_phi) - y_c*cos_A*cos_B;
			y = x_c*(sin_B*cos_phi - sin_A*cos_B*sin_phi) + y_c*cos_A*cos_B;
			z = Z2 + cos_A*x_c*sin_phi + y_c*sin_A; 
			Z1 = 10;
				// x and y projection
			//note that 'y' is negated here, because 'y' goes up in 3D space but down on 2D displays
			//because the screen is drawn from top to bottom
			X1 = (width/2 + Z1*Z_1*x);
			Y1 = (height/2 - Z1*Z_1*y);
				// Calculate luminance
			L = cos_phi*cos_theta*sin_B - cos_A*cos_theta*sin_phi - sin_A*sin_theta + 
				cos_B*(cos_A*sin_theta - cos_theta*sin_A*sin_phi); 
			// L ranges from -sqrt(2) to +sqrt(2).  If it's < 0, the surface is pointing away from us, 
			// so we won't bother trying to plot it
			std::cout << X1 <<","<< Y1;
			/*if (L > 0){
				if (Z_1 > zbuffer[X1,Y1]){
					zbuffer[X1,Y1] = Z_1;
					int luminance_index = L*8;
					frame[X1, Y1] = '.';
				}
			}*/
		}
	}
}

void select_shape()
{
    std::cout << "\n";
    std::cout << "\t------------------------------------------------------------" << "\n";
    std::cout << "\t------------ Program to render a spinning shape ------------" << "\n";
    std::cout << "\t------------------------------------------------------------" << std::endl;
    delay(delay_time);

    do {
        clear_screen();
        std::cout << "\t------------------------------------------------------------" << "\n";
        std::cout << "\t--------------------- Select the shape ---------------------" << "\n";
        std::cout << "\t------------------------------------------------------------" << "\n";
        std::cout << "\n\n\tC --> Circle" << "\n";
        std::cout << "\tS --> Square" << "\n";

        std::cin >> shape_selected;

    } while (shape_selected != 'C' && shape_selected != 'S' && shape_selected != 'c' && shape_selected != 's');
	
}

void print_field()
{
	for (int h = 0; h < height; h++){
		std::cout << "\t";
		for (int w = 0; w < width; w++){
			if (w == width/2 || h == height/2)
				std::cout << "o";
			else
				frame[h][w] = '*';
				std::cout << frame[h][w];
				//std::cout << zbuffer[h][w];
		}
		std::cout << "\n";
	}
}
