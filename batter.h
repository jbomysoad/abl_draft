#ifndef BATTER_H_
#define BATTER_H_

#include <vector>

struct batter {


};

struct player {
  char* name;
  char* team;
  char* bats;
  std::vector<def> defense;
};



struct def {
  enum position;
  enum range;
  short error;
  short throw;
};

struct numbers {
  short gcf;
  short cf_2b;
  short dp;
  short cf_1b;
  short cf_3b;
  short sf;
  short hr;
  short hb;
  short rg_1;
  short bb;
  short k;
  short fl_2b;
  short rg_2;
  short ef;
};

struct misc {
  short pwr_l;
  short pwr_r;
  short speed;
  short steal;
  short jump;
  short bunt;
  short injury;
  short age;
};

enum position
{
 dh = 0,
 catcher = 1,
 first_base = 3,
 second_base = 4,
 third_base = 5,
 shortstop = 6,
 left_field = 7,
 center_field = 8,
 right_field = 9
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
