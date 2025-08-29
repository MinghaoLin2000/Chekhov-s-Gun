-[NSMutableSet tsu_addObjectsFromNonNilArray:]
void __cdecl -[NSMutableSet tsu_addObjectsFromNonNilArray:](NSMutableSet *self, SEL a2, id a3)
{
  if ( a3 )
    -[NSMutableSet addObjectsFromArray:](self, "addObjectsFromArray:");
}