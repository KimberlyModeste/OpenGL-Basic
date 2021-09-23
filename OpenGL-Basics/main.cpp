//CSC470 HW1
//Kimberly Modeste
#include <GL/glut.h>
#include <math.h>
#include <time.h> 
#include <iostream>

using namespace std;
void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0); //Set display color to white
	glClear(GL_COLOR_BUFFER_BIT);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 640, 0, 480);
	glMatrixMode(GL_MODELVIEW);

}

void basicDrawing(void) {

	int square1[] = { 400, 350 };
	int square2[] = { 500, 350 };
	int square3[] = { 400, 450 };
	int square4[] = { 500, 450 };

	int hex1[] = { 75, 425 }; //top-l
	int hex2[] = { 125, 425 }; //top-r
	int hex3[] = { 50, 375 }; // mid-l
	int hex4[] = { 150, 375 }; //mid-r
	int hex5[] = { 75, 325 }; //bot-l
	int hex6[] = { 125, 325 }; //bot-r

	int mouth1[] = { 250, 225 };
	int mouth2[] = { 250, 175 };
	int mouth3[] = { 300, 225 };
	int mouth4[] = { 300, 75 };
	int mouth5[] = { 350, 225 };
	int mouth6[] = { 350, 175 };
	int mouth7[] = { 400, 325 };
	int mouth8[] = { 400, 175 };

	int heart0[] = { 75, 125 };
	int heart1[] = { 25, 150 };
	int heart2[] = { 25, 183 };
	int heart3[] = { 41.5, 200 };
	int heart4[] = { 58, 200 };
	int heart5[] = { 75, 183 };
	int heart6[] = { 92, 200 };
	int heart7[] = { 108.5, 200 };
	int heart8[] = { 125, 183 };
	int heart9[] = { 125, 150 };

	int dimond1[] = { 225, 300 };
	int dimond2[] = { 200, 325 };
	int dimond3[] = { 250, 325 };
	int dimond4[] = { 225, 350 };

	int tube1[] = { 450, 75 };
	int tube2[] = { 500, 150 };
	int tube3[] = { 525, 125 };
	int tube4[] = { 475, 50 };
	int tube5[] = { 500, 55 };
	int tube6[] = { 600, 150 };
	int tube7[] = { 625, 125 };
	int tube8[] = { 550, 30 };

	int e1[] = { 500, 175 };
	int e2[] = { 475 , 325 };
	int e3[] = { 500 , 325 };
	int e4[] = { 600 , 300 };
	int e5[] = { 500 , 275 };
	int e6[] = { 575 , 250 };
	int e7[] = { 600, 175 };
	int e8[] = { 500, 215 };

	int x = 200;
	int y = -125;

	int eye1[] = { 75 + x, 425 + y }; //top-l
	int eye2[] = { 125 + x, 425 + y }; //top-r
	int eye3[] = { 50 + x, 375 + y }; // mid-l
	int eye4[] = { 150 + x, 375 + y }; //mid-r
	int eye5[] = { 75 + x, 325 + y }; //bot-l
	int eye6[] = { 125 + x, 325 + y }; //bot-r

	int x1 = 400;
	int y1 = 200;
	int hearts0[] = { 75 + x1, 125 + y1 };
	int hearts1[] = { 25 + x1, 150 + y1 };
	int hearts2[] = { 25 + x1, 183 + y1 };
	int hearts3[] = { 41.5 + x1, 200 + y1 };
	int hearts4[] = { 58 + x1, 200 + y1 };
	int hearts5[] = { 75 + x1, 183 + y1 };
	int hearts6[] = { 92 + x1, 200 + y1 };
	int hearts7[] = { 108.5 + x1, 200 + y1 };
	int hearts8[] = { 125 + x1, 183 + y1 };
	int hearts9[] = { 125 + x1, 150 + y1 };


	GLubyte halftone[] = {
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55,
	 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x55, 0x55, 0x55 };

	GLubyte fire[] = {
	  0x00, 0x00, 0x00, 0x00,
		  0x00, 0x00, 0x00, 0x00,
		  0x00, 0x00, 0x00, 0x00,
		  0x00, 0x00, 0x00, 0x00,
		  0x00, 0x00, 0x00, 0x00,
		  0x00, 0x00, 0x00, 0x00,
		  0x00, 0x00, 0x00, 0xc0,
		  0x00, 0x00, 0x01, 0xf0,
		  0x00, 0x00, 0x07, 0xf0,
		  0x0f, 0x00, 0x1f, 0xe0,
		  0x1f, 0x80, 0x1f, 0xc0,
		  0x0f, 0xc0, 0x3f, 0x80,
		  0x07, 0xe0, 0x7e, 0x00,
		  0x03, 0xf0, 0xff, 0x80,
		  0x03, 0xf5, 0xff, 0xe0,
		  0x07, 0xfd, 0xff, 0xf8,
		  0x1f, 0xfc, 0xff, 0xe8,
		  0xff, 0xe3, 0xbf, 0x70,
		  0xde, 0x80, 0xb7, 0x00,
		  0x71, 0x10, 0x4a, 0x80,
		  0x03, 0x10, 0x4e, 0x40,
		  0x02, 0x88, 0x8c, 0x20,
		  0x05, 0x05, 0x04, 0x40,
		  0x02, 0x82, 0x14, 0x40,
		  0x02, 0x40, 0x10, 0x80,
		  0x02, 0x64, 0x1a, 0x80,
		  0x00, 0x92, 0x29, 0x00,
		  0x00, 0xb0, 0x48, 0x00,
		  0x00, 0xc8, 0x90, 0x00,
		  0x00, 0x85, 0x10, 0x00,
		  0x00, 0x03, 0x00, 0x00,
		  0x00, 0x00, 0x10, 0x00 };

	GLubyte mask[] = { 0x31, 0xfe, 0x34, 0x12,
				  0xff, 0xfc, 0x00, 0x12,
				  0xaa, 0xfe, 0x00, 0x12,
				  0xaa, 0xfe, 0x00, 0x12,
				  0xfc, 0xfe, 0x00, 0x12,
				  0xff, 0xfe, 0x00, 0x12,
	};

	GLubyte moon[] = { 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00,
					0x00, 0x03, 0xc2, 0x1c, 0x00, 0x00,
					0x02, 0x40, 0x30, 0x43, 0x00, 0xc0,
					0x08, 0x08, 0x44, 0x49, 0x20, 0x90,
					0x08, 0x08, 0x53, 0x54, 0xc8, 0x28,
					0x08, 0x08, 0x54, 0x54, 0x28, 0x28,
					0x08, 0x08, 0x53, 0x49, 0xc8, 0x90,
					0x04, 0x02, 0x44, 0x33, 0x20, 0xc0,
					0x03, 0x00, 0x18, 0xc4, 0x00, 0x00,
					0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
	};


	//Head
	glColor3f(0.5, 0.5, 0.5);
	glRectiv(square4, square1);

	//Eye
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2iv(hex1);
	glVertex2iv(hex2);
	glVertex2iv(hex4);
	glVertex2iv(hex6);
	glVertex2iv(hex5);
	glVertex2iv(hex3);
	glEnd();


	//Mouth
	glBegin(GL_QUAD_STRIP);
	//gray
	glColor3f(0.5, 0.5, 0.5);
	glVertex2iv(mouth1);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2iv(mouth2);

	glColor3f(0.5, 0.5, 0.5);
	glVertex2iv(mouth3);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2iv(mouth4);

	glColor3f(0.5, 0.5, 0.5);
	glVertex2iv(mouth5);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2iv(mouth6);

	glColor3f(0.5, 0.5, 0.5);
	glVertex2iv(mouth7);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2iv(mouth8);
	glEnd();


	//heart
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.7, 0.4);
	glVertex2iv(heart0);
	glVertex2iv(heart1);

	glColor3f(1.0, 0.0, 0.0);
	glVertex2iv(heart2);
	glVertex2iv(heart3);
	glVertex2iv(heart4);
	glVertex2iv(heart5);
	glVertex2iv(heart6);
	glVertex2iv(heart7);
	glVertex2iv(heart8);

	glColor3f(1.0, 0.7, 0.4);
	glVertex2iv(heart9);
	glEnd();

	//Diamonds
	glColor3f(0.0, 0.0, 0.0);
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(halftone);
	glBegin(GL_POLYGON);
	glVertex2iv(dimond1);
	glVertex2iv(dimond2);
	glVertex2iv(dimond4);
	glVertex2iv(dimond3);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);

	//arms?
	glColor3f(1.0, 0.6, 0.1);
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(fire);
	glBegin(GL_QUADS);
	glVertex2iv(tube1);
	glVertex2iv(tube2);
	glVertex2iv(tube3);
	glVertex2iv(tube4);
	glVertex2iv(tube5);
	glVertex2iv(tube6);
	glVertex2iv(tube7);
	glVertex2iv(tube8);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);

	//E
	glColor3f(1.0, 0.6, 0.1);
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(mask);
	glColor3f(0.1, 1.0, 0.1);
	glRectiv(e2, e1);

	glColor3f(0.0, 1.0, 0.0);
	glRectiv(e3, e4);
	glRectiv(e5, e6);
	glRectiv(e7, e8);
	glDisable(GL_POLYGON_STIPPLE);


	glColor3f(0.0, 1.0, 0.0);
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(moon);
	glBegin(GL_POLYGON);
	glVertex2iv(eye1);
	glVertex2iv(eye2);
	glVertex2iv(eye4);
	glVertex2iv(eye6);
	glVertex2iv(eye5);
	glVertex2iv(eye3);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2iv(hearts0);
	glVertex2iv(hearts1);

	glColor3f(1.0, 0.0, 0.0);
	glVertex2iv(hearts2);
	glVertex2iv(hearts3);
	glVertex2iv(hearts4);
	glVertex2iv(hearts5);
	glVertex2iv(hearts6);
	glVertex2iv(hearts7);
	glVertex2iv(hearts8);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2iv(hearts9);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);
	glFlush();
}

