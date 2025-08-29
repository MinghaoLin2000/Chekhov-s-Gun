-[NSMutableArray tsu_addNonNilObject:]
void __cdecl -[NSMutableArray tsu_addNonNilObject:](NSMutableArray *self, SEL a2, id a3)
{
  if ( a3 )
    -[NSMutableArray addObject:](self, "addObject:");
}