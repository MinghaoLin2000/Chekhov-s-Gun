_TSUProtocolCast
void *__fastcall TSUProtocolCast(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  void *v9; // x19
  __int64 v10; // x20
  __int64 *v11; // x8
  __int64 *v13; // [xsp+0h] [xbp-20h]
  __int64 *v14; // [xsp+8h] [xbp-18h]

  v9 = a1;
  v13 = &a9;
  v14 = &a9;
  if ( a1 )
  {
    v10 = a2;
    if ( a2 )
    {
      while ( 1 )
      {
        v11 = v14++;
        if ( ((unsigned int)objc_msgSend(v9, "conformsToProtocol:", *v11, v13) & 1) == 0 )
          break;
        if ( !--v10 )
          return v9;
      }
      return 0LL;
    }
  }
  return v9;
}