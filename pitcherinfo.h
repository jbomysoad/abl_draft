#ifndef PITCHERINFO_H_
#define PITCHERINFO_H_

struct pitcher {
  player player_info;
  defense def;
  numbers left;
  numbers right;
  misc info;
};

struct player {
  char* name;
  char* team;
  char* throws;
  char* symbols;
};

struct defense {
  enum range;
  short error;
  short steal;
};

struct numbers {
  short range_infield;
  short range_outfield;
  short ef_cf;
  short rg_mi;
  short gcf;
  short ef_corner;
  short rg_ci;
  short sg;
  short hb;
  short single;
  short dubs;
  short deeps;
  short ef_tired;
  short ks;
  short k_tired;
  short bb;
  short dp;
};

struct misc {
  short pickoff;
  short balk;
  short wild_pitch;
  short bats;
  short power;
  short bunts;
  float k_9;
};

enum range
{
 weak = 0,
 mediocre = 1,
 fair = 2,
 average = 3,
 very_good = 4,
 superior = 5
};

#endif
