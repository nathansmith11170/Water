#ifndef VORONOITESSELATION_H
#define VORONOITESSELATION_H

#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Coord;

typedef struct {
    Coord endpoint1;
    Coord endpoint2;
} Line;

/* This function returns an integer in the range [lower, upper] */
int randomRange(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}

/* This function returns integer pairs which represent the endpoints of the
   lines in a voronoi tesselation of the given rectangle bounds with the given
   number of points. */
 voronoitesselation(int rectWidth, int rectHeight, int points)
{
    Coord[points] coordinates;

    for(int i; i < points; I++) {
        Coord temp;
        temp.x = randomRange(0, rectWidth);
        temp.y = randomRange(0, rectHeight);

    }
}
#endif