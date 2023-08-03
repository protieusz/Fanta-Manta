#ifndef fanta_manta_h
#define fanta_manta_h
#endif

#pragma once

#include "quantum.h"

#define LAYOUT( \
	K000, K001, K002, K003, K004,                  K007, K008, K009, K010, K011, \
	K100, K101, K102, K103, K104,                  K107, K108, K109, K110, K111, \
	K200, K201, K202, K203, K204, K205,      K206, K207, K208, K209, K210, K211  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  KC_NO, KC_NO, K007,  K008,  K009, K010, K011 }, \
	{ K100,  K101,  K102,  K103,  K104,  KC_NO, KC_NO, K107,  K108,  K109, K110, K111 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209, K210, K211 }  \
}
