//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************											******//
//*************											******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glC lear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	
	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3i(4, 0, 0);
	glVertex3i(14, 0, 0);
	glEnd();

	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3i(3, -1, 0);
	glVertex3i(15, -1, 0);
	glEnd();

	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3i(2, -2, 0);
	glVertex3i(16, -2, 0);
	glEnd();

	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3i(2, -3, 0);
	glVertex3i(16, -3, 0);
	glEnd();

	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3i(2, -4, 0);
	glVertex3i(16, -4, 0);
	glEnd();

	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3i(2, -5, 0);
	glVertex3i(16, -5, 0);
	glEnd();

	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(1.0, 5.0, 1.0);
	glVertex3i(1, -6, 0);
	glVertex3i(17, -6, 0);
	glEnd();

	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3i(1, -7, 0);
	glVertex3i(17, -7, 0);
	glEnd();

	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(1.0, .0, 0.0);
	glVertex3i(2, -8, 0);
	glVertex3i(5, -8, 0);
	glEnd();

	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(1.0, .0, 0.0);
	glVertex3i(7, -8, 0);
	glVertex3i(10, -8, 0);
	glEnd();

	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(1.0, .0, 0.0);
	glVertex3i(12, -8, 0);
	glVertex3i(15, -8, 0);
	glEnd();
	glFlush();

	glBegin(GL_LINES);
	glPointSize(50.0f);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3i(1, -9, 0);
	glVertex3i(17, -9, 0);
	glEnd();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-10,10,-10,10,0.1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

