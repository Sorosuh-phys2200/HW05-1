/*
 * Test point2d and triangle data structures, distance() and area() functions
 */
 
 #include <stdio.h>
 #include "geom.h"
 
 double distance(struct point2d u, struct point2d v);
 /*double distance2(struct point2d u, struct point2d q);
 double distance3(struct point2d q, struct point2d v);*/
 double area(struct triangle t);
 
 int main(void)
 {
     struct point2d u = {2., 2.};
     struct point2d v = {4., 4.};
     struct point2d q = {8., 8.};
     struct triangle t = {u, v, q};
     double d1, d2, d3, pp, aa, rr;
     
     /* printf("x = %f, y = %f\n", u.x, u.y);*/
     printf("a = (%f, %f)  b = (%f, %f)  c = (%f, %f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);

     d1 = distance(u, v);
     d2 = distance(u, q);
     d3 = distance(q, v);
     pp = d1 + d2 + d3;
     printf("perimeter = %f + %f + %f = %f\n", d1,d2,d3,pp);

     aa = area(t);
     printf("area = %f\n", aa);
     rr = (2*aa)/pp;
     printf("radius = %f\n", rr);

     return 0;
 }
