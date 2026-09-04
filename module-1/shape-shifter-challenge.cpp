/*
Pencil Shape Program
v1.0.0
 */

#include <iostream>
#include <string>

using namespace std;
int main() {
    string shapeLabel = "  Pencil\n";
    string strSquare = "***********\n*         *\n*         *\n*         *\n***********\n";
    string strRectangle = "***********\n*         *\n*         *\n*         *\n*         *\n*         *\n*         *\n*         *\n***********\n";
    string strDownTriangle = "***********\n *       *\n  *     *\n   *   *\n    * *\n     *\n";

    std :: cout << shapeLabel; //Label
    std :: cout << strSquare; //Eraser
    std :: cout << strRectangle; //Pencil Base
    std :: cout << strDownTriangle; //Pencil Tip
}
