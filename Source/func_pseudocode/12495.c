-[NSPointerArray tsu_enumerateNonNullPointersUsingBlock:]
void __cdecl -[NSPointerArray tsu_enumerateNonNullPointersUsingBlock:](NSPointerArray *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, void *, __int64, _BYTE *); // x20
  NSUInteger v5; // x0
  NSUInteger v6; // x21
  unsigned __int64 v7; // x24
  void *v8; // x0
  char v9; // [xsp+Fh] [xbp-31h] BYREF

  v4 = (void (__fastcall **)(id, void *, __int64, _BYTE *))objc_retain(a3);
  v9 = 0;
  v5 = -[NSPointerArray count](self, "count");
  if ( v5 )
  {
    v6 = v5;
    v7 = 1LL;
    do
    {
      v8 = -[NSPointerArray pointerAtIndex:](self, "pointerAtIndex:", v7 - 1);
      if ( v8 )
        v4[2](v4, v8, v7 - 1, &v9);
      if ( v7 >= v6 )
        break;
      ++v7;
    }
    while ( !v9 );
  }
  objc_release(v4);
}