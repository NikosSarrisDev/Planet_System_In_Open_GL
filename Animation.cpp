#include <gl/glut.h> 
#include <stdio.h>
#include <math.h>
#define GLUT_DISABLE_ATEXIT_HACK
#define PI 3.14159 
#define ellipsePoints 256 
#define circlePoints 64
#define SunPoints 256

GLuint x11=10; 
GLuint y11=10; 
GLuint x22=x11+100; 
GLuint y22=y11+100; 

GLfloat xel1[ellipsePoints]; 
GLfloat yel1[ellipsePoints]; 
GLfloat xel2[ellipsePoints]; 
GLfloat yel2[ellipsePoints];
GLfloat xel3[ellipsePoints]; 
GLfloat yel3[ellipsePoints];
GLfloat xel4[ellipsePoints]; 
GLfloat yel4[ellipsePoints];
GLfloat xel5[ellipsePoints]; 
GLfloat yel5[ellipsePoints];


int t = 0,t2=0,t3=0,t4=0;

int t5 = 255;

void Sun(GLuint xc,GLuint yc, int r){
	
	glBegin(GL_POLYGON);
	
int i;
	GLfloat angleStep=2*PI/(float)SunPoints; 
	GLuint pointsPerQuarter=SunPoints;///4; 
	GLfloat xcy[SunPoints]; 
	GLfloat ycy[SunPoints];
	GLfloat rx=r; 
	GLfloat ry=rx; 

	glColor3f(1,1,0); 
	glLineWidth(3); 
	glBegin(GL_LINE_LOOP); 
		for(i=0;i<pointsPerQuarter;i++) 
		{ 
			xcy[i]=xc + rx*cos(i*angleStep); 
			ycy[i]=yc + ry*sin(i*angleStep); 
		} 

		for(i=0;i<SunPoints;i++) 
		{ 
			glVertex2f(xcy[i],ycy[i]); 
		} 
	glEnd(); 
	glFlush(); 
	
}



void circle(GLuint xc,GLuint yc, int r) 
{ 
int i;
	GLfloat angleStep=2*PI/(float)ellipsePoints; 
	GLuint pointsPerQuarter=ellipsePoints;///4; 
	GLfloat xcy[ellipsePoints]; 
	GLfloat ycy[ellipsePoints];
	GLfloat rx=r; 
	GLfloat ry=rx; 

	glColor3f(1,0,1); 
	glLineWidth(3); 
	glBegin(GL_LINE_LOOP); 
		for(i=0;i<pointsPerQuarter;i++) 
		{ 
			xcy[i]=xc + rx*cos(i*angleStep); 
			ycy[i]=yc + ry*sin(i*angleStep); 
		} 

		for(i=0;i<ellipsePoints;i++) 
		{ 
			glVertex2f(xcy[i],ycy[i]); 
		} 
	glEnd(); 
	glFlush(); 
} 


void ellipse1(GLuint xe,GLuint ye) 
{ 
int i;
	GLfloat angleStep=2*PI/(float)ellipsePoints; 
	GLuint pointsPerQuarter=ellipsePoints;///4; 

	GLfloat rx=80; 
	GLfloat ry=60;  
	glColor3f(1,1,0); 
	glLineWidth(3); 
	glBegin(GL_LINE_LOOP); 
		for(i=0;i<pointsPerQuarter;i++) 
		{ 
			xel1[i]=xe + rx*cos(i*angleStep); 
			yel1[i]=ye + ry*sin(i*angleStep); 
		} 

		for(i=0;i<ellipsePoints;i++) 
		{ 
			glVertex2f(xel1[i],yel1[i]); 
		} 
	glEnd(); 
	glFlush(); 
} 
void ellipse2(GLuint xe,GLuint ye) 
{ 
int i;
	GLfloat angleStep=2*PI/(float)ellipsePoints; 
	GLuint pointsPerQuarter=ellipsePoints;///4; 

	GLfloat rx=120; 
	GLfloat ry=100;  
	glColor3f(0,1,0); 
	glLineWidth(2); 
	glBegin(GL_LINE_LOOP); 
		for(i=0;i<pointsPerQuarter;i++) 
		{ 
			xel2[i]=xe + rx*cos(i*angleStep); 
			yel2[i]=ye + ry*sin(i*angleStep); 
		} 

		for(i=0;i<ellipsePoints;i++) 
		{ 
			glVertex2f(xel2[i],yel2[i]); 
		} 
	glEnd(); 
	glFlush(); 
} 

