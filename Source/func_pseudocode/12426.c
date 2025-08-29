-[NSMutableArray tsu_addObjectsFromNonNilArray:]
void __cdecl -[NSMutableArray tsu_addObjectsFromNonNilArray:](NSMutableArray *self, SEL a2, id a3)
{
  if ( a3 )
    -[NSMutableArray addObjectsFromArray:](self, "addObjectsFromArray:");
}