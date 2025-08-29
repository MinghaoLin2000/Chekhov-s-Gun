+[EAFirmwareUpdater findAccessoryWithProtocolString:serialNum:]
id __cdecl +[EAFirmwareUpdater findAccessoryWithProtocolString:serialNum:](id a1, SEL a2, id a3, id a4)
{
  EAAccessoryManager *v6; // x0
  NSArray *v7; // x0
  NSArray *v8; // x21
  void *v9; // x0
  void *v10; // x22
  void *i; // x28
  void *v12; // x23
  void *v13; // x0
  void *v14; // x24
  void *v15; // x0
  void *v16; // x25
  __int64 v17; // x21
  __int64 v18; // x26
  NSArray *obj; // [xsp+10h] [xbp-1F0h]
  __int64 v21; // [xsp+18h] [xbp-1E8h]
  __int128 v22; // [xsp+20h] [xbp-1E0h] BYREF
  __int128 v23; // [xsp+30h] [xbp-1D0h]
  __int128 v24; // [xsp+40h] [xbp-1C0h]
  __int128 v25; // [xsp+50h] [xbp-1B0h]
  __int128 v26; // [xsp+60h] [xbp-1A0h] BYREF
  __int128 v27; // [xsp+70h] [xbp-190h]
  __int128 v28; // [xsp+80h] [xbp-180h]
  __int128 v29; // [xsp+90h] [xbp-170h]
  _BYTE v30[128]; // [xsp+A0h] [xbp-160h] BYREF
  _BYTE v31[128]; // [xsp+120h] [xbp-E0h] BYREF

  if ( a3 )
  {
    v6 = +[EAAccessoryManager sharedAccessoryManager](&OBJC_CLASS___EAAccessoryManager, "sharedAccessoryManager");
    if ( v6 )
    {
      v7 = -[EAAccessoryManager connectedAccessories](v6, "connectedAccessories");
      if ( v7 )
      {
        v8 = v7;
        if ( -[NSArray count](v7, "count") )
        {
          v28 = 0u;
          v29 = 0u;
          v26 = 0u;
          v27 = 0u;
          v9 = -[NSArray countByEnumeratingWithState:objects:count:](
                 v8,
                 "countByEnumeratingWithState:objects:count:",
                 &v26,
                 v31,
                 16LL);
          if ( v9 )
          {
            v10 = v9;
            obj = v8;
            v21 = *(_QWORD *)v27;
            do
            {
              for ( i = 0LL; i != v10; i = (char *)i + 1 )
              {
                if ( *(_QWORD *)v27 != v21 )
                  objc_enumerationMutation(obj);
                v12 = *(void **)(*((_QWORD *)&v26 + 1) + 8LL * (_QWORD)i);
                v13 = objc_msgSend(v12, "protocolStrings");
                if ( v13 )
                {
                  v14 = v13;
                  v24 = 0u;
                  v25 = 0u;
                  v22 = 0u;
                  v23 = 0u;
                  v15 = objc_msgSend(v13, "countByEnumeratingWithState:objects:count:", &v22, v30, 16LL);
                  if ( v15 )
                  {
                    v16 = v15;
                    v17 = *(_QWORD *)v23;
LABEL_13:
                    v18 = 0LL;
                    while ( 1 )
                    {
                      if ( *(_QWORD *)v23 != v17 )
                        objc_enumerationMutation(v14);
                      if ( objc_msgSend(*(id *)(*((_QWORD *)&v22 + 1) + 8 * v18), "rangeOfString:", a3) != (void *)0x7FFFFFFFFFFFFFFFLL
                        && (!a4
                         || ((unsigned int)objc_msgSend(a4, "isEqualToString:", objc_msgSend(v12, "serialNumber")) & 1) != 0) )
                      {
                        break;
                      }
                      if ( v16 == (void *)++v18 )
                      {
                        v16 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v22, v30, 16LL);
                        if ( v16 )
                          goto LABEL_13;
                        goto LABEL_23;
                      }
                    }
                    if ( v12 )
                      return v12;
                  }
                }
LABEL_23:
                ;
              }
              v10 = -[NSArray countByEnumeratingWithState:objects:count:](
                      obj,
                      "countByEnumeratingWithState:objects:count:",
                      &v26,
                      v31,
                      16LL);
            }
            while ( v10 );
          }
        }
      }
    }
  }
  NSLog(
    &CFSTR("%s() No EAAccessory found for protocol=%@").isa,
    a2,
    "+[EAFirmwareUpdater findAccessoryWithProtocolString:serialNum:]",
    a3);
  return 0LL;
}