void ellipse3(GLuint xe,GLuint ye){
	
	int i;
	GLfloat angleStep=2*PI/(float)ellipsePoints; 
	GLuint pointsPerQuarter=ellipsePoints;///4; 

	GLfloat rx=140; 
	GLfloat ry=120;  
	glColor3f(0,0,1); 
	glLineWidth(2); 
	glBegin(GL_LINE_LOOP); 
		for(i=0;i<pointsPerQuarter;i++) 
		{ 
			xel3[i]=xe + rx*cos(i*angleStep); 
			yel3[i]=ye + ry*sin(i*angleStep); 
		} 

		for(i=0;i<ellipsePoints;i++) 
		{ 
			glVertex2f(xel3[i],yel3[i]); 
		} 
	glEnd(); 
	glFlush(); 
}
void ellipse4(GLuint xe,GLuint ye){
	
	int i;
	GLfloat angleStep=2*PI/(float)ellipsePoints; 
	GLuint pointsPerQuarter=ellipsePoints;///4; 

	GLfloat rx=190; 
	GLfloat ry=140;  
	glColor3f(1,0,0); 
	glLineWidth(3); 
	glBegin(GL_LINE_LOOP); 
		for(i=0;i<pointsPerQuarter;i++) 
		{ 
			xel4[i]=xe + rx*cos(i*angleStep); 
			yel4[i]=ye + ry*sin(i*angleStep); 
		} 

		for(i=0;i<ellipsePoints;i++) 
		{ 
			glVertex2f(xel4[i],yel4[i]); 
		} 
	glEnd(); 
	glFlush(); 
}

void ellipse5(GLuint xe,GLuint ye){
	
	int i;
	GLfloat angleStep=2*PI/(float)ellipsePoints; 
	GLuint pointsPerQuarter=ellipsePoints; 

	GLfloat rx=210; 
	GLfloat ry=160;  
	glColor3f(1,0,1); 
	glLineWidth(2); 
	glBegin(GL_LINE_LOOP); 
		for(i=0;i<pointsPerQuarter;i++) 
		{ 
			xel5[i]=xe + rx*cos(i*angleStep); 
			yel5[i]=ye + ry*sin(i*angleStep); 
		} 

		for(i=0;i<ellipsePoints;i++) 
		{ 
			glVertex2f(xel5[i],yel5[i]); 
		} 
	glEnd(); 
	glFlush(); 
}

void display() 
{ 
	glClearColor(0,0,0,0); 
	glClear(GL_COLOR_BUFFER_BIT); 
	glColor3f(1,0,0); 
	
	Sun(320,320,40);
	
	ellipse1(320,320);
	ellipse2(320,320);
	ellipse3(320,320);
	ellipse4(320,320);
	ellipse5(320,320);
	circle(xel1[t],yel1[t],20);
	circle(xel2[t2],yel2[t2],20);
	circle(xel3[t3],yel3[t3], 10);
	circle(xel4[t4],yel4[t4], 5);
	circle(xel5[t5],yel5[t5],15);
	
	
	glFlush(); 
} 
void timerFunction(int value) 
{ 
	printf("Timer event detected.\nValuePassed: %d\n",value); 
 	if(t<255 - 5)
 		t+=5;
 	else
 		t=0;
 	if(t2<255 - 10)
 		t2+=10;
	else
		t2=0;
		
	if(t3< 255 - 15)
		t3 +=15;
	else
		t3=0;
	if(t4<255-10)
		t4+=10;
	else
		t4 = 0;
		
	if(t5 > 7)
		t5 -= 7;
	else
		t5 = 255;
	
				 	
	glutTimerFunc(200,timerFunction,10);  
	glutPostRedisplay(); 
} 
int main(int argc, char** argv) 
{ 
	glutInit(&argc,argv); 
	glutInitWindowPosition(50,50); 
	glutInitWindowSize(640,480); 
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); 
	glutCreateWindow("Timer event"); 
	glMatrixMode(GL_PROJECTION); 
	gluOrtho2D(0,640,0,480); 
	glutDisplayFunc(display);  
	glutTimerFunc(200,timerFunction,10); 
	glutMainLoop(); 
	return 0; 
}


