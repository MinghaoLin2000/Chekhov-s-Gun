-[NSMutableArray tsu_addObjects:]
void __cdecl -[NSMutableArray tsu_addObjects:](NSMutableArray *self, SEL a2, id a3)
{
  __int64 *v4; // x8
  __int64 *v5; // [xsp+8h] [xbp-18h]
  __int64 v6; // [xsp+30h] [xbp+10h] BYREF

  v5 = &v6;
  if ( a3 )
  {
    do
    {
      -[NSMutableArray addObject:](self, "addObject:");
      v4 = v5++;
    }
    while ( *v4 );
  }
}