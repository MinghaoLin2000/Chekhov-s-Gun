-[NSMutableSet tsu_addNonNilObject:]
void __cdecl -[NSMutableSet tsu_addNonNilObject:](NSMutableSet *self, SEL a2, id a3)
{
  if ( a3 )
    -[NSMutableSet addObject:](self, "addObject:");
}