-[NSError tsp_hintsDescription]
NSString *__cdecl -[NSError tsp_hintsDescription](NSError *self, SEL a2)
{
  NSMutableString *v3; // x19
  NSSet *v4; // x20
  void *v5; // x21
  __int64 v6; // x24
  char v7; // w26
  void *i; // x25
  __int64 v9; // x23
  __int128 v11; // [xsp+0h] [xbp-120h] BYREF
  __int128 v12; // [xsp+10h] [xbp-110h]
  __int128 v13; // [xsp+20h] [xbp-100h]
  __int128 v14; // [xsp+30h] [xbp-F0h]
  _BYTE v15[128]; // [xsp+48h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v3 = objc_opt_new(&OBJC_CLASS___NSMutableString);
  -[NSMutableString appendString:](v3, "appendString:", CFSTR("["));
  v13 = 0u;
  v14 = 0u;
  v11 = 0u;
  v12 = 0u;
  v4 = objc_retainAutoreleasedReturnValue(-[NSError tsp_hints](self, "tsp_hints", 0LL));
  v5 = -[NSSet countByEnumeratingWithState:objects:count:](
         v4,
         "countByEnumeratingWithState:objects:count:",
         &v11,
         v15,
         16LL);
  if ( v5 )
  {
    v6 = *(_QWORD *)v12;
    v7 = 1;
    do
    {
      for ( i = 0LL; i != v5; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v12 != v6 )
          objc_enumerationMutation(v4);
        v9 = *(_QWORD *)(*((_QWORD *)&v11 + 1) + 8LL * (_QWORD)i);
        if ( (v7 & 1) == 0 )
          -[NSMutableString appendString:](v3, "appendString:", CFSTR(", "));
        -[NSMutableString appendString:](v3, "appendString:", v9);
        v7 = 0;
      }
      v5 = -[NSSet countByEnumeratingWithState:objects:count:](
             v4,
             "countByEnumeratingWithState:objects:count:",
             &v11,
             v15,
             16LL);
      v7 = 0;
    }
    while ( v5 );
  }
  objc_release(v4);
  -[NSMutableString appendString:](v3, "appendString:", CFSTR("]"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v3);
}