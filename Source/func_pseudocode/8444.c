-[SUContainedSoftwareUpdateController _predicateWithTags:]
id __cdecl -[SUContainedSoftwareUpdateController _predicateWithTags:](
        SUContainedSoftwareUpdateController *self,
        SEL a2,
        id a3)
{
  id v3; // x20
  void *v4; // x19
  id v5; // x20
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x24
  void *i; // x26
  NSPredicate *v10; // x23
  void *v11; // x21
  __int128 v13; // [xsp+10h] [xbp-120h] BYREF
  __int128 v14; // [xsp+20h] [xbp-110h]
  __int128 v15; // [xsp+30h] [xbp-100h]
  __int128 v16; // [xsp+40h] [xbp-F0h]
  _BYTE v17[128]; // [xsp+58h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v5 = objc_retain(v3);
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v14;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v14 != v8 )
          objc_enumerationMutation(v5);
        v10 = objc_retainAutoreleasedReturnValue(
                +[NSPredicate predicateWithFormat:](
                  &OBJC_CLASS___NSPredicate,
                  "predicateWithFormat:",
                  CFSTR("%@ in tags"),
                  *(_QWORD *)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i)));
        objc_msgSend(v4, "addObject:", v10);
        objc_release(v10);
      }
      v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  v11 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSCompoundPredicate), "initWithType:subpredicates:", 1LL, v4);
  objc_release(v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}