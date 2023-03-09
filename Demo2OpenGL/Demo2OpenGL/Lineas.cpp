#include <gl/glut.h>
int main(int argc, char** argv) {
	glutInit(&argc, argv); //inicializa OpenGL
	glutInitWindowSize(800, 600); //Tama?o de pantalla
	glutInitWindowPosition(100, 100);//Posicion de inicio de pantalla
	glutCreateWindow("Demo 2");//Titulo de pantalla
	glutDisplayFunc(dibujarLinea);
	Iniciar();
	glutMainLoop();
	return 0;
}