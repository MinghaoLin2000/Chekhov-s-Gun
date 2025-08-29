-[NSMutableArray tsu_dequeue]
// attributes: thunk
id __cdecl -[NSMutableArray tsu_dequeue](NSMutableArray *self, SEL a2)
{
  return -[NSMutableArray tsu_pop](self, "tsu_pop");
}