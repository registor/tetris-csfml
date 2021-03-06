#define FLD_ATTR_INVISIBLE          (1 << 0)
#define FLD_ATTR_HIDE_EMPTY_CELLS   (1 << 1)

#define SHP_ATTR_GHOST              (1 << 0)

struct cell {
    char a; // active/empty state of cell
    unsigned int color;
};

/*
 * field + shape coord system
 * y
 * ^. . . . . . .
 * |. . . . . . .
 * |. . . . . . .
 * |. . y . . . .
 * |. . ^ . . . .
 * |. . | . . . .
 * |. . | . . . .
 * |. . 0------>x
 * |. . . . . . .
 * |. . . . . . .
 * 0------------->x
 *
 */

struct shape {
    struct vector2i; // position
    int t; // shape type
    unsigned int attr;
    char c[4][4];
};

struct field {
    unsigned long    id;
    unsigned int     attr;
    struct vector2i  pos;
    struct vector2ui size;
    struct vector2ui bound;
    struct cell    **c; // array of logic shape cells
    unsigned int     shape_cnt;
    struct shape    *shape;
};

void field_init(struct field *fld);
void field_deinit(struct field *fld);
void field_fill_random(struct field *fld);
void field_clear(struct field *fld);
void field_rotate_shape_clockwise(struct field *fld, unsigned int index);
int  field_move_shape_down(struct field *fld, unsigned int index);
int  field_move_shape_left(struct field *fld, unsigned int index);
int  field_move_shape_right(struct field *fld, unsigned int index);
void field_put_shape(struct field *fld, struct shape *shape);
void field_reset_walking_shape(struct field *fld, unsigned int index);
int  field_rm_lines(struct field *fld);
int  field_shape_collision(struct field *fld, struct shape *shape);
int  field_shape_out_of_bounds(struct field *fld, struct shape *shape);

void shape_load(struct shape *shape);
void shape_gen_random(struct shape *shape);
