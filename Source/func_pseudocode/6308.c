+[PAMediaConversionServiceSharedUtilitiesServiceSide temporaryDestinationURLCollectionForFinalDestinationURLCollection:inParentDirectoryURL:]
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide temporaryDestinationURLCollectionForFinalDestinationURLCollection:inParentDirectoryURL:](
        id a1,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x0
  __int64 v9; // x1
  void *v10; // x20
  id v11; // x21
  id v12; // x20
  void *v13; // x22
  id v14; // x21
  NSAssertionHandler *v16; // x23
  NSAssertionHandler *v17; // x23
  _QWORD v18[4]; // [xsp+10h] [xbp-60h] BYREF
  id v19; // [xsp+30h] [xbp-40h]
  id v20; // [xsp+38h] [xbp-38h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v10 = v8;
  if ( !v7 )
  {
    v16 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v16,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      2110LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("finalDestinationURLCollection"));
    objc_release(v16);
    if ( v10 )
      goto LABEL_3;
LABEL_5:
    v17 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v17,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      2111LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("parentDirectoryURL"));
    objc_release(v17);
    goto LABEL_3;
  }
  if ( !v8 )
    goto LABEL_5;
LABEL_3:
  v18[0] = _NSConcreteStackBlock;
  v18[1] = 3254779904LL;
  v18[2] = sub_1000129EC;
  v18[3] = &unk_100041440;
  v19 = v10;
  v11 = objc_retain((id)objc_opt_new(&OBJC_CLASS___PAMediaConversionServiceResourceURLCollection, v9));
  v20 = v11;
  v12 = objc_retain(v10);
  objc_msgSend(v7, "enumerateResourceURLs:", v18);
  v13 = v20;
  v14 = objc_retainAutoreleaseReturnValue(v11);
  objc_release(v13);
  objc_release(v19);
  objc_release(v14);
  objc_release(v12);
  objc_release(v7);
  return v14;
}