-[PAMediaConversionServiceResourceURLCollection containsAnyRole:]
bool __cdecl -[PAMediaConversionServiceResourceURLCollection containsAnyRole:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id a3)
{
  id v5; // x20
  id v6; // x20
  void *v7; // x0
  void *v8; // x21
  __int64 v9; // x23
  void *i; // x24
  void *v11; // x22
  bool v12; // w19
  NSAssertionHandler *v14; // x22
  __int128 v15; // [xsp+10h] [xbp-110h] BYREF
  __int128 v16; // [xsp+20h] [xbp-100h]
  __int128 v17; // [xsp+30h] [xbp-F0h]
  __int128 v18; // [xsp+40h] [xbp-E0h]
  _BYTE v19[128]; // [xsp+58h] [xbp-C8h] BYREF

  v5 = objc_retain(a3);
  if ( !objc_msgSend(v5, "count") )
  {
    v14 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v14,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      294LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("[roles count]"));
    objc_release(v14);
  }
  v17 = 0u;
  v18 = 0u;
  v15 = 0u;
  v16 = 0u;
  v6 = objc_retain(v5);
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v16;
    while ( 2 )
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v16 != v9 )
          objc_enumerationMutation(v6);
        v11 = objc_retainAutoreleasedReturnValue(
                -[NSMutableDictionary objectForKeyedSubscript:](
                  self->_urlReferencesByRole,
                  "objectForKeyedSubscript:",
                  *(_QWORD *)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)i)));
        objc_release(v11);
        if ( v11 )
        {
          v12 = 1;
          goto LABEL_13;
        }
      }
      v8 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
      if ( v8 )
        continue;
      break;
    }
  }
  v12 = 0;
LABEL_13:
  objc_release(v6);
  objc_release(v6);
  return v12;
}