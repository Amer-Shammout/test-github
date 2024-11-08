#include <GL/glut.h>  

// œ«·… ·—”„ «·”Ì«—…  
void drawCar() {
    // Ã”„ «·”Ì«—…  
    glColor3f(0.0, 0.0, 1.0); // ·Ê‰ √“—ﬁ  
    glBegin(GL_QUADS);
    glVertex2f(-0.5, 0.0);
    glVertex2f(0.5, 0.0);
    glVertex2f(0.4, 0.3);
    glVertex2f(-0.4, 0.3);
    glEnd();

    // “Ã«Ã «·”Ì«—…  
    glColor3f(0.5, 0.5, 0.5); // ·Ê‰ —„«œÌ  
    glBegin(GL_QUADS);
    glVertex2f(-0.4, 0.3);
    glVertex2f(0.4, 0.3);
    glVertex2f(0.3, 0.6);
    glVertex2f(-0.3, 0.6);
    glEnd();

    // «·⁄Ã·«   
    glColor3f(0.0, 0.0, 0.0); // ·Ê‰ √”Êœ  
    glBegin(GL_QUADS); // ⁄Ã·… √„«„Ì…  
    glVertex2f(-0.4, -0.1);
    glVertex2f(-0.3, -0.1);
    glVertex2f(-0.3, 0.0);
    glVertex2f(-0.4, 0.0);
    glEnd();

    glBegin(GL_QUADS); // ⁄Ã·… Œ·›Ì…  
    glVertex2f(0.3, -0.1);
    glVertex2f(0.4, -0.1);
    glVertex2f(0.4, 0.0);
    glVertex2f(0.3, 0.0);
    glEnd();
}

// œ«·… «·⁄—÷  
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawCar();
    glFlush();
}

// œ«·… ·≈⁄œ«œ «·»Ì∆…  
void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // ·Ê‰ «·Œ·›Ì… √»Ì÷  
    glColor3f(0.0, 0.0, 0.0); // ·Ê‰ «·”ﬂ … «·ﬁ·»Ì…  
    glPointSize(5.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Car");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}