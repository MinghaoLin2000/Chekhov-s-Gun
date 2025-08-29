+[PAMediaConversionServiceResourceURLCollection collectionForBookmarkDataDictionaryRepresentation:accessProvider:error:]
id __cdecl +[PAMediaConversionServiceResourceURLCollection collectionForBookmarkDataDictionaryRepresentation:accessProvider:error:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v9; // x19
  __int64 v10; // x1
  id v11; // x20
  id v12; // x22
  id v13; // x23
  NSAssertionHandler *v15; // x24
  _QWORD v16[4]; // [xsp+8h] [xbp-B8h] BYREF
  id v17; // [xsp+28h] [xbp-98h]
  __int64 *v18; // [xsp+30h] [xbp-90h]
  __int64 *v19; // [xsp+38h] [xbp-88h]
  __int64 v20; // [xsp+40h] [xbp-80h] BYREF
  __int64 *v21; // [xsp+48h] [xbp-78h]
  __int64 v22; // [xsp+50h] [xbp-70h]
  char v23; // [xsp+58h] [xbp-68h]
  __int64 v24; // [xsp+60h] [xbp-60h] BYREF
  __int64 *v25; // [xsp+68h] [xbp-58h]
  __int64 v26; // [xsp+70h] [xbp-50h]
  __int64 (__fastcall *v27)(); // [xsp+78h] [xbp-48h]
  __int64 (__fastcall *v28)(); // [xsp+80h] [xbp-40h]
  id v29; // [xsp+88h] [xbp-38h]
  __int64 vars8; // [xsp+C8h] [xbp+8h]

  v9 = objc_retain(a3);
  v11 = objc_retain(a4);
  if ( !v9 )
  {
    v15 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v15,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      169LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("bookmarkDictionary"));
    objc_release(v15);
  }
  v24 = 0LL;
  v25 = &v24;
  v26 = 0x3032000000LL;
  v27 = sub_100008FD8;
  v28 = sub_100008FE8;
  v29 = 0LL;
  v20 = 0LL;
  v21 = &v20;
  v22 = 0x2020000000LL;
  v23 = 0;
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_10000BB00;
  v16[3] = &unk_100040E50;
  v18 = &v24;
  v12 = objc_retain((id)objc_opt_new(a1, v10));
  v17 = v12;
  v19 = &v20;
  objc_msgSend(v9, "enumerateKeysAndObjectsUsingBlock:", v16);
  if ( *((_BYTE *)v21 + 24) )
  {
    v13 = 0LL;
    if ( a5 )
      *a5 = objc_retainAutorelease((id)v25[5]);
  }
  else
  {
    if ( v11 )
      objc_msgSend(v12, "setAccessProviderDelegate:", v11);
    v13 = objc_retain(v12);
  }
  objc_release(v17);
  _Block_object_dispose(&v20, 8);
  _Block_object_dispose(&v24, 8);
  objc_release(v29);
  objc_release(v12);
  objc_release(v11);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}