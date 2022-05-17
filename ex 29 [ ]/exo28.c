#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#define HAUTEUR 9
#define LARGEUR 33
/* is_valid vérifie que les coordonnées (x, y) sont valides
,→ pour un déplacement */
int is_valid(int x, int y, int hauteur, int largeur, char grille[hauteur][largeur]) {
    int value;
    if(x >= 0 && x < largeur && y >= 0 && y < hauteur){
        if(grille[y][x]=='#'){
            value= 0;
        }else{
            value= 1;
        }
    }
    return value;
}
/* is_finish vérifie que l'emplacement sur lequel se trouve
,→ les coordonnées (x, y) est une sortie */
int is_finish(int x, int y, int hauteur, int largeur, char grille[hauteur][largeur]) {
if(grille[y][x]=='.'){
    return 1;
}else{
    return 0;    
}

}
int main() {
char grille[HAUTEUR][LARGEUR] = {
"# ##############################",
"#      #    # #   #            #",
"### # ## #    # # ### ##### ####",
"#   #  # ####   #       #      #",
"# #### # #   ####### ######## ##",
"# #  # #   #       #    #      #",
"# ## # ########### ###### ######",
"#    #              #          #",
"##############################.#"};

int x = 1, y = 0;
int move_x, move_y;
int i;
initscr();
noecho();
cbreak();
do {
clear();
for(i = 0; i < HAUTEUR; ++i) {
mvprintw(i, 0, "%s", grille[i]);
}
mvprintw(y, x, "@");
mvprintw(y, x, "");
refresh();
move_x = x; move_y = y;
switch(getch()) {
case 'z': move_y = y - 1; break;
case 's': move_y = y + 1; break;
case 'q': move_x = x - 1; break;
case 'd': move_x = x + 1; break;
}
if(is_valid(move_x, move_y, HAUTEUR, LARGEUR, grille)) {
x = move_x; y = move_y;
}
} while(! is_finish(x, y, HAUTEUR, LARGEUR, grille));
refresh();
clrtoeol();
refresh();
endwin();
exit(EXIT_SUCCESS);
}
