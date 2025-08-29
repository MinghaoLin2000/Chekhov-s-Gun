-[TSUExtendedAttributeCollection setAttributeCollectionToPath:intent:options:forRemoval:error:]
bool __cdecl -[TSUExtendedAttributeCollection setAttributeCollectionToPath:intent:options:forRemoval:error:](
        TSUExtendedAttributeCollection *self,
        SEL a2,
        id a3,
        unsigned int a4,
        int a5,
        bool a6,
        id *a7)
{
  id v12; // x19
  void *v13; // x0
  NSMutableDictionary *attributes; // x8
  int v15; // w8
  bool v16; // w21
  _QWORD v18[7]; // [xsp+8h] [xbp-C8h] BYREF
  unsigned int v19; // [xsp+40h] [xbp-90h]
  int v20; // [xsp+44h] [xbp-8Ch]
  bool v21; // [xsp+48h] [xbp-88h]
  __int64 v22; // [xsp+50h] [xbp-80h] BYREF
  __int64 *v23; // [xsp+58h] [xbp-78h]
  __int64 v24; // [xsp+60h] [xbp-70h]
  __int64 (__fastcall *v25)(); // [xsp+68h] [xbp-68h]
  __int64 (__fastcall *v26)(); // [xsp+70h] [xbp-60h]
  id v27; // [xsp+78h] [xbp-58h]
  __int64 v28; // [xsp+80h] [xbp-50h] BYREF
  __int64 *v29; // [xsp+88h] [xbp-48h]
  __int64 v30; // [xsp+90h] [xbp-40h]
  char v31; // [xsp+98h] [xbp-38h]

  v12 = objc_retainAutorelease(objc_retain(a3));
  v13 = objc_msgSend(v12, "fileSystemRepresentation");
  if ( v13 )
  {
    v28 = 0LL;
    v29 = &v28;
    v30 = 0x2020000000LL;
    v31 = 1;
    v22 = 0LL;
    v23 = &v22;
    v24 = 0x3032000000LL;
    v25 = sub_10012F338;
    v26 = sub_10012F348;
    v27 = 0LL;
    attributes = self->_attributes;
    v18[0] = _NSConcreteStackBlock;
    v18[1] = 3254779904LL;
    v18[2] = sub_10012F350;
    v18[3] = &unk_1001DCEF8;
    v21 = a6;
    v18[5] = &v28;
    v18[6] = v13;
    v19 = a4;
    v20 = a5;
    v18[4] = &v22;
    -[NSMutableDictionary enumerateKeysAndObjectsUsingBlock:](attributes, "enumerateKeysAndObjectsUsingBlock:", v18);
    v15 = *((unsigned __int8 *)v29 + 24);
    if ( a7 && !*((_BYTE *)v29 + 24) )
    {
      *a7 = objc_retainAutorelease((id)v23[5]);
      v15 = *((unsigned __int8 *)v29 + 24);
    }
    v16 = v15 != 0;
    _Block_object_dispose(&v22, 8);
    objc_release(v27);
    _Block_object_dispose(&v28, 8);
  }
  else
  {
    v16 = 0;
    if ( a7 )
      *a7 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                  2LL,
                  0LL)));
  }
  objc_release(v12);
  return v16;
}