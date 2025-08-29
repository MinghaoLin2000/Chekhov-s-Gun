+[PAMediaConversionServiceResourceURLCollection getSignatureString:filenameSummary:forDictionaryRepresentation:]
bool __cdecl +[PAMediaConversionServiceResourceURLCollection getSignatureString:filenameSummary:forDictionaryRepresentation:](
        id a1,
        SEL a2,
        id *a3,
        id *a4,
        id a5)
{
  id v9; // x26
  void *v10; // x22
  void *v11; // x24
  void *v12; // x19
  void *v13; // x0
  void *v14; // x24
  __int64 v15; // x28
  __int64 v16; // x21
  void *i; // x23
  __int64 v18; // x2
  id v19; // x20
  void *v20; // x26
  unsigned int v21; // w27
  id v22; // x25
  bool v23; // w20
  NSAssertionHandler *v25; // x24
  id *v26; // [xsp+10h] [xbp-150h]
  id *v27; // [xsp+18h] [xbp-148h]
  char v28; // [xsp+24h] [xbp-13Ch]
  id v29; // [xsp+30h] [xbp-130h] BYREF
  __int64 v30; // [xsp+38h] [xbp-128h] BYREF
  __int128 v31; // [xsp+40h] [xbp-120h] BYREF
  __int128 v32; // [xsp+50h] [xbp-110h]
  __int128 v33; // [xsp+60h] [xbp-100h]
  __int128 v34; // [xsp+70h] [xbp-F0h]
  _BYTE v35[128]; // [xsp+80h] [xbp-E0h] BYREF

  v9 = objc_retain(a5);
  if ( !v9 )
  {
    v25 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v25,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      200LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("bookmarkDictionary"));
    objc_release(v25);
  }
  v10 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v31 = 0u;
  v32 = 0u;
  v33 = 0u;
  v34 = 0u;
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "allKeys"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "sortedArrayUsingComparator:", &stru_100040E80));
  objc_release(v11);
  v13 = objc_msgSend(v12, "countByEnumeratingWithState:objects:count:", &v31, v35, 16LL);
  if ( v13 )
  {
    v14 = v13;
    v26 = a3;
    v27 = a4;
    v15 = 0LL;
    v16 = *(_QWORD *)v32;
    v28 = 1;
    do
    {
      for ( i = 0LL; i != v14; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v32 != v16 )
          objc_enumerationMutation(v12);
        v18 = *(_QWORD *)(*((_QWORD *)&v31 + 1) + 8LL * (_QWORD)i);
        v29 = 0LL;
        v30 = 0LL;
        v19 = v9;
        v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", v18));
        v21 = +[PAMediaConversionServiceResourceURLReference getPathHash:lastPathComponent:forDictionaryRepresentation:](
                &OBJC_CLASS___PAMediaConversionServiceResourceURLReference,
                "getPathHash:lastPathComponent:forDictionaryRepresentation:",
                &v30,
                &v29,
                v20);
        v22 = objc_retain(v29);
        objc_release(v20);
        if ( v21 )
        {
          v15 ^= v30;
          objc_msgSend(v10, "addObject:", v22);
        }
        else
        {
          v28 = 0;
        }
        objc_release(v22);
        v9 = v19;
      }
      v14 = objc_msgSend(v12, "countByEnumeratingWithState:objects:count:", &v31, v35, 16LL);
    }
    while ( v14 );
    objc_release(v12);
    a3 = v26;
    a4 = v27;
    if ( (v28 & 1) == 0 )
    {
      v23 = 0;
      goto LABEL_21;
    }
  }
  else
  {
    objc_release(v12);
    v15 = 0LL;
  }
  if ( a3 )
    *a3 = objc_autorelease(objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%lx"), v15)));
  if ( a4 )
    *a4 = objc_autorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "componentsJoinedByString:", CFSTR("|"))));
  v23 = 1;
LABEL_21:
  objc_release(v10);
  objc_release(v9);
  return v23;
}