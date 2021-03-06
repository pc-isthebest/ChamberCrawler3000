/* a2hardy, a3rock, p2choudh
 * March 28, 2017
 *
 * CS246 - A5 - cc3k-villian - floor.cc
 */

#include "defmod.h"
#include "constants.h"
#include "player.h"
#include "drow.h"
#include "vampire.h"
#include <cmath>

DefMod::DefMod(int v, std::string d) : Potion(v, d) {}

void DefMod::affect(Player *p) {
    p->modifyDef(value);
}

void DefMod::affect(Drow * d){
	d->modifyDef(ceil(value * DROW_EFFECT_X));
}
