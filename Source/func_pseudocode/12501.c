-[NSPointerArray tsu_description]
id __cdecl -[NSPointerArray tsu_description](NSPointerArray *self, SEL a2)
{
  NSString *v3; // x20
  NSPointerArray *v4; // x19
  void *v5; // x0
  void *v6; // x22
  __int64 v7; // x26
  void *v8; // x27
  NSString *v9; // x23
  NSString *v10; // x24
  __int128 v12; // [xsp+10h] [xbp-120h] BYREF
  __int128 v13; // [xsp+20h] [xbp-110h]
  __int128 v14; // [xsp+30h] [xbp-100h]
  __int128 v15; // [xsp+40h] [xbp-F0h]
  _BYTE v16[128]; // [xsp+58h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("NSPointerArray %p Count:%lu"),
           self,
           -[NSPointerArray count](self, "count")));
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v4 = objc_retain(self);
  v5 = -[NSPointerArray countByEnumeratingWithState:objects:count:](
         v4,
         "countByEnumeratingWithState:objects:count:",
         &v12,
         v16,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v13;
    do
    {
      v8 = 0LL;
      v9 = v3;
      do
      {
        if ( *(_QWORD *)v13 != v7 )
          objc_enumerationMutation(v4);
        v10 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("\n    %@"),
                  *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)v8)));
        v3 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingString:](v9, "stringByAppendingString:", v10));
        objc_release(v9);
        objc_release(v10);
        v8 = (char *)v8 + 1;
        v9 = v3;
      }
      while ( v6 != v8 );
      v6 = -[NSPointerArray countByEnumeratingWithState:objects:count:](
             v4,
             "countByEnumeratingWithState:objects:count:",
             &v12,
             v16,
             16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}