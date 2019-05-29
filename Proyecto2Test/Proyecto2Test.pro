include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
#CONFIG -= qt

HEADERS += \
        astar.h \
        backtracking.h \
        cuadro.h \
        gladiador.h \
        linkedlist.h \
        lista.h \
        node.h \
        nodo.h \
        poblacion.h \
        tablero.h \
        torre.h \
        tst_gladiadorcase.h

SOURCES += \
        astar.cpp \
        backtracking.cpp \
        cuadro.cpp \
        gladiador.cpp \
        linkedlist.cpp \
        lista.cpp \
        main.cpp \
        node.cpp \
        nodo.cpp \
        poblacion.cpp \
        tablero.cpp \
        torre.cpp
