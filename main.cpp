// Menu.c - Isabel H. Manssour
// Um programa OpenGL simples que exemplifica
// como exibir textos e utilizar menus e funções
// callback para verificar a movimentação do
// mouse na janela GLUT.
// Este código está baseado nos exemplos
// disponíveis no livro "OpenGL SuperBible",
// 2nd Edition, de Richard S. e Wright Jr.

#include <GL/glut.h>
#include <string.h>
#include <stdio.h>

// Constantes
#define CARACTERISTICAS 1
#define ALFA 2
#define DELTA 3

#define BRASIL 4
#define BAHIA 5
#define MUNDO 6

// Variáveis
char texto[30];
GLfloat win, r, g, b, fAspect;
GLint view_w, view_h, dados;


void DesenhaTexto(char *string, int x, int y)
{
  	glPushMatrix();
        // Posição no universo onde o texto será colocado
        glRasterPos2f(x, y);
        // Exibe caracter a caracter
        while(*string)
             glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,*string++);
	glPopMatrix();
}

// Função que desenha um CARACTERISTICAS
void DesenhaCARACTERISTICAS(void)
{
     glBegin(GL_POLYGON);
        glVertex2f(0, 0);
        glVertex2f(10, 0);
        glVertex2f(0, 10);
        glVertex2f(10, 10);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    DesenhaTexto("Coronavirus (COVID-19): doenca infecciosa causada pelo virus SARS-CoV-2.", -145, -50);
    DesenhaTexto("A maioria das pessoas que adoece em decorrencia da COVID-19 apresenta sintomas leves a moderados e se recupera sem tratamento especial. ", -145, -57);
    DesenhaTexto("No entanto, algumas desenvolvem um quadro grave e precisam de atendimento médico. No Brasil, o indice de pessoas infectadas corresponde a", -145, -64);
    DesenhaTexto("cerca de 10%, e destes, 0,3% foram a obito -- mais de 600 mil mortes no total, figurando entre os paises que mais tiveram mortes em numeros ", -145, -71);
    DesenhaTexto("absolutos e proporcionais.", -145, -78);

}

// Função que desenha um CARACTERISTICAS
void DesenhaALFA(void)
{
     glBegin(GL_POLYGON);
        glVertex2f(0, 0);
        glVertex2f(10, 0);
        glVertex2f(0, 10);
        glVertex2f(10, 10);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    DesenhaTexto("A primeira variante de preocupação, anteriormente chamada de B.1.1.7. Surgiu no Reino Unido em setembro de 2020. Mutacoes: Sao 22 ao todo, entre as ", -145, -50);
    DesenhaTexto("que alteram ou nao a estrutura do virus. As principais estao na espicula, membrana que recobre o virus. Transmissibilidade: de 30\% a 50% maior que a", -145, -57);
    DesenhaTexto("anterior. Tem maior risco de hospitalizacao e maior mortalidade. Foi responsavel pela segunda onda que atacou o Reino Unido e parte da Europa. Chegou ", -145, -64);
    DesenhaTexto("tambem aos EUA, mas não com tanta forca ao Brasil. Resposta as Vacinas: responde normalmente as existentes. Pode ser verificado pelo resposta imune ", -145, -71);
    DesenhaTexto("em testes e o avanco da vacinacao dos paises atingidos por ela.", -145, -78);

}

// Função que desenha um CARACTERISTICAS
void DesenhaDELTA(void)
{
     glBegin(GL_POLYGON);
        glVertex2f(0, 0);
        glVertex2f(10, 0);
        glVertex2f(0, 10);
        glVertex2f(10, 10);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    DesenhaTexto("Detectada em outubro de 2020 na India, foi rotulada como variante de preocupação recentemente, em maio. Parece ser a mais contagiosa ate agora.", -145, -50);
    DesenhaTexto("Estima-se que ela seja entre 40 e 60% mais transmissivel do que a Alfa, tanto que acabou provocando surtos onde esta ja era predominante, como ", -145, -57);
    DesenhaTexto("o Reino Unido. No Brasil, teve início de alto contagio nos estados do Parana e Maranhao e posteriormente no Rio de Janeiro, mas nao progrediu tao", -145, -64);
    DesenhaTexto("gravemente como em outras regioes do mundo. Apesar disso, ha registro em todas regiões do pais, inclusive no Vale do Sao Francisco.", -145, -71);
}


// Função que desenha um BRASIL
void DesenhaBRASIL(void)
{
    /*
     glBegin(GL_QUADS);
               glVertex2f(-25.0f, -25.0f);
               glVertex2f(-25.0f, 25.0f);
               glVertex2f(25.0f, 25.0f);
               glVertex2f(25.0f, -25.0f);
     glEnd();
     */

     glutWireSphere(20.0, 100.0, 100.0);

    glColor3f(0.0f,0.0f,0.0f);
    DesenhaTexto("BRASIL", -145, -50);
    DesenhaTexto("Total de Casos: 21,7 mi (10% da populacao)", -145, -57);
    DesenhaTexto("Mortes: 604 mil (0,03% da populacao e 0,3% dos infectados)", -145, -64);
    DesenhaTexto("Vacinacao: 100,4 mi (50% da populacao)", -145, -71);
    DesenhaTexto("Dados de 20/Out/2021", -145, -120);
    DesenhaTexto("Fonte: Google.com, Wikipedia.com, Our World In Data", -145, -127);
}

