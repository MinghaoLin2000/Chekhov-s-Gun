-[LegacyAudioAccessory getMatchingEntryForEAIdentifier:]
id __cdecl -[LegacyAudioAccessory getMatchingEntryForEAIdentifier:](LegacyAudioAccessory *self, SEL a2, id a3)
{
  id v3; // x19
  LegacyAudioController *v4; // x21
  NSArray *v5; // x20
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x26
  void *i; // x27
  void *v10; // x23
  void *v11; // x24
  unsigned __int8 v12; // w25
  id v13; // x21
  __int128 v15; // [xsp+0h] [xbp-120h] BYREF
  __int128 v16; // [xsp+10h] [xbp-110h]
  __int128 v17; // [xsp+20h] [xbp-100h]
  __int128 v18; // [xsp+30h] [xbp-F0h]
  _BYTE v19[128]; // [xsp+48h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v3 = objc_retain(a3);
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v4 = objc_retainAutoreleasedReturnValue(+[LegacyAudioController sharedInstance](&OBJC_CLASS___LegacyAudioController, "sharedInstance", 0LL));
  v5 = objc_retainAutoreleasedReturnValue(-[LegacyAudioController matchingAccessoriesList](v4, "matchingAccessoriesList"));
  objc_release(v4);
  v6 = -[NSArray countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v15,
         v19,
         16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v16;
    while ( 2 )
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v16 != v8 )
          objc_enumerationMutation(v5);
        v10 = *(void **)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)i);
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKeyedSubscript:", CFSTR("DeviceClass")));
        v12 = (unsigned __int8)objc_msgSend(v11, "isEqualToString:", v3);
        objc_release(v11);
        if ( (v12 & 1) != 0 )
        {
          v13 = objc_retain(v10);
          goto LABEL_11;
        }
      }
      v7 = -[NSArray countByEnumeratingWithState:objects:count:](
             v5,
             "countByEnumeratingWithState:objects:count:",
             &v15,
             v19,
             16LL);
      if ( v7 )
        continue;
      break;
    }
  }
  v13 = 0LL;
LABEL_11:
  objc_release(v5);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}