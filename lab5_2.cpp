#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double x){
    double r;
    r = (x*M_PI)/180;
    return r;
}
double rad2deg(double x){
    double d;
    d = (180*x)/M_PI;
    return d;
}
double findXComponent(double l1, double l2, double a1, double a2){
    double xc;
    xc = l1*cos(a1) + l2*cos(a2);
    return xc;
}
double findYComponent(double l1, double l2, double a1, double a2){
    double yc;
    yc = l1*sin(a1) + l2*sin(a2);
    return yc;
}
double pythagoras(double xc, double yc){
    double pyth;
    pyth = sqrt(pow(xc, 2)+ pow(yc, 2));
    return pyth;
}
void showResult(double a, double b){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
    cout << "Length of the resultant vector = " << a << endl;
    cout << "Direction of the resultant vector (deg) = " << b << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
