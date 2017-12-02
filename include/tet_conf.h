#define windowName_conf "Tetris CSFML" // Window name
#define uiColor1 sfColor_fromRGB(0, 0, 0) // Field background
#define uiColor2 sfColor_fromRGB(80, 80, 80) // Field inactive cell outline
#define uiColor3 sfColor_fromRGB(0, 0, 0) // Field active cell outline
#define tOrange sfColor_fromRGB(255, 130, 0) // Orange color of L shape
#define tBlue sfColor_fromRGB(0, 0, 255)
#define tGreen sfColor_fromRGB(0, 255, 0)
#define tRed sfColor_fromRGB(255, 0, 0)
#define tYellow sfColor_fromRGB(255, 255, 0)
#define tCyan sfColor_fromRGB(0, 255, 255)
#define tMagneta sfColor_fromRGB(192, 0, 255)
#define moveRepeatLatency1 150000 // microseconds, only for left-right arrows,
                  // first repeat move when long push
#define moveRepeatLatency2  30000 // microseconds, for Left, Right and Down
                  // arrows, the rest repeat move when long push
#define basicLatency 500000
#define PUT_LATENCY 300000
#define RM_LINE_SCORE 100
#define LEVELUP_SCORE 100


/*
 * 19..........
 * 18..........
 * 17..........
 * 16..........
 * 15..........
 * 14..........
 * 13..........
 * 12..........
 * 11..........
 * 10..........
 *  9..........
 *  8..........
 *  7..........
 *  6..........
 *  5.......#..
 *  4......##..
 *  3......#...
 *  2.#.##.....
 *  1.##.#..#..
 *  0..#.#.###.
 *   0123456789
 *
 *  L
 *  ..#. .#.. .... ##..
 *  ###. .#.. ###. .#..
 *  .... .##. #... .#..
 *  .... .... .... ....
 *
 *  RL
 *  #... .##. .... .#..
 *  ###. .#.. ###. .#..
 *  .... .#.. ..#. ##..
 *  .... .... .... ....
 *
 *  Z
 *  ##.. ..#. .... .#..
 *  .##. .##. ##.. ##..
 *  .... .#.. .##. #...
 *  .... .... .... ....
 *
 *  S
 *  .##. .#.. .... #...
 *  ##.. .##. .##. ##..
 *  .... ..#. ##.. .#..
 *  .... .... .... ....
 *
 *  Brick
 *  ##.. ##.. ##.. ##..
 *  ##.. ##.. ##.. ##..
 *  .... .... .... ....
 *  .... .... .... ....
 *
 *  I
 *  .#.. .... .#.. ....
 *  .#.. #### .#.. ####
 *  .#.. .... .#.. ....
 *  .#.. .... .#.. ....
 *
 *  T
 *  .#.. .#.. .... .#..
 *  ###. .##. ###. ##..
 *  .... .#.. .#.. .#..
 *  .... .... .... ....
 */

