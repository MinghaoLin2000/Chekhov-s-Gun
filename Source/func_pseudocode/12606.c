-[TSUUUIDPath UUIDPathString]
NSString *__cdecl -[TSUUUIDPath UUIDPathString](TSUUUIDPath *self, SEL a2)
{
  NSUInteger v3; // x19
  NSArray *v4; // x20
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x24
  char v8; // w26
  void *v9; // x25
  void *v10; // x23
  void *v11; // x23
  __CFString *v12; // x0
  NSString *v13; // x20
  __int128 v15; // [xsp+0h] [xbp-120h] BYREF
  __int128 v16; // [xsp+10h] [xbp-110h]
  __int128 v17; // [xsp+20h] [xbp-100h]
  __int128 v18; // [xsp+30h] [xbp-F0h]
  _BYTE v19[128]; // [xsp+48h] [xbp-D8h] BYREF

  v3 = -[NSArray count](self->_uuids, "count");
  if ( v3 )
  {
    v3 = (NSUInteger)objc_msgSend(
                       objc_alloc((Class)&OBJC_CLASS___NSMutableString),
                       "initWithCapacity:",
                       36 * v3 + (_QWORD)objc_msgSend(CFSTR("/"), "length") * (v3 - 1));
    v15 = 0u;
    v16 = 0u;
    v17 = 0u;
    v18 = 0u;
    v4 = objc_retain(self->_uuids);
    v5 = -[NSArray countByEnumeratingWithState:objects:count:](
           v4,
           "countByEnumeratingWithState:objects:count:",
           &v15,
           v19,
           16LL);
    if ( v5 )
    {
      v6 = v5;
      v7 = *(_QWORD *)v16;
      v8 = 1;
      do
      {
        v9 = 0LL;
        do
        {
          if ( *(_QWORD *)v16 != v7 )
            objc_enumerationMutation(v4);
          v10 = *(void **)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)v9);
          if ( (v8 & 1) == 0 )
            objc_msgSend((id)v3, "appendString:", CFSTR("/"), (_QWORD)v15);
          v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "UUIDString", (_QWORD)v15));
          objc_msgSend((id)v3, "appendString:", v11);
          objc_release(v11);
          v8 = 0;
          v9 = (char *)v9 + 1;
        }
        while ( v6 != v9 );
        v6 = -[NSArray countByEnumeratingWithState:objects:count:](
               v4,
               "countByEnumeratingWithState:objects:count:",
               &v15,
               v19,
               16LL);
        v8 = 0;
      }
      while ( v6 );
    }
    objc_release(v4);
  }
  if ( v3 )
    v12 = (__CFString *)v3;
  else
    v12 = &stru_1001DFAA0;
  v13 = objc_retainAutoreleaseReturnValue(v12);
  objc_release((id)v3);
  return v13;
}