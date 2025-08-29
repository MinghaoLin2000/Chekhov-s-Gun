-[UINSSystemPreferencesServiceViewController _usageForSetting:]
id __cdecl -[UINSSystemPreferencesServiceViewController _usageForSetting:](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x19
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x23
  void *i; // x25
  id v9; // x0
  void *v10; // x22
  __int128 v12; // [xsp+0h] [xbp-110h] BYREF
  __int128 v13; // [xsp+10h] [xbp-100h]
  __int128 v14; // [xsp+20h] [xbp-F0h]
  __int128 v15; // [xsp+30h] [xbp-E0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-C8h] BYREF
  __int64 vars8; // [xsp+118h] [xbp+8h]

  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v4 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "usageKeys")));
  v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v12, v16, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v13;
    while ( 2 )
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v13 != v7 )
          objc_enumerationMutation(v4);
        v9 = objc_retainAutoreleasedReturnValue(
               -[NSBundle objectForInfoDictionaryKey:](
                 self->_applicationBundle,
                 "objectForInfoDictionaryKey:",
                 *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)i),
                 (_QWORD)v12));
        if ( v9 )
        {
          v10 = v9;
          goto LABEL_11;
        }
      }
      v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v12, v16, 16LL);
      if ( v6 )
        continue;
      break;
    }
  }
  v10 = 0LL;
LABEL_11:
  objc_release(v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}