#pragma once
#include "empty_class.h"
#include "independent_class.h"
#include "successor_class.h"
#include <cmath>
/**
* \brief Функция считающая расстояние между точками
*/
double distance(const double x1, const double y1, const double x2, const double y2);
/**
* \brief Функция считающая расстояние между точками, спецификатор throw()
*/
double distance2(const double x1, const double y1, const double x2, const double y2);
/**
* \brief Функция считающая расстояние между точками, с конкретной спецификацией с подход¤щим стандартным исключением
*/
double distance3(const double x1, const double y1, const double x2, const double y2);
/**
* \brief Функция считающая расстояние между точками, со спецификацией с собственным реализованным исключением. (исключение как пустой класс)
*/
double distance4(const double x1, const double y1, const double x2, const double y2);
/**
* \brief Функция считающая расстояние между точками, со спецификацией с собственным реализованным исключением. (исключение как независимый класс с пол¤ми-параметрами функции)
*/
double distance5(const double x1, const double y1, const double x2, const double y2);
/**
* \brief Функция считающая расстояние между точками, со спецификацией с собственным реализованным исключением. (исключение как наследник от стандартного исключени¤ с пол¤ми)
*/
double distance6(const double x1, const double y1, const double x2, const double y2);