// Função que desenha um triângulo
void DesenhaBAHIA(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    // Aplica uma translação
    glTranslatef(35.0f, 0.0f, 0.0f);
    // Aplica uma rotação ao redor do eixo x
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    // Altera a cor do desenho para cinza
    glColor3f(0.0f, 0.0f, 0.0f);
    // Função da GLUT para fazer o desenho de um "torus"
    //glutWireTorus(7.0, 14.0, 20, 40);
    glutWireSphere(20.0, 100.0, 100.0);
    //void glutWireTorus(GLdouble innerRadius, GLdouble outerRadius, Glint nsides, Glint rings)
    // Restaura a matriz de transformação corrente da pilha
    glPopMatrix();

    // Executa os comandos OpenGL
    glFlush();
}

// Desenha um texto na janela GLUT


// Função que desenha um MUNDO
void DesenhaMUNDO(void)
{
     glBegin(GL_POLYGON);
               glVertex2f(-25.0f, 0.0f);
               glVertex2f(0.0f, 25.0f);
               glVertex2f(25.0f, 0.0f);
               glVertex2f(0.0f, -25.0f);
     glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    DesenhaTexto("TESTANDO", 0, 0);
}

// Função callback chamada para fazer o desenho
void Desenha(void)
{
     glMatrixMode(GL_MODELVIEW);
     glLoadIdentity();

     glClear(GL_COLOR_BUFFER_BIT);

     // Define a cor corrente
     glColor3f(r,g,b);

     // Desenha uma dados
     switch (dados) {
            case CARACTERISTICAS:  DesenhaCARACTERISTICAS();
                            break;
            case ALFA:  DesenhaALFA();
                            break;
            case DELTA:  DesenhaDELTA();
                            break;
            case BRASIL:  DesenhaBRASIL();
                            break;
            case BAHIA: DesenhaBAHIA();
                            break;
            case MUNDO:   DesenhaMUNDO();
                            break;
     }

     // Exibe a posição do mouse na janela
     glColor3f(0.0f,0.0f,0.0f);
     DesenhaTexto(texto, -win, win-(win*0.08));

     glutSwapBuffers();
}

// Inicializa parâmetros de rendering
void Inicializa (void)
{
    // Define a cor de fundo da janela de visualização como preta
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    win=150.0f;
    dados = BRASIL;
    r = 0.0f;
    g = 0.0f;
    b = 1.0f;
    strcpy(texto, "(0,0)");
}

// Função usada para especificar o volume de visualização
void EspecificaParametrosVisualizacao(void)
{
	// Especifica sistema de coordenadas de projeção
	glMatrixMode(GL_PROJECTION);
	// Inicializa sistema de coordenadas de projeção
	glLoadIdentity();

	// Especifica a projeção perspectiva(angulo,aspecto,zMin,zMax)
	gluPerspective(45,fAspect,0.5,500);

	// Especifica sistema de coordenadas do modelo
	glMatrixMode(GL_MODELVIEW);
	// Inicializa sistema de coordenadas do modelo
	glLoadIdentity();

	// Especifica posição do observador e do alvo
	gluLookAt(0,60,150, 0,0,0, 0,1,0);
}

// Função callback chamada quando o tamanho da janela é alterado
void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
    // Especifica as dimensões da Viewport
    glViewport(0, 0, w, h);
    view_w = w;
    view_h = h;
    fAspect = (GLfloat)w/(GLfloat)h;

    EspecificaParametrosVisualizacao();
    // Inicializa o sistema de coordenadas
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D (-win, win, -win, win);
}


// Gerenciamento do menu com as opções de cores
void MenuSobre(int op)
{
   switch(op) {
            case 0:
                     dados = CARACTERISTICAS;
                     break;
            case 1:
                     dados = ALFA;
                     break;
            case 2:
                     dados = DELTA;
                     break;
    }
    glutPostRedisplay();
}

// Gerenciamento do menu com as opções de cores
void MenuDados(int op)
{
   switch(op) {
            case 0:
                     dados = BRASIL;
                     break;
            case 1:
                     dados = BAHIA;
                     break;
            case 2:
                     dados = MUNDO;
                     break;
    }
    glutPostRedisplay();
}

// Gerenciamento do menu principal
void MenuPrincipal(int op)
{
}

// Criacao do Menu
void CriaMenu()
{
    int menu,submenu1,submenu2;

	submenu1 = glutCreateMenu(MenuSobre);
	glutAddMenuEntry("Caracteristicas",0);
	glutAddMenuEntry("Variante Alfa",1);
	glutAddMenuEntry("Variante Delta",2);

    submenu2 = glutCreateMenu(MenuDados);
	glutAddMenuEntry("Brasil",0);
	glutAddMenuEntry("Bahia",1);
	glutAddMenuEntry("Mundo",2);

    menu = glutCreateMenu(MenuPrincipal);
	glutAddSubMenu("Sobre o virus",submenu1);
    glutAddSubMenu("Dados da covid-19",submenu2);

	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

// Função callback chamada para gerenciar eventos do mouse
void GerenciaMouse(int button, int state, int x, int y)
{
    if (button == GLUT_RIGHT_BUTTON)
         if (state == GLUT_DOWN)
            CriaMenu();

    glutPostRedisplay();
}

// Programa Principal
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1280, 720);
    glutInitWindowPosition(10,10);
    glutCreateWindow("Exemplo de Menu e Exibição de Caracteres");
    glutDisplayFunc(Desenha);
    glutReshapeFunc(AlteraTamanhoJanela);
    glutMouseFunc(GerenciaMouse);
    Inicializa();
    glutMainLoop();
}
