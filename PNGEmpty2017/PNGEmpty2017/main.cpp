#include <iostream>
#include "GL/freeglut.h"
#include <string>
#include "Sprite.h"

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

bool HasClickW = FALSE;
bool HasClickA = FALSE;
bool HasClickS = FALSE;
bool HasClickD = FALSE;

bool isdiceone = TRUE;
bool isdicethree = FALSE;
bool isdicefour = FALSE;
bool isdicesix = FALSE;

int Dice =1;

void initRendering() {
	glEnable(GL_DEPTH_TEST);                    // test 3D depth
	glEnable(GL_BLEND); 
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);


}

void Drawdice(){
	glTranslatef(400, 400, 0);

	//1
	if (isdiceone) {
		if ((Dice == 2 && HasClickS) || (Dice == 5 && HasClickW)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 1;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//2
		if ((Dice == 1 && HasClickW) || (Dice == 6 && HasClickS)) {

			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 2;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//3
		if ((Dice == 1 && HasClickA) || (Dice == 2 && HasClickA) || (Dice == 6 && HasClickA) || (Dice == 5 && HasClickA)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 3;

			isdiceone = FALSE;
			isdicethree = TRUE;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//4
		if ((Dice == 1 && HasClickD) || (Dice == 2 && HasClickD) || (Dice == 6 && HasClickD) || (Dice == 5 && HasClickD)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 4;
			isdiceone = FALSE;
			isdicefour = TRUE;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//5
		if ((Dice == 1 && HasClickS) || (Dice == 6 && HasClickW)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 5;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//6
		if ((Dice == 2 && HasClickW) || (Dice == 5 && HasClickS)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 6;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}
	}

	if (isdicethree) {
		if ((Dice == 3 && HasClickD) || (Dice == 2 && HasClickD)|| (Dice == 4 && HasClickD)|| (Dice == 5 && HasClickD)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 1;
			isdicethree = FALSE;
			isdiceone = TRUE;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//2
		if ((Dice == 3 && HasClickW) || (Dice == 4 && HasClickS)) {

			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 2;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//3
		if ((Dice == 5 && HasClickW) || (Dice == 2 && HasClickS)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 3;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//4
		if ((Dice == 2 && HasClickW) || (Dice == 5 && HasClickS)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 4;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//5
		if ((Dice == 3 && HasClickS) || (Dice == 4 && HasClickW)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 5;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//6
		if ((Dice == 3 && HasClickA) || (Dice == 2 && HasClickA) || (Dice == 5 && HasClickA) || (Dice == 4 && HasClickA)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 6;
			isdicethree = FALSE;
			isdicesix = TRUE;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}
	}

	if (isdicefour) {
		if ((Dice == 4 && HasClickA) || (Dice == 2 && HasClickA)|| (Dice == 3 && HasClickA)|| (Dice == 5 && HasClickA)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 1;
			isdicefour = FALSE;
			isdiceone = TRUE;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//2
		if ((Dice == 4 && HasClickW) || (Dice == 3 && HasClickS)) {

			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 2;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//3
		if ((Dice == 2 && HasClickW) || (Dice == 5 && HasClickS)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 3;
			isdicesix = FALSE;
			isdicethree = TRUE;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//4
		if ((Dice == 5 && HasClickW) || (Dice == 2 && HasClickS)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 4;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//5
		if ((Dice == 3 && HasClickW) || (Dice == 4 && HasClickS)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 5;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//6
		if ((Dice == 4 && HasClickD) || (Dice == 2 && HasClickD)|| (Dice == 3 && HasClickD)|| (Dice == 5 && HasClickD)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 6;
			isdicefour = FALSE;
			isdicesix = TRUE;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}
	}

	if (isdicesix) {
		if ((Dice == 2 && HasClickW) || (Dice == 5 && HasClickS)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 1;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//2
		if ((Dice == 6 && HasClickW) || (Dice == 1 && HasClickS)) {

			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 2;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//3
		if ((Dice == 6 && HasClickD) || (Dice == 2 && HasClickD) || (Dice == 1 && HasClickD) || (Dice == 5 && HasClickD)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 3;
			isdicesix = FALSE;
			isdicethree = TRUE;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//4
		if ((Dice == 6 && HasClickA) || (Dice == 2 && HasClickA) || (Dice == 1 && HasClickA) || (Dice == 5 && HasClickA)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 4;
			isdicesix = FALSE;
			isdicefour = TRUE;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//5
		if ((Dice == 6 && HasClickS) || (Dice == 1 && HasClickW)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 60);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 60);

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 5;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}

		//6
		if ((Dice == 2 && HasClickS) || (Dice == 5 && HasClickW)) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) + 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) - 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f) + 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f) - 65);

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) - 60, 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f) + 60, 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();

			Dice = 6;

			if (HasClickW || HasClickA || HasClickS || HasClickD) {
				HasClickW = FALSE;
				HasClickA = FALSE;
				HasClickS = FALSE;
				HasClickD = FALSE;
			}
		}
	}
}

void cameraSetup(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);                // select projection matrix
	glLoadIdentity();                           // reset projection matrix
												//gluPerspective(45.0, 1, 1.0, 100.0);        // set up a perspective projection matrix
	gluOrtho2D(0, w, 0, h);
}

void display() {
	glClearColor(0.5, 0.5, 0.5, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // clear Screen and Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	Drawdice();
		if (Dice == 1) {
			glBegin(GL_POLYGON);
			glColor3f(0, 0, 0);
			for (int i = 0; i < 360; i += 3) {
				glVertex2f(30 * cos(i * M_PI / 180.0f), 30 * sin(i*M_PI / 180.0f));

			}
			glEnd();
			glBegin(GL_POLYGON);
			glColor3f(1, 1, 1);
			glVertex2f(-100, -100);
			glVertex2f(-100, 100);
			glVertex2f(100, 100);
			glVertex2f(100, -100);
			glEnd();
		}
	glutSwapBuffers();
}

void KeyDown(unsigned char key, int mouse_x, int mouse_y) {
	if (key == 'w') {
		HasClickW = TRUE;
	}
	if (key == 'a') {
		HasClickA = TRUE;
	}
	if (key == 's') {
		HasClickS = TRUE;
	}
	if (key == 'd') {
		HasClickD = TRUE;
	}

}

void Update(int value) {
	glutPostRedisplay();
	glutTimerFunc(500, Update, 0);
}

int main(int argc, char **argv) {
	std::cout << "Programmer: <your name>\n";
	std::cout << "Compiled on " << __DATE__ << ", " << __TIME__ << std::endl << std::endl;

	// init GLUT and create Window
	glutInit(&argc, argv);                      // GLUT initialization
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(800, 800);               // set the window size

	// create the window
	glutCreateWindow("Introduction to OpenGL");
	initRendering();                            // initialize rendering

	// register handler functions
	glutReshapeFunc(cameraSetup);               // resiz window and camera setup
	glutDisplayFunc(display);                   // Display function
	glutTimerFunc(500, Update, 0);

	glutKeyboardFunc(KeyDown); 

	glutMainLoop();                             // run GLUT mainloop
	return(0);                                  // this line is never reached
}
