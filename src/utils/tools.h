/****************************************************************************
 *                              Basic tools:
 * greyscale, brightness, flip, wand or cool ...
 * *************************************************************************/

#ifndef TOOLS_H
#define TOOLS_H

#include <QPainter>
#include <QPixmap>
#include <QDebug>
#include <QPainter>
#include <QtMath>
#include "gaussianblur.h"

namespace Tools {
QImage GreyScale(QImage origin);
QImage Warm(int delta, QImage origin);
QImage Cool(int delta, QImage origin);
QImage DrawFrame(QImage origin, QImage &frame);
QImage Brightness(int delta, QImage origin);
QImage Horizontal(const QImage &origin);
QImage Vertical(const QImage &origin);
QImage LinearLevelTransformation(const QImage &origin, double a, double b);
QImage LogGreyLevelTransformation(const QImage &origin, double a, double b);
QImage PowerGreyLevelTransformation(const QImage &origin, double c, double r, double b);
QImage ExpTransform(const QImage &origin, double b, double c, double a);
QImage TwoThreshold(const QImage &orogin, double t1, double t2, int option);
QImage StretchTransform(const QImage &origin,
                        int x1, int x2,
                        double k1, double k2, double k3,
                        double b2, double b3);
QImage TranslationTransform(const QImage &origin, int moveX, int moveY);
QImage SimpleSmooth(const QImage &origin);
QImage MeidaFilter(const QImage &origin, int radius);
QImage LaplaceSharpen(const QImage &origin);
QImage SobelEdge(const QImage &origin);
QImage GaussianSmoothing(const QImage &origin, int radius, double sigma);
QImage Binaryzation(const QImage &origin);
QImage Metal(QImage origin);
QImage PrewittEdge(const QImage &origin);
QImage ContourExtraction(const QImage &origin);
QImage Dilate(const QImage &origin);
QImage Expansion(const QImage &origin);
QImage Opening(const QImage &origin);
QImage Closing(const QImage &origin);
QImage Thinning(const QImage &origin);
//QImage RGB2HSV(const QImage &origin);
//QImage RGB2HSL(const QImage &origin);
//QImage RGB2CMYK(const QImage &origin);
QImage Final(const QImage &origin);
QImage HistogramEqualization(const QImage &origin);
QImage Transpose(const QImage &origin);
QImage ZoomAdjacencyValue(const QImage &origin, const int percent);
QImage ZoomBilinear(const QImage &origin, const int percent);
} // namespace Tools

#endif // TOOLS_H
