+[UINSSystemPreferencesTCCSetting settingsForApplicationWithBundleIdentifier:]
id __cdecl +[UINSSystemPreferencesTCCSetting settingsForApplicationWithBundleIdentifier:](id a1, SEL a2, id a3)
{
  id v3; // x19
  id v4; // x20
  void *v5; // x23
  void *v6; // x21
  id v7; // x22
  void *v8; // x0
  void *v9; // x23
  __int64 v10; // x26
  void *i; // x28
  void *v12; // x24
  void *v13; // x25
  __int128 v15; // [xsp+0h] [xbp-120h] BYREF
  __int128 v16; // [xsp+10h] [xbp-110h]
  __int128 v17; // [xsp+20h] [xbp-100h]
  __int128 v18; // [xsp+30h] [xbp-F0h]
  _BYTE v19[128]; // [xsp+40h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(
         +[UINSSystemPreferencesTCCSetting _supportedSettings](
           &OBJC_CLASS___UINSSystemPreferencesTCCSetting,
           "_supportedSettings"));
  if ( qword_100011BB8 != -1 )
    dispatch_once(&qword_100011BB8, &stru_10000C310);
  if ( byte_100011B90 )
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "allValues"));
  }
  else
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    v7 = objc_retainAutoreleasedReturnValue((id)TCCAccessCopyInformationForBundleId(v3));
    v15 = 0u;
    v16 = 0u;
    v17 = 0u;
    v18 = 0u;
    v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
    if ( v8 )
    {
      v9 = v8;
      v10 = *(_QWORD *)v16;
      do
      {
        for ( i = 0LL; i != v9; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v16 != v10 )
            objc_enumerationMutation(v7);
          v12 = objc_retainAutoreleasedReturnValue(
                  objc_msgSend(
                    *(id *)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)i),
                    "objectForKeyedSubscript:",
                    kTCCInfoService));
          v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", v12));
          if ( v13 )
            objc_msgSend(v6, "addObject:", v13);
          objc_release(v13);
          objc_release(v12);
        }
        v9 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
      }
      while ( v9 );
    }
    v5 = objc_msgSend(v6, "copy");
    objc_release(v7);
    objc_release(v6);
  }
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}