void robot(int x, int y, float width, float height ) {
	int headP1[] = { (-40 * width) + x, (40 * height) + y }; //360, 340
	int headP2[] = { (40 * width) + x,	(40 * height) + y };
	int headP3[] = { (40 * width) + x,	(-40 * height) + y };
	int headP4[] = { (-40 * width) + x, (-40 * height) + y };

	int neckP1[] = { (-17 * width) + x, (-40 * height) + y };
	int neckP2[] = { (13 * width) + x,	(-40 * height) + y };
	int neckP3[] = { (13 * width) + x,	(-90 * height) + y };
	int neckP4[] = { (-17 * width) + x,	(-90 * height) + y };

	int bodyP1[] = { (-40 * width) + x, (-70 * height) + y };
	int bodyP2[] = { (40 * width) + x,	(-70 * height) + y };
	int bodyP3[] = { (40 * width) + x,	(-160 * height) + y };
	int bodyP4[] = { (-40 * width) + x, (-160 * height) + y };

	int rightP1[] = { (-80 * width) + x, (-110 * height) + y };
	int rightP2[] = { (-40 * width) + x, (-70 * height) + y };
	int rightP3[] = { (-30 * width) + x, (-80 * height) + y };
	int rightP4[] = { (-70 * width) + x, (-120 * height) + y };

	int leftP1[] = { (80 * width) + x, (-110 * height) + y };
	int leftP2[] = { (40 * width) + x, (-70 * height) + y };
	int leftP3[] = { (30 * width) + x, (-80 * height) + y };
	int leftP4[] = { (70 * width) + x, (-120 * height) + y };

	int rLegP1[] = { (-40 * width) + x, (-160 * height) + y };
	int rLegP2[] = { (-10 * width) + x, (-160 * height) + y };
	int rLegP3[] = { (-10 * width) + x, (-210 * height) + y };
	int rLegP4[] = { (-40 * width) + x, (-210 * height) + y };

	int lLegP1[] = { (10 * width) + x, (-160 * height) + y };
	int lLegP2[] = { (40 * width) + x, (-160 * height) + y };
	int lLegP3[] = { (40 * width) + x, (-210 * height) + y };
	int lLegP4[] = { (10 * width) + x, (-210 * height) + y };

	int rFootP1[] = { (-50 * width) + x, (-210 * height) + y };
	int rFootP2[] = { (-10 * width) + x, (-210 * height) + y };
	int rFootP3[] = { (-10 * width) + x, (-220 * height) + y };
	int rFootP4[] = { (-50 * width) + x, (-220 * height) + y };

	int lFootP1[] = { (10 * width) + x, (-210 * height) + y };
	int lFootP2[] = { (50 * width) + x, (-210 * height) + y };
	int lFootP3[] = { (50 * width) + x, (-220 * height) + y };
	int lFootP4[] = { (10 * width) + x, (-220 * height) + y };

	int rEyeP1[] = { (-25 * width) + x, (10 * height) + y };//Tl
	int rEyeP2[] = { (-15 * width) + x, (10 * height) + y };//Tr
	int rEyeP3[] = { (-10 * width) + x, (0 * height) + y };//Mr
	int rEyeP4[] = { (-15 * width) + x, (-10 * height) + y };//Br
	int rEyeP5[] = { (-25 * width) + x, (-10 * height) + y };//Bl
	int rEyeP6[] = { (-30 * width) + x, (0 * height) + y };//Bl

	int lEyeP1[] = { (15 * width) + x, (10 * height) + y };//Tl
	int lEyeP2[] = { (25 * width) + x, (10 * height) + y };//Tr
	int lEyeP3[] = { (30 * width) + x, (0 * height) + y };//Mr
	int lEyeP4[] = { (25 * width) + x, (-10 * height) + y };//Br
	int lEyeP5[] = { (15 * width) + x, (-10 * height) + y };//Bl
	int lEyeP6[] = { (10 * width) + x, (0 * height) + y };//Bl

	int mouth1[] = { (-30 * width) + x, (-15 * height) + y };
	int mouth2[] = { (30 * width) + x , (-15 * height) + y };
	int mouth3[] = { (30 * width) + x , (-35 * height) + y };
	int mouth4[] = { (-30 * width) + x, (-35 * height) + y };

	int mouth5[] = { (-10 * width) + x, (-15 * height) + y };
	int mouth6[] = { (10 * width) + x,  (-15 * height) + y };
	int mouth7[] = { (10 * width) + x,  (-35 * height) + y };
	int mouth8[] = { (-10 * width) + x, (-35 * height) + y };


	GLubyte texture[] = {
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
	};

	//Head	
	glColor3f(0.5, 0.5, 0.5);
	glRectiv(headP1, headP3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(headP1);
	glVertex2iv(headP2);
	glVertex2iv(headP3);
	glVertex2iv(headP4);
	glVertex2iv(headP1);
	glEnd();

	//Neck
	glColor3f(0.5, 0.5, 0.5);
	glRectiv(neckP1, neckP3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(neckP1);
	glVertex2iv(neckP2);
	glVertex2iv(neckP3);
	glVertex2iv(neckP4);
	glVertex2iv(neckP1);
	glEnd();

	//neck texture
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(texture);
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_POLYGON);
	glVertex2iv(neckP1);
	glVertex2iv(neckP2);
	glVertex2iv(neckP3);
	glVertex2iv(neckP4);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);

	//Right
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2iv(rightP1);
	glVertex2iv(rightP2);
	glVertex2iv(rightP3);
	glVertex2iv(rightP4);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(rightP1);
	glVertex2iv(rightP2);
	glVertex2iv(rightP3);
	glVertex2iv(rightP4);
	glVertex2iv(rightP1);
	glEnd();

	//Left
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2iv(leftP1);
	glVertex2iv(leftP2);
	glVertex2iv(leftP3);
	glVertex2iv(leftP4);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(leftP1);
	glVertex2iv(leftP2);
	glVertex2iv(leftP3);
	glVertex2iv(leftP4);
	glVertex2iv(leftP1);
	glEnd();

	//body
	glColor3f(0.5, 0.5, 0.5);
	glRectiv(bodyP1, bodyP3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(bodyP1);
	glVertex2iv(bodyP2);
	glVertex2iv(bodyP3);
	glVertex2iv(bodyP4);
	glVertex2iv(bodyP1);
	glEnd();

	//right leg
	glColor3f(0.5, 0.5, 0.5);
	glRectiv(rLegP1, rLegP3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(rLegP1);
	glVertex2iv(rLegP2);
	glVertex2iv(rLegP3);
	glVertex2iv(rLegP4);
	glVertex2iv(rLegP1);
	glEnd();
	//RIGHT LEG TEXTURE
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(texture);
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_POLYGON);
	glVertex2iv(rLegP1);
	glVertex2iv(rLegP2);
	glVertex2iv(rLegP3);
	glVertex2iv(rLegP4);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);


	//left leg
	glColor3f(0.5, 0.5, 0.5);
	glRectiv(lLegP1, lLegP3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(lLegP1);
	glVertex2iv(lLegP2);
	glVertex2iv(lLegP3);
	glVertex2iv(lLegP4);
	glVertex2iv(lLegP1);
	glEnd();
	//LEFT LEG TEXTURE
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(texture);
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_POLYGON);
	glVertex2iv(lLegP1);
	glVertex2iv(lLegP2);
	glVertex2iv(lLegP3);
	glVertex2iv(lLegP4);
	glVertex2iv(lLegP1);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);

	////right foot	
	//glColor3f(0.5, 0.5, 0.5);
	//glRectiv(rFootP1, rFootP3);
	//glColor3f(0.0, 0.0, 0.0);
	//glBegin(GL_LINE_STRIP);
	//	glVertex2iv(rFootP1);
	//	glVertex2iv(rFootP2);
	//	glVertex2iv(rFootP3);
	//	glVertex2iv(rFootP4);
	//	glVertex2iv(rFootP1);
	//glEnd();
	//
	////left foot	
	//glColor3f(0.5, 0.5, 0.5);
	//glRectiv(lFootP1, lFootP3);
	//glColor3f(0.0, 0.0, 0.0);
	//glBegin(GL_LINE_STRIP);
	//	glVertex2iv(lFootP1);
	//	glVertex2iv(lFootP2);
	//	glVertex2iv(lFootP3);
	//	glVertex2iv(lFootP4);
	//	glVertex2iv(lFootP1);
	//glEnd();

	//right eye
	glColor3f(0.53, 0.8, 0.92);
	glBegin(GL_POLYGON);
	glVertex2iv(rEyeP1);
	glVertex2iv(rEyeP2);
	glVertex2iv(rEyeP3);
	glVertex2iv(rEyeP4);
	glVertex2iv(rEyeP5);
	glVertex2iv(rEyeP6);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(rEyeP1);
	glVertex2iv(rEyeP2);
	glVertex2iv(rEyeP3);
	glVertex2iv(rEyeP4);
	glVertex2iv(rEyeP5);
	glVertex2iv(rEyeP6);
	glVertex2iv(rEyeP1);
	glEnd();

	//left eye
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2iv(lEyeP1);
	glVertex2iv(lEyeP2);
	glVertex2iv(lEyeP3);
	glVertex2iv(lEyeP4);
	glVertex2iv(lEyeP5);
	glVertex2iv(lEyeP6);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(lEyeP1);
	glVertex2iv(lEyeP2);
	glVertex2iv(lEyeP3);
	glVertex2iv(lEyeP4);
	glVertex2iv(lEyeP5);
	glVertex2iv(lEyeP6);
	glVertex2iv(lEyeP1);
	glEnd();

	//mouth
	glColor3f(0.8, 0.8, 0.8);
	glRectiv(mouth1, mouth3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(mouth1);
	glVertex2iv(mouth2);
	glVertex2iv(mouth3);
	glVertex2iv(mouth4);
	glVertex2iv(mouth1);
	glVertex2iv(mouth5);
	glVertex2iv(mouth8);
	glVertex2iv(mouth7);
	glVertex2iv(mouth6);
	glEnd();
}

