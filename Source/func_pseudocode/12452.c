+[NSSet tsu_setWithSelectors:]
id __cdecl +[NSSet tsu_setWithSelectors:](id a1, SEL a2, SEL a3)
{
  id v4; // x19
  NSString *v5; // x20
  SEL *v6; // x8
  void *v7; // x20
  SEL *v9; // [xsp+8h] [xbp-18h]
  __int64 vars8; // [xsp+28h] [xbp+8h]
  __int64 v11; // [xsp+30h] [xbp+10h] BYREF

  v4 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableSet);
  v9 = (SEL *)&v11;
  if ( a3 )
  {
    do
    {
      v5 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a3));
      objc_msgSend(v4, "addObject:", v5);
      objc_release(v5);
      v6 = v9++;
      a3 = *v6;
    }
    while ( *v6 );
  }
  v7 = objc_msgSend(v4, "copy");
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}