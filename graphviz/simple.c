#include <graphviz/gvc.h>
#include <stddef.h>
#include <stdio.h>

int main(int argc, char **argv) {

    GVC_t *gvc = gvContext();

    FILE *fp;
    if (argc > 1)
        fp = fopen(argv[1], "r");
    else
        fp = stdin;
    graph_t *g = agread(fp, NULL);

    gvLayout(gvc, g, "dot");

    gvRender(gvc, g, "plain", stdout);

    gvFreeLayout(gvc, g);

    agclose(g);
    
    return gvFreeContext(gvc);
}
