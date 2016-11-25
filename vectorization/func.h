void quad(int length, double * a, double * b, double * c, double * x1, double * x2);
void add_floats(double *a, double *b, double *c, double *d, double *e, int n);

/*
struct coordinate {
    float x[40000], y[40000], z[40000];
} obj;
*/

struct coordinate {
    float x, y, z;
} obj[40000];
