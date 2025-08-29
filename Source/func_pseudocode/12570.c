-[NSArray tsu_anyObject]
// attributes: thunk
id __cdecl -[NSArray tsu_anyObject](NSArray *self, SEL a2)
{
  return -[NSArray firstObject](self, "firstObject");
}