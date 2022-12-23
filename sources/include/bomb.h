#ifndef BOMB_H_
#define BOMB_H_

#include <game.h>
#include <map.h>
#include <constant.h>
#include <player.h>

struct bomb{
    int x;
    int y;
    int bomb_timer;
    int dropped; // 0 (the bomb is not droped)
                // 1 (the bomb is droped)
};


struct explosion{
    int x;
    int y;
    int timer;
    int started; // 0 the explosion has started
                 // 1 the explosion hasn't started
};


void bombs_init_tab(struct bomb* bomb_tab);

void set_bomb(struct bomb *bomb);

void bomb_update(struct map* map, struct player* player);

void bomb_update_aux(struct bomb *bomb, struct map* map, struct player* player);

int get_bomb_timer(struct bomb *bomb);

int bomb_get_level(struct bomb *bomb);

void bomb_explosion(struct map *map, int x, int y);

void display_explosion(struct map *map, int x, int y);

void set_explosion(struct explosion *explosion);

void explosion_init_tab(struct explosion *explosion);

void explosion_update(struct map *map);

void explosion_update_aux(struct map *map, struct explosion *explosion);

void drop_bomb(struct game *game, struct map *map);

struct bomb *map_get_tab_bombs(struct map *map);

//void explosion_free(struct explosion* explosion);

#endif /* BOMBS_H_ */
