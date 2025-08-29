-[PrintInfoSet uniquedBrowseInfos]
id __cdecl -[PrintInfoSet uniquedBrowseInfos](PrintInfoSet *self, SEL a2)
{
  void *v3; // x19
  NSMutableArray *v4; // x20
  id v5; // x21
  void *v6; // x23
  __int64 v7; // x26
  void *i; // x27
  void *v9; // x24
  void *v10; // x25
  NSSet *v11; // x22
  __int128 v13; // [xsp+0h] [xbp-120h] BYREF
  __int128 v14; // [xsp+10h] [xbp-110h]
  __int128 v15; // [xsp+20h] [xbp-100h]
  __int128 v16; // [xsp+30h] [xbp-F0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allKeys](self->_uuidToPrinters, "allKeys"));
  v4 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  v15 = 0u;
  v16 = 0u;
  v13 = 0u;
  v14 = 0u;
  v5 = objc_retain(v3);
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)v14;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v14 != v7 )
          objc_enumerationMutation(v5);
        v9 = objc_retainAutoreleasedReturnValue(
               -[NSMutableDictionary objectForKeyedSubscript:](
                 self->_uuidToPrinters,
                 "objectForKeyedSubscript:",
                 *(_QWORD *)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i),
                 (_QWORD)v13));
        if ( objc_msgSend(v9, "count") )
        {
          v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "firstObject"));
          -[NSMutableArray addObject:](v4, "addObject:", v10);
          objc_release(v10);
        }
        objc_release(v9);
      }
      v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
    }
    while ( v6 );
  }
  objc_release(v5);
  v11 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v4));
  objc_release(v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}