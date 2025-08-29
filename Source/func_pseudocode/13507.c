-[NSString tsu_stringByApplyingSubstitutions:]
id __cdecl -[NSString tsu_stringByApplyingSubstitutions:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  NSMutableDictionary *v6; // x21
  void *v7; // x22
  void *v8; // x23
  id v9; // x22
  void *v10; // x0
  void *v11; // x23
  __int64 v12; // x26
  void *i; // x28
  void *v14; // x25
  void *v15; // x24
  void *v16; // x0
  __int64 v17; // x1
  bool v18; // zf
  void *v19; // x23
  __int128 v21; // [xsp+0h] [xbp-150h] BYREF
  __int128 v22; // [xsp+10h] [xbp-140h]
  __int128 v23; // [xsp+20h] [xbp-130h]
  __int128 v24; // [xsp+30h] [xbp-120h]
  _QWORD v25[6]; // [xsp+40h] [xbp-110h] BYREF
  _BYTE v26[128]; // [xsp+70h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+158h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = -[NSString mutableCopy](self, "mutableCopy");
  v6 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  v25[0] = _NSConcreteStackBlock;
  v25[1] = 3254779904LL;
  v25[2] = sub_10015FF7C;
  v25[3] = &unk_1001DF458;
  v25[4] = v5;
  v25[5] = v6;
  objc_msgSend(v4, "enumerateKeysAndObjectsUsingBlock:", v25);
  v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allKeys](v6, "allKeys"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "sortedArrayUsingComparator:", &stru_1001DF4A8));
  objc_release(v7);
  v23 = 0u;
  v24 = 0u;
  v21 = 0u;
  v22 = 0u;
  v9 = objc_retain(v8);
  v10 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v21, v26, 16LL);
  if ( v10 )
  {
    v11 = v10;
    v12 = *(_QWORD *)v22;
    do
    {
      for ( i = 0LL; i != v11; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v22 != v12 )
          objc_enumerationMutation(v9);
        v14 = *(void **)(*((_QWORD *)&v21 + 1) + 8LL * (_QWORD)i);
        v15 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v6, "objectForKeyedSubscript:", v14, (_QWORD)v21));
        v16 = objc_msgSend(v14, "rangeValue");
        if ( v15 )
          v18 = v16 == (void *)0x7FFFFFFFFFFFFFFFLL;
        else
          v18 = 1;
        if ( !v18 )
          objc_msgSend(v5, "replaceCharactersInRange:withString:", v16, v17, v15);
        objc_release(v15);
      }
      v11 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v21, v26, 16LL);
    }
    while ( v11 );
  }
  objc_release(v9);
  v19 = objc_msgSend(v5, "copy");
  objc_release(v9);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v19);
}