-[EAFirmwareUpdater assetWithMaxVersion:]
id __cdecl -[EAFirmwareUpdater assetWithMaxVersion:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  void *v4; // x0
  void *v5; // x21
  void *v6; // x23
  void *v7; // x24
  __int64 v8; // x22
  void *i; // x25
  void *v10; // x26
  void *v11; // x0
  void *v12; // x20
  void *v13; // x0
  void *v14; // x27
  void *v15; // x0
  void *v16; // x28
  void *v17; // x0
  void *v18; // x19
  void *v19; // x0
  void *v20; // x0
  void *v22; // [xsp+0h] [xbp-140h]
  unsigned __int128 v23; // [xsp+8h] [xbp-138h]
  id obj; // [xsp+18h] [xbp-128h]
  __int128 v25; // [xsp+20h] [xbp-120h] BYREF
  __int128 v26; // [xsp+30h] [xbp-110h]
  __int128 v27; // [xsp+40h] [xbp-100h]
  __int128 v28; // [xsp+50h] [xbp-F0h]
  _BYTE v29[128]; // [xsp+60h] [xbp-E0h] BYREF

  if ( !a3 )
    return 0LL;
  v27 = 0u;
  v28 = 0u;
  v25 = 0u;
  v26 = 0u;
  v4 = objc_msgSend(a3, "countByEnumeratingWithState:objects:count:", &v25, v29, 16LL);
  if ( !v4 )
    return 0LL;
  v5 = v4;
  v22 = 0LL;
  v23 = 0uLL;
  v6 = 0LL;
  obj = a3;
  v7 = 0LL;
  v8 = *(_QWORD *)v26;
  do
  {
    for ( i = 0LL; i != v5; i = (char *)i + 1 )
    {
      if ( *(_QWORD *)v26 != v8 )
        objc_enumerationMutation(obj);
      v10 = *(void **)(*((_QWORD *)&v25 + 1) + 8LL * (_QWORD)i);
      v11 = objc_msgSend(v10, "attributes", v22);
      if ( v11 )
      {
        v12 = v11;
        v13 = objc_msgSend(v11, "objectForKey:", CFSTR("FirmwareVersionMajor"));
        if ( v13 )
        {
          v14 = objc_msgSend(v13, "unsignedLongLongValue");
          v15 = objc_msgSend(v12, "objectForKey:", CFSTR("FirmwareVersionMinor"));
          if ( v15 )
          {
            v16 = objc_msgSend(v15, "unsignedLongLongValue");
            v17 = objc_msgSend(v12, "objectForKey:", CFSTR("FirmwareVersionRelease"));
            if ( v17 )
            {
              v18 = objc_msgSend(v17, "unsignedLongLongValue");
              v19 = objc_msgSend(v12, "objectForKey:", CFSTR("FormatVersion"));
              if ( v19 )
              {
                v20 = objc_msgSend(v19, "unsignedLongLongValue");
                if ( v20 >= v7
                  && (v14 > v6 || v14 == v6 && __PAIR128__((unsigned __int64)v16, (unsigned __int64)v18) > v23) )
                {
                  v22 = v10;
                  *(_QWORD *)&v23 = v18;
                  v6 = v14;
                  *((_QWORD *)&v23 + 1) = v16;
                  v7 = v20;
                }
              }
            }
          }
        }
      }
    }
    v5 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v25, v29, 16LL);
  }
  while ( v5 );
  return v22;
}