void Krobot(int x, int y, float width, float height) {
	int headP1[] = { (-40 * width) + x, (40 * height) + y }; //360, 340
	int headP2[] = { (40 * width) + x,	(40 * height) + y };
	int headP3[] = { (40 * width) + x,	(-40 * height) + y };
	int headP4[] = { (-40 * width) + x, (-40 * height) + y };

	int neckP1[] = { (-17 * width) + x, (-40 * height) + y };
	int neckP2[] = { (13 * width) + x,	(-40 * height) + y };
	int neckP3[] = { (13 * width) + x,	(-90 * height) + y };
	int neckP4[] = { (-17 * width) + x,	(-90 * height) + y };

	int bodyP1[] = { (-40 * width) + x, (-70 * height) + y };
	int bodyP2[] = { (40 * width) + x,	(-70 * height) + y };
	int bodyP3[] = { (40 * width) + x,	(-160 * height) + y };
	int bodyP4[] = { (-40 * width) + x, (-160 * height) + y };

	int rightP1[] = { (-80 * width) + x, (-40 * height) + y };
	int rightP2[] = { (-40 * width) + x, (-80 * height) + y };
	int rightP3[] = { (-30 * width) + x, (-70 * height) + y };
	int rightP4[] = { (-70 * width) + x, (-30 * height) + y };

	int leftP1[] = { (80 * width) + x, (-40 * height) + y };
	int leftP2[] = { (40 * width) + x, (-80 * height) + y };
	int leftP3[] = { (30 * width) + x, (-70 * height) + y };
	int leftP4[] = { (70 * width) + x, (-30 * height) + y };

	int rLegP1[] = { (-40 * width) + x, (-160 * height) + y };
	int rLegP2[] = { (-10 * width) + x, (-160 * height) + y };
	int rLegP3[] = { (-10 * width) + x, (-210 * height) + y };
	int rLegP4[] = { (-40 * width) + x, (-210 * height) + y };

	int lLegP1[] = { (10 * width) + x, (-160 * height) + y };
	int lLegP2[] = { (40 * width) + x, (-160 * height) + y };
	int lLegP3[] = { (40 * width) + x, (-210 * height) + y };
	int lLegP4[] = { (10 * width) + x, (-210 * height) + y };

	int rFootP1[] = { (-50 * width) + x, (-210 * height) + y };
	int rFootP2[] = { (-10 * width) + x, (-210 * height) + y };
	int rFootP3[] = { (-10 * width) + x, (-220 * height) + y };
	int rFootP4[] = { (-50 * width) + x, (-220 * height) + y };

	int lFootP1[] = { (10 * width) + x, (-210 * height) + y };
	int lFootP2[] = { (50 * width) + x, (-210 * height) + y };
	int lFootP3[] = { (50 * width) + x, (-220 * height) + y };
	int lFootP4[] = { (10 * width) + x, (-220 * height) + y };

	int rEyeP1[] = { (-25 * width) + x, (10 * height) + y };//Tl
	int rEyeP2[] = { (-15 * width) + x, (10 * height) + y };//Tr
	int rEyeP3[] = { (-10 * width) + x, (0 * height) + y };//Mr
	int rEyeP4[] = { (-15 * width) + x, (-10 * height) + y };//Br
	int rEyeP5[] = { (-25 * width) + x, (-10 * height) + y };//Bl
	int rEyeP6[] = { (-30 * width) + x, (0 * height) + y };//Bl

	int lEyeP1[] = { (15 * width) + x, (10 * height) + y };//Tl
	int lEyeP2[] = { (25 * width) + x, (10 * height) + y };//Tr
	int lEyeP3[] = { (30 * width) + x, (0 * height) + y };//Mr
	int lEyeP4[] = { (25 * width) + x, (-10 * height) + y };//Br
	int lEyeP5[] = { (15 * width) + x, (-10 * height) + y };//Bl
	int lEyeP6[] = { (10 * width) + x, (0 * height) + y };//Bl

	int mouth1[] = { (-30 * width) + x, (-15 * height) + y };
	int mouth2[] = { (30 * width) + x , (-15 * height) + y };
	int mouth3[] = { (30 * width) + x , (-35 * height) + y };
	int mouth4[] = { (-30 * width) + x, (-35 * height) + y };

	int mouth5[] = { (-10 * width) + x, (-15 * height) + y };
	int mouth6[] = { (10 * width) + x,  (-15 * height) + y };
	int mouth7[] = { (10 * width) + x,  (-35 * height) + y };
	int mouth8[] = { (-10 * width) + x, (-35 * height) + y };


	GLubyte texture[] = {
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
					0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF,
	};

	//Head	
	glColor3f(0.5, 0.5, 0.5);
	glRectiv(headP1, headP3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(headP1);
	glVertex2iv(headP2);
	glVertex2iv(headP3);
	glVertex2iv(headP4);
	glVertex2iv(headP1);
	glEnd();

	//Neck
	glColor3f(0.5, 0.5, 0.5);
	glRectiv(neckP1, neckP3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(neckP1);
	glVertex2iv(neckP2);
	glVertex2iv(neckP3);
	glVertex2iv(neckP4);
	glVertex2iv(neckP1);
	glEnd();

	//neck texture
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(texture);
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_POLYGON);
	glVertex2iv(neckP1);
	glVertex2iv(neckP2);
	glVertex2iv(neckP3);
	glVertex2iv(neckP4);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);

	//Right
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2iv(rightP1);
	glVertex2iv(rightP2);
	glVertex2iv(rightP3);
	glVertex2iv(rightP4);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(rightP1);
	glVertex2iv(rightP2);
	glVertex2iv(rightP3);
	glVertex2iv(rightP4);
	glVertex2iv(rightP1);
	glEnd();

	//Left
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2iv(leftP1);
	glVertex2iv(leftP2);
	glVertex2iv(leftP3);
	glVertex2iv(leftP4);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(leftP1);
	glVertex2iv(leftP2);
	glVertex2iv(leftP3);
	glVertex2iv(leftP4);
	glVertex2iv(leftP1);
	glEnd();

	//body
	glColor3f(0.5, 0.5, 0.5);
	glRectiv(bodyP1, bodyP3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(bodyP1);
	glVertex2iv(bodyP2);
	glVertex2iv(bodyP3);
	glVertex2iv(bodyP4);
	glVertex2iv(bodyP1);
	glEnd();

	//right leg
	glColor3f(0.5, 0.5, 0.5);
	glRectiv(rLegP1, rLegP3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(rLegP1);
	glVertex2iv(rLegP2);
	glVertex2iv(rLegP3);
	glVertex2iv(rLegP4);
	glVertex2iv(rLegP1);
	glEnd();
	//RIGHT LEG TEXTURE
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(texture);
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_POLYGON);
	glVertex2iv(rLegP1);
	glVertex2iv(rLegP2);
	glVertex2iv(rLegP3);
	glVertex2iv(rLegP4);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);


	//left leg
	glColor3f(0.5, 0.5, 0.5);
	glRectiv(lLegP1, lLegP3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(lLegP1);
	glVertex2iv(lLegP2);
	glVertex2iv(lLegP3);
	glVertex2iv(lLegP4);
	glVertex2iv(lLegP1);
	glEnd();
	//LEFT LEG TEXTURE
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(texture);
	glColor3f(0.1, 0.1, 0.1);
	glBegin(GL_POLYGON);
	glVertex2iv(lLegP1);
	glVertex2iv(lLegP2);
	glVertex2iv(lLegP3);
	glVertex2iv(lLegP4);
	glVertex2iv(lLegP1);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);

	////right foot	
	//glColor3f(0.5, 0.5, 0.5);
	//glRectiv(rFootP1, rFootP3);
	//glColor3f(0.0, 0.0, 0.0);
	//glBegin(GL_LINE_STRIP);
	//	glVertex2iv(rFootP1);
	//	glVertex2iv(rFootP2);
	//	glVertex2iv(rFootP3);
	//	glVertex2iv(rFootP4);
	//	glVertex2iv(rFootP1);
	//glEnd();
	//
	////left foot	
	//glColor3f(0.5, 0.5, 0.5);
	//glRectiv(lFootP1, lFootP3);
	//glColor3f(0.0, 0.0, 0.0);
	//glBegin(GL_LINE_STRIP);
	//	glVertex2iv(lFootP1);
	//	glVertex2iv(lFootP2);
	//	glVertex2iv(lFootP3);
	//	glVertex2iv(lFootP4);
	//	glVertex2iv(lFootP1);
	//glEnd();

	//right eye
	glColor3f(0.53, 0.8, 0.92);
	glBegin(GL_POLYGON);
	glVertex2iv(rEyeP1);
	glVertex2iv(rEyeP2);
	glVertex2iv(rEyeP3);
	glVertex2iv(rEyeP4);
	glVertex2iv(rEyeP5);
	glVertex2iv(rEyeP6);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(rEyeP1);
	glVertex2iv(rEyeP2);
	glVertex2iv(rEyeP3);
	glVertex2iv(rEyeP4);
	glVertex2iv(rEyeP5);
	glVertex2iv(rEyeP6);
	glVertex2iv(rEyeP1);
	glEnd();

	//left eye
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2iv(lEyeP1);
	glVertex2iv(lEyeP2);
	glVertex2iv(lEyeP3);
	glVertex2iv(lEyeP4);
	glVertex2iv(lEyeP5);
	glVertex2iv(lEyeP6);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(lEyeP1);
	glVertex2iv(lEyeP2);
	glVertex2iv(lEyeP3);
	glVertex2iv(lEyeP4);
	glVertex2iv(lEyeP5);
	glVertex2iv(lEyeP6);
	glVertex2iv(lEyeP1);
	glEnd();

	//mouth
	glColor3f(0.8, 0.8, 0.8);
	glRectiv(mouth1, mouth3);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2iv(mouth1);
	glVertex2iv(mouth2);
	glVertex2iv(mouth3);
	glVertex2iv(mouth4);
	glVertex2iv(mouth1);
	glVertex2iv(mouth5);
	glVertex2iv(mouth8);
	glVertex2iv(mouth7);
	glVertex2iv(mouth6);
	glEnd();
}
void fairy(int x, int y, float body[], float body2[], float wing[], float tex[]) {
	int wingP1[] = { -15 + x, 0 + y };
	int wingP2[] = { 0 + x, 7 + y };
	int wingP3[] = { 15 + x, 0 + y };
	int wingP4[] = { 0 + x, -7 + y };

	int wing2P1[] = { -53 + x, 0 + y };
	int wing2P2[] = { -40 + x, 7 + y };
	int wing2P3[] = { -27 + x, 0 + y };
	int wing2P4[] = { -40 + x, -7 + y };

	int bodyP1[] = { -25 + x, 10 + y };//Tl
	int bodyP2[] = { -15 + x, 10 + y };//Tr
	int bodyP3[] = { -10 + x, 0 + y };//Mr
	int bodyP4[] = { -15 + x, -10 + y };//Br
	int bodyP5[] = { -25 + x, -10 + y };//Bl
	int bodyP6[] = { -30 + x, 0 + y };//Bl

	GLubyte moon[] = { 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00,
					0x00, 0x03, 0xc2, 0x1c, 0x00, 0x00,
					0x02, 0x40, 0x30, 0x43, 0x00, 0xc0,
					0x08, 0x08, 0x44, 0x49, 0x20, 0x90,
					0x08, 0x08, 0x53, 0x54, 0xc8, 0x28,
					0x08, 0x08, 0x54, 0x54, 0x28, 0x28,
					0x08, 0x08, 0x53, 0x49, 0xc8, 0x90,
					0x04, 0x02, 0x44, 0x33, 0x20, 0xc0,
					0x03, 0x00, 0x18, 0xc4, 0x00, 0x00,
					0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
	};

	//Tatl
	glColor3fv(wing);
	glBegin(GL_POLYGON);
	glVertex2iv(wingP1);
	glVertex2iv(wingP2);
	glVertex2iv(wingP3);
	glVertex2iv(wingP4);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2iv(wing2P1);
	glVertex2iv(wing2P2);
	glVertex2iv(wing2P3);
	glVertex2iv(wing2P4);
	glEnd();

	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(moon);
	glBegin(GL_POLYGON);
	glColor3fv(tex);
	glVertex2iv(wingP1);
	glVertex2iv(wingP2);
	glVertex2iv(wingP3);
	glVertex2iv(wingP4);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3fv(tex);
	glVertex2iv(wing2P1);
	glVertex2iv(wing2P2);
	glVertex2iv(wing2P3);
	glVertex2iv(wing2P4);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);

	glColor3fv(body);
	glBegin(GL_POLYGON);
	glVertex2iv(bodyP1);
	glVertex2iv(bodyP2);
	glColor3fv(body2);
	glVertex2iv(bodyP3);
	glVertex2iv(bodyP4);
	glVertex2iv(bodyP5);
	glVertex2iv(bodyP6);
	glEnd();
	glFlush();
}

