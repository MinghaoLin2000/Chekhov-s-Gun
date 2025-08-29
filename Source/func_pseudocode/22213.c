-[QLSatellite updateCrashReporterMessage]
void __cdecl -[QLSatellite updateCrashReporterMessage](QLSatellite *self, SEL a2)
{
  NSMutableString *v3; // x19
  NSEnumerator *v4; // x20
  void *v5; // x0
  void *v6; // x22
  __int64 v7; // x25
  void *v8; // x26
  id v9; // x23
  void *v10; // x24
  __int128 v11; // [xsp+10h] [xbp-120h] BYREF
  __int128 v12; // [xsp+20h] [xbp-110h]
  __int128 v13; // [xsp+30h] [xbp-100h]
  __int128 v14; // [xsp+40h] [xbp-F0h]
  _BYTE v15[128]; // [xsp+58h] [xbp-D8h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSMutableString stringWithString:](
           &OBJC_CLASS___NSMutableString,
           "stringWithString:",
           CFSTR("qlmanage --diag")));
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v4 = objc_retainAutoreleasedReturnValue(-[NSMapTable objectEnumerator](self->_requests, "objectEnumerator"));
  v5 = -[NSEnumerator countByEnumeratingWithState:objects:count:](
         v4,
         "countByEnumeratingWithState:objects:count:",
         &v11,
         v15,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v12;
    do
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)v12 != v7 )
          objc_enumerationMutation(v4);
        v9 = objc_retainAutoreleasedReturnValue((id)_QLRequestGetObject(*(_QWORD *)(*((_QWORD *)&v11 + 1)
                                                                                  + 8LL * (_QWORD)v8)));
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "mangledID"));
        -[NSMutableString appendFormat:](v3, "appendFormat:", CFSTR(" %@"), v10);
        objc_release(v10);
        objc_release(v9);
        v8 = (char *)v8 + 1;
      }
      while ( v6 != v8 );
      v6 = -[NSEnumerator countByEnumeratingWithState:objects:count:](
             v4,
             "countByEnumeratingWithState:objects:count:",
             &v11,
             v15,
             16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
  -[NSMutableString getCString:maxLength:encoding:](v3, "getCString:maxLength:encoding:", &unk_10000C470, 512LL, 4LL);
  qword_10000C440 = (__int64)&unk_10000C470;
  objc_release(v3);
}