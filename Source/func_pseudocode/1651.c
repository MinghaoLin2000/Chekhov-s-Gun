-[DeviceFinderTabContainerViewController barChoiceForMenuItem:]
id __cdecl -[DeviceFinderTabContainerViewController barChoiceForMenuItem:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSArray *v5; // x20
  id v6; // x21
  __int64 v7; // x24
  void *i; // x25
  void *v9; // x22
  id v10; // x23
  __int128 v12; // [xsp+0h] [xbp-110h] BYREF
  __int128 v13; // [xsp+10h] [xbp-100h]
  __int128 v14; // [xsp+20h] [xbp-F0h]
  __int128 v15; // [xsp+30h] [xbp-E0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-C8h] BYREF
  __int64 vars8; // [xsp+118h] [xbp+8h]

  v4 = objc_retain(a3);
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController barChoices](self, "barChoices", 0LL));
  v6 = -[NSArray countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v12,
         v16,
         16LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)v13;
    while ( 2 )
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v13 != v7 )
          objc_enumerationMutation(v5);
        v9 = *(void **)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)i);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "menuRepresentation"));
        objc_release(v10);
        if ( v10 == v4 )
        {
          v6 = objc_retain(v9);
          goto LABEL_11;
        }
      }
      v6 = -[NSArray countByEnumeratingWithState:objects:count:](
             v5,
             "countByEnumeratingWithState:objects:count:",
             &v12,
             v16,
             16LL);
      if ( v6 )
        continue;
      break;
    }
  }
LABEL_11:
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}