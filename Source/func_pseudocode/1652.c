-[DeviceFinderTabContainerViewController barChoiceForIdentifier:]
id __cdecl -[DeviceFinderTabContainerViewController barChoiceForIdentifier:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  id v5; // x21
  void *v6; // x0
  void *v7; // x23
  __int64 v8; // x22
  void *i; // x20
  void *v10; // x24
  void *v11; // x25
  void *v12; // x26
  void *v13; // x27
  unsigned __int8 v14; // w28
  id v15; // x24
  NSArray *obj; // [xsp+0h] [xbp-130h]
  id v18; // [xsp+8h] [xbp-128h]
  __int128 v19; // [xsp+10h] [xbp-120h] BYREF
  __int128 v20; // [xsp+20h] [xbp-110h]
  __int128 v21; // [xsp+30h] [xbp-100h]
  __int128 v22; // [xsp+40h] [xbp-F0h]
  _BYTE v23[128]; // [xsp+50h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v4 = objc_retain(a3);
  v18 = objc_retainAutoreleasedReturnValue(
          -[DeviceFinderTabContainerViewController cloudIdentifierForIdentifier:](
            self,
            "cloudIdentifierForIdentifier:",
            v4));
  v5 = objc_retainAutoreleasedReturnValue(
         -[DeviceFinderTabContainerViewController errorIdentifierForIdentifier:](
           self,
           "errorIdentifierForIdentifier:",
           v4));
  v19 = 0u;
  v20 = 0u;
  v21 = 0u;
  v22 = 0u;
  obj = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController barChoices](self, "barChoices"));
  v6 = -[NSArray countByEnumeratingWithState:objects:count:](
         obj,
         "countByEnumeratingWithState:objects:count:",
         &v19,
         v23,
         16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v20;
    while ( 2 )
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v20 != v8 )
          objc_enumerationMutation(obj);
        v10 = *(void **)(*((_QWORD *)&v19 + 1) + 8LL * (_QWORD)i);
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "identifier"));
        if ( ((unsigned int)objc_msgSend(v11, "isEqualToString:", v4) & 1) != 0 )
          goto LABEL_14;
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "identifier"));
        if ( (unsigned int)objc_msgSend(v12, "isEqualToString:", v18) )
        {
          objc_release(v12);
LABEL_14:
          objc_release(v11);
LABEL_15:
          v15 = objc_retain(v10);
          goto LABEL_16;
        }
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "identifier"));
        v14 = (unsigned __int8)objc_msgSend(v13, "isEqualToString:", v5);
        objc_release(v13);
        objc_release(v12);
        objc_release(v11);
        if ( (v14 & 1) != 0 )
          goto LABEL_15;
      }
      v7 = -[NSArray countByEnumeratingWithState:objects:count:](
             obj,
             "countByEnumeratingWithState:objects:count:",
             &v19,
             v23,
             16LL);
      v15 = 0LL;
      if ( v7 )
        continue;
      break;
    }
  }
  else
  {
    v15 = 0LL;
  }
LABEL_16:
  objc_release(obj);
  objc_release(v5);
  objc_release(v18);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}