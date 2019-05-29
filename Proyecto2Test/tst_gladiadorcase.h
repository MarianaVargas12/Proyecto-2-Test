#ifndef TST_GLADIADORCASE_H
#define TST_GLADIADORCASE_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "tablero.h"
#include "linkedlist.h"
#include "torre.h"
#include "lista.h"
#include "poblacion.h"
#include "astar.h"
#include "backtracking.h"
using namespace testing;

TEST(GladiadorCase, GladiadorTest)
{
    Gladiador* gladiador = new Gladiador(1,57,2,15,20,15,59,10,1);
    EXPECT_EQ(gladiador->getFitness(), 102);
}
TEST(GladiadorCase1, GladiadorTest)
{
    Gladiador* gladiador = new Gladiador(1,57,2,15,20,15,59,10,1);
    EXPECT_EQ(gladiador->getSupervivncia(), 1);
//    EXPECT_EQ(1, 1);
//    ASSERT_THAT(0, Eq(0));
}
TEST(GladiadorCase2, GladiadorTest)
{
    Gladiador* gladiador = new Gladiador(1,57,2,15,20,15,59,10,1);
    EXPECT_EQ(gladiador->getProbabilidad(), 10);
}
TEST(GladiadorCase3, GladiadorTest)
{
    Gladiador* gladiador = new Gladiador(1,57,2,15,20,15,59,10,1);
    EXPECT_EQ(gladiador->getResistencia(), 209);
}
//dec to bin
TEST(PoblacionCase, GladiadorTest)
{
    Poblacion* poblacion = new Poblacion();
    int* num= poblacion->dectobin(16);
    for (int i=0;i<8;i++) {
        if(i==3){
            EXPECT_EQ( num[i], 1);
        }
        else {
            EXPECT_EQ( num[i], 0);
        }
    }
}
//bin to dec
TEST(PoblacionCase1, GladiadorTest)
{
    Poblacion* poblacion = new Poblacion();
    int array[8]={0,1,0,1,1,0,1,1};
    int num= poblacion->bintodec(array);
    EXPECT_EQ( num, 218);
}
//cruce
TEST(PoblacionCase2, GladiadorTest)
{
    Poblacion* poblacion = new Poblacion();
    poblacion->poblacionInicial(5);
    poblacion->creacion(5);
    EXPECT_EQ(poblacion->cruces(), true);
}
//seleccion
TEST(PoblacionCase3, GladiadorTest)
{
    Poblacion* poblacion = new Poblacion();
    poblacion->poblacionInicial(5);
    poblacion->creacion(5);
    EXPECT_EQ(poblacion->seleccion(), true);
}
//mejor
TEST(PoblacionCase4, GladiadorTest)
{
    Gladiador* gladiador = new Gladiador(1,57,2,15,20,15,59,10,1);
    EXPECT_EQ(gladiador->getFitness(), 102);
}
//inversion
TEST(PoblacionCase5, GladiadorTest)
{
    Poblacion* poblacion = new Poblacion();
    poblacion->poblacionInicial(5);
    EXPECT_EQ(poblacion->inversion(), true);
}
//mutacion
TEST(PoblacionCase6, GladiadorTest)
{
    Poblacion* poblacion = new Poblacion();
    poblacion->poblacionInicial(5);
    EXPECT_EQ(poblacion->mutacion(), true);
}
//creacion
TEST(PoblacionCase7, GladiadorTest)
{
    Poblacion* poblacion = new Poblacion();
    poblacion->poblacionInicial(5);
    EXPECT_EQ(poblacion->creacion(5), true);
}
//poblacion Inicial
TEST(PoblacionCase8, GladiadorTest)
{
    Poblacion* poblacion = new Poblacion();
    EXPECT_EQ(poblacion->poblacionInicial(5), true);
}
//tablero generar torres
TEST(TableroCase, GladiadorTest)
{
    Tablero tablero= Tablero::getInstance();
    srand(time(0));
    for ( int x = 0;x<25; x++) {
        Tablero::getInstance().generarTorre();
    }
    ASSERT_NE(&tablero,&Tablero::getInstance());
}
//tablero mover torres
TEST(TableroCase1, GladiadorTest)
{
    srand(time(0));
    for ( int x = 0;x<25; x++) {
        Tablero::getInstance().generarTorre();
    }
    Tablero tablero= Tablero::getInstance();
    Tablero::getInstance().moverTorres(5,4);
    ASSERT_NE(&tablero,&Tablero::getInstance());
}
//astar
TEST(backtrackingCase, GladiadorTest)
{
    int entrada[N][N] = {
        {0, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 1, 1, 0},
        {1, 1, 1, 0},
    };
    astar* Astar= new astar();
    int** path= Astar->aStarSearch(entrada, make_pair(0, 0), make_pair(3, 3));
    int solution[5][2]={{0,0},{1,1},{1,2},{2,3},{3,3},};
    for (int i=0;i<5;i++) {
        EXPECT_EQ(path[i][0], solution[i][0]);
        EXPECT_EQ(path[i][1], solution[i][1]);
    }
}
//backtracking
TEST(astarCase, GladiadorTest)
{
    int entrada[N][N] = {
        {0, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 1, 1, 0},
        {1, 1, 1, 0},
    };
    backtracking* back= new backtracking();
    int** path= back->solveMaze(entrada,0,0);
    int** solution = new int*[30];
    solution[0]= new int[2];
    solution[0][0]=0;
    solution[0][1]=0;
    solution[1]= new int[2];
    solution[1][0]=1;
    solution[1][1]=1;
    solution[2]= new int[2];
    solution[2][0]=1;
    solution[2][1]=2;
    solution[3]= new int[2];
    solution[3][0]=2;
    solution[3][1]=3;
    solution[4]= new int[2];
    solution[4][0]=3;
    solution[4][1]=3;
    for (int i=0;i<5;i++) {
        EXPECT_EQ(path[i][0], solution[i][0]);
        EXPECT_EQ(path[i][1], solution[i][1]);
    }
}
#endif // TST_GLADIADORCASE_H
