#include "include/common.h"
/*
 * Shapes maps
 *
 * Arrays are mirrored upside-down
 *
 */

/*
 *  L #1 tYellow
 *  ..#. .#.. .... ##..
 *  ###. .#.. ###. .#..
 *  .... .##. #... .#..
 *  .... .... .... ....
 */
uint8_t arrShapeL[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {1, 1, 1, 0},
    {0, 0, 1, 0}};

/*
 *  RL #2 tBlue
 *  #... .##. .... .#..
 *  ###. .#.. ###. .#..
 *  .... .#.. ..#. ##..
 *  .... .... .... ....
 */

uint8_t arrShapeRL[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {1, 1, 1, 0},
    {1, 0, 0, 0}};

/*
 *  Z #3
 *  ##.. ..#. .... .#..
 *  .##. .##. ##.. ##..
 *  .... .#.. .##. #...
 *  .... .... .... ....
 */
uint8_t arrShapeZ[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 1, 1, 0},
    {1, 1, 0, 0}};

/*
 *  S #4
 *  .##. .#.. .... #...
 *  ##.. .##. .##. ##..
 *  .... ..#. ##.. .#..
 *  .... .... .... ....
 */
uint8_t arrShapeS[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {1, 1, 0, 0},
    {0, 1, 1, 0}};


/*
 *  B #5
 *  .##. .##. .##. .##.
 *  .##. .##. .##. .##.
 *  .... .... .... ....
 *  .... .... .... ....
 */
uint8_t arrShapeB[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 1, 1, 0},
    {0, 1, 1, 0}};


/*
 *  I #6
 *  .#.. .... .#.. ....
 *  .#.. #### .#.. ####
 *  .#.. .... .#.. ....
 *  .#.. .... .#.. ....
 */
uint8_t arrShapeI[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {1, 1, 1, 1},
    {0, 0, 0, 0}};


/*
 *  T #7
 *  .#.. .#.. .... .#..
 *  ###. .##. ###. ##..
 *  .... .#.. .#.. .#..
 *  .... .... .... ....
 */
uint8_t arrShapeT[4][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {1, 1, 1, 0},
    {0, 1, 0, 0}};

