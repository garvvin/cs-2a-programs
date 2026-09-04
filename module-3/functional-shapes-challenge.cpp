/*
Functional Pencil Shape Program
v1.0.0
 */
#include <iostream>
#include <string>

using namespace std;
//Shape functions
void Square() {
    string strSquare = "***********\n*         *\n*         *\n*         *\n***********\n";
    cout << strSquare;
}
void Rectangle() {
    string strRectangle = "***********\n*         *\n*         *\n*         *\n*         *\n*         *\n*         *\n*         *\n***********\n";
    cout << strRectangle;
}
void DownTriangle() {
    string strDownTriangle = "***********\n *       *\n  *     *\n   *   *\n    * *\n     *\n";
    cout << strDownTriangle;
}

int main() {
    string shapeLabel = "  Pencil\n";

    std :: cout << shapeLabel; //Label
    Square(); //Eraser
    Rectangle(); //Pencil Base
    DownTriangle(); //Pencil Tip
}
