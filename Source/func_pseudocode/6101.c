-[PAMediaConversionServiceResourceURLCollection removeExistingEmptyFilesWithError:]
bool __cdecl -[PAMediaConversionServiceResourceURLCollection removeExistingEmptyFilesWithError:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id *a3)
{
  NSFileManager *v5; // x0
  NSMutableDictionary *urlReferencesByRole; // x21
  NSFileManager *v7; // x20
  int v8; // w21
  _QWORD v10[4]; // [xsp+8h] [xbp-B8h] BYREF
  id v11; // [xsp+28h] [xbp-98h]
  __int64 *v12; // [xsp+30h] [xbp-90h]
  __int64 *v13; // [xsp+38h] [xbp-88h]
  __int64 v14; // [xsp+40h] [xbp-80h] BYREF
  __int64 *v15; // [xsp+48h] [xbp-78h]
  __int64 v16; // [xsp+50h] [xbp-70h]
  char v17; // [xsp+58h] [xbp-68h]
  __int64 v18; // [xsp+60h] [xbp-60h] BYREF
  __int64 *v19; // [xsp+68h] [xbp-58h]
  __int64 v20; // [xsp+70h] [xbp-50h]
  __int64 (__fastcall *v21)(); // [xsp+78h] [xbp-48h]
  __int64 (__fastcall *v22)(); // [xsp+80h] [xbp-40h]
  id v23; // [xsp+88h] [xbp-38h]

  v18 = 0LL;
  v19 = &v18;
  v20 = 0x3032000000LL;
  v21 = sub_100008FD8;
  v22 = sub_100008FE8;
  v23 = 0LL;
  v14 = 0LL;
  v15 = &v14;
  v16 = 0x2020000000LL;
  v17 = 0;
  v5 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  urlReferencesByRole = self->_urlReferencesByRole;
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_100009D18;
  v10[3] = &unk_100040ED0;
  v12 = &v18;
  v13 = &v14;
  v7 = objc_retain(v5);
  v11 = v7;
  -[NSMutableDictionary enumerateKeysAndObjectsUsingBlock:](
    urlReferencesByRole,
    "enumerateKeysAndObjectsUsingBlock:",
    v10);
  v8 = *((unsigned __int8 *)v15 + 24);
  if ( a3 && *((_BYTE *)v15 + 24) )
    *a3 = objc_retainAutorelease((id)v19[5]);
  objc_release(v11);
  objc_release(v7);
  _Block_object_dispose(&v14, 8);
  _Block_object_dispose(&v18, 8);
  objc_release(v23);
  return v8 == 0;
}