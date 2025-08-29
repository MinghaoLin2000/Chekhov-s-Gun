-[NSMutableArray tsu_peek]
// attributes: thunk
id __cdecl -[NSMutableArray tsu_peek](NSMutableArray *self, SEL a2)
{
  return -[NSMutableArray lastObject](self, "lastObject");
}