void myMenu(int id) {
	if (id == 1) exit(0);

}

void myMouse(int button, int state, int x, int y) {

	srand(time(0));
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		float color1[3] = { ((float)rand() / (RAND_MAX)), ((float)rand() / (RAND_MAX)), ((float)rand() / (RAND_MAX)) };
		float color2[3] = { ((float)rand() / (RAND_MAX)), ((float)rand() / (RAND_MAX)), ((float)rand() / (RAND_MAX)) };
		float color3[3] = { ((float)rand() / (RAND_MAX)), ((float)rand() / (RAND_MAX)), ((float)rand() / (RAND_MAX)) };
		float color4[3] = { ((float)rand() / (RAND_MAX)), ((float)rand() / (RAND_MAX)), ((float)rand() / (RAND_MAX)) };
		cout << x << ", " << 480 - y << endl;
		fairy(x,  480 - y, color1, color2, color3, color4);
	}
}

void display() {
	
	glutMouseFunc(myMouse);

	glutCreateMenu(myMenu);
	glutAddMenuEntry("quit", 1);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	
	float body[] = { 1.0, 1.0, 0.75 };
	float body2[] = { 0.96, 0.92, 0.3 };
	float tex[] = { 0.82, 0.87, 1.0 };
	float wing[] = { 0.53, 0.8, 0.92 };
	GLubyte fly[] = {
	   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	   0x03, 0x80, 0x01, 0xC0, 0x06, 0xC0, 0x03, 0x60,
	   0x04, 0x60, 0x06, 0x20, 0x04, 0x30, 0x0C, 0x20,
	   0x04, 0x18, 0x18, 0x20, 0x04, 0x0C, 0x30, 0x20,
	   0x04, 0x06, 0x60, 0x20, 0x44, 0x03, 0xC0, 0x22,
	   0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
	   0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
	   0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
	   0x66, 0x01, 0x80, 0x66, 0x33, 0x01, 0x80, 0xCC,
	   0x19, 0x81, 0x81, 0x98, 0x0C, 0xC1, 0x83, 0x30,
	   0x07, 0xe1, 0x87, 0xe0, 0x03, 0x3f, 0xfc, 0xc0,
	   0x03, 0x31, 0x8c, 0xc0, 0x03, 0x33, 0xcc, 0xc0,
	   0x06, 0x64, 0x26, 0x60, 0x0c, 0xcc, 0x33, 0x30,
	   0x18, 0xcc, 0x33, 0x18, 0x10, 0xc4, 0x23, 0x08,
	   0x10, 0x63, 0xC6, 0x08, 0x10, 0x30, 0x0c, 0x08,
	   0x10, 0x18, 0x18, 0x08, 0x10, 0x00, 0x00, 0x08 };
	GLubyte moon[] = { 0x00, 0x00, 0x00,0x00, 0x00, 0x00,
						0x00, 0x00, 0x00, 0x7c, 0x00, 0x00,
						0x00, 0x03, 0xc2, 0x1c, 0x00, 0x00,
						0x02, 0x40, 0x30, 0x43, 0x00, 0xc0,
						0x08, 0x08, 0x44, 0x49, 0x20, 0x90,
						0x08, 0x08, 0x53, 0x54, 0xc8, 0x28,
						0x08, 0x08, 0x54, 0x54, 0x28, 0x28,
						0x08, 0x08, 0x53, 0x49, 0xc8, 0x90,
						0x04, 0x02, 0x44, 0x33, 0x20, 0xc0,
						0x03, 0x00, 0x18, 0xc4, 0x00, 0x00,
						0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
						0x00, 0x00, 0x00,0x00, 0x00, 0x00,
	};


	fairy(100, 200, body, body2, wing, tex);
	body[0] = {0.34}; body[1] = {0.12}; body[2] = {0.46};
	body2[0] = {0.74}; body2[1] = {0.23}; body2[2] = {0.27};
	tex[0] = { 0.80 }; tex[1] = { 0.68 }; tex[2] = { 0.71 };
	fairy(300, 300, body, body2, wing, tex);
	
	
	//Dad robot
	robot(400, 300, 1, 1);


	//stashe
	int w = 5;
	int h = 5;
	int x = 355, y = 230;
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
		glVertex2i((9 * w) + x,(11 * h) + y);
		glVertex2i((8 * w) + x,(12 * h) + y);
		glVertex2i((6 * w) + x,(12 * h) + y);	
		glVertex2i((5 * w) + x,(11 * h) + y);
		glVertex2i((4 * w) + x,(11 * h) + y);
		glVertex2i((2 * w) + x,(12 * h) + y);
		glVertex2i((2 * w) + x,(11 * h) + y);
		glVertex2i((3 * w) + x,(10 * h) + y);
		glVertex2i((5 * w) + x,(9 * h) + y);
		glVertex2i((8 * w) + x,(9 * h) + y);
		glVertex2i((9 * w) + x,(10 * h) + y);
		glVertex2i((10 * w) + x,(9 * h) + y);
		glVertex2i((13 * w) + x,(9 * h) + y);
		glVertex2i((15 * w) + x, (10 * h) + y);
		glVertex2i((16 * w) + x,(11 * h) + y);
		glVertex2i((16 * w) + x,(12 * h) + y);
		glVertex2i((14 * w) + x,(11 * h) + y);
		glVertex2i((13 * w) + x,(11 * h) + y);
		glVertex2i((12 * w) + x,(12 * h) + y);
		glVertex2i((10 * w) + x,(12 * h) + y);
	glEnd();
	
	//kid robot
	Krobot(290, 200, .5, .5);
	

	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
		glVertex2i(265,219);
		glVertex2i(277,232);
		glVertex2i(298,232);
		glVertex2i(315,219);
	glEnd();
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(fly);
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
		glVertex2i(265, 219);
		glVertex2i(277, 232);
		glVertex2i(298, 232);
		glVertex2i(315, 219);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
		glVertex2i(265, 219);
		glVertex2i(277, 232);
		glVertex2i(298, 232);
		glVertex2i(315, 219);
		glVertex2i(265, 219);
	glEnd();



	//Mom robot
	robot(180, 300, 1, 1);

	//bow
	x = 80; y = 0;
	glColor3f(1.0, 0.04, 0.7);
	glBegin(GL_TRIANGLES);
		glVertex2i(138 + x, 340 + y);
		glVertex2i(107 + x, 339 + y);
		glVertex2i(118 + x, 371 + y);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2i(138 + x, 340 + y);
		glVertex2i(154 + x, 316 + y);
		glVertex2i(177 + x, 338 + y);
	glEnd();
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(moon);
	glColor3f(0.5, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
		glVertex2i(138 + x, 340 + y);
		glVertex2i(107 + x, 339 + y);
		glVertex2i(118 + x, 371 + y);
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2i(138 + x, 340 + y);
	glVertex2i(154 + x, 316 + y);
	glVertex2i(177 + x, 338 + y);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(138 + x, 340 + y);
	glVertex2i(107 + x, 339 + y);
	glVertex2i(118 + x, 371 + y);
	glVertex2i(138 + x, 340 + y);
	glVertex2i(154 + x, 316 + y);
	glVertex2i(177 + x, 338 + y);
	glVertex2i(138 + x, 340 + y);
	glEnd();
	//square for bow
	glColor3f(1.0, 0.04, 0.7);
	glBegin(GL_POLYGON);
		glVertex2i(215,353);
		glVertex2i(206,337);
		glVertex2i(223,328);
		glVertex2i(236,343);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
		glVertex2i(215, 353);
		glVertex2i(206, 337);
		glVertex2i(223, 328);
		glVertex2i(236, 343);
		glVertex2i(215, 353);
	glEnd();

	//skirt
	glColor3f(1.0, 0.04, 0.7);
	glBegin(GL_POLYGON);
		glVertex2i(139, 158);
		glVertex2i(122, 125);
		glVertex2i(236, 125);
		glVertex2i(220, 158);
	glEnd();

	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(moon);
	glColor3f(0.5, 0.0, 0.0);
	glBegin(GL_POLYGON);
		glVertex2i(139, 158);
		glVertex2i(122, 125);
		glVertex2i(236, 125);
		glVertex2i(220, 158);
	glEnd();
	glDisable(GL_POLYGON_STIPPLE);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
		glVertex2i(139, 158);
		glVertex2i(122, 125);
		glVertex2i(236, 125);
		glVertex2i(220, 158);
		glVertex2i(139, 158);
	glEnd();

	glFlush();
}


void main(int argc, char** argv)
{
	glutInit(&argc, argv); //initialize GLut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(400, 100); //should be center
	glutInitWindowSize(640, 480); //set window width and height
	glutCreateWindow("Basics"); //Title
	myInit();

	//UNCOMMENT THIS TO SEE BASIC DRAWING
	glutDisplayFunc(basicDrawing);

	//UNCOMMENT THIS TO SEE CREATIVE DRAWING
	//glutDisplayFunc(display);
	
	
	glutMainLoop();

}