#include "graph/rgbcolor.h"
#include "graph/mingl.h"
#include "graph/pos.h"
#include "figs/rectangle.h"
#include "figs/triangle.h"
#include "figs/circle.h"
#include "figs/figure.h"

using namespace std;



int main()
{
    minGL Window ;
    Window.initGlut();
    Window.initGraphic();
    //TODO
    Window.updateGraphic();
    Window.get_key();
    return 0;
}
