-[ipp_t _initWithAttrs:]
id __cdecl -[ipp_t _initWithAttrs:](ipp_t *self, SEL a2, id a3)
{
  id v4; // x19
  ipp_t *v5; // x20
  id v6; // x21
  void *v7; // x22
  __int64 v8; // x25
  void *v9; // x26
  NSMutableArray *attrs; // x24
  void *v11; // x23
  __int128 v13; // [xsp+0h] [xbp-120h] BYREF
  __int128 v14; // [xsp+10h] [xbp-110h]
  __int128 v15; // [xsp+20h] [xbp-100h]
  __int128 v16; // [xsp+30h] [xbp-F0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-D8h] BYREF

  v4 = objc_retain(a3);
  v5 = -[ipp_t init](self, "init");
  if ( v5 )
  {
    v15 = 0u;
    v16 = 0u;
    v13 = 0u;
    v14 = 0u;
    v6 = objc_retain(v4);
    v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
    if ( v7 )
    {
      v8 = *(_QWORD *)v14;
      do
      {
        v9 = 0LL;
        do
        {
          if ( *(_QWORD *)v14 != v8 )
            objc_enumerationMutation(v6);
          attrs = v5->_attrs;
          v11 = objc_msgSend(*(id *)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)v9), "copy", (_QWORD)v13);
          -[NSMutableArray addObject:](attrs, "addObject:", v11);
          objc_release(v11);
          v9 = (char *)v9 + 1;
        }
        while ( v7 != v9 );
        v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
      }
      while ( v7 );
    }
    objc_release(v6);
  }
  objc_release(v4);
  return v5;
}