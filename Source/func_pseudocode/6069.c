-[PAMediaConversionServiceResourceURLCollectionAccessProvider initWithOptions:]
PAMediaConversionServiceResourceURLCollectionAccessProvider *__cdecl -[PAMediaConversionServiceResourceURLCollectionAccessProvider initWithOptions:](
        PAMediaConversionServiceResourceURLCollectionAccessProvider *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  PAMediaConversionServiceResourceURLCollectionAccessProvider *v5; // x20
  void *v6; // x21
  void *v7; // x22
  void *v8; // x21
  void *v9; // x0
  objc_class *v10; // x21
  id v11; // x21
  id *v12; // x24
  void *v13; // x0
  void *v14; // x0
  id v15; // x22
  IMMessagesBlastDoorInterface *v16; // x0
  IMMessagesBlastDoorInterface *blastdoorInterface; // x8
  PAMediaConversionServiceResourceURLCollectionAccessProvider *result; // x0
  NSAssertionHandler *v19; // x19
  NSString *v20; // x20
  objc_super v21; // [xsp+8h] [xbp-88h] BYREF
  void **v22; // [xsp+18h] [xbp-78h] BYREF
  __int64 v23; // [xsp+20h] [xbp-70h]
  __int64 (__fastcall *v24)(); // [xsp+28h] [xbp-68h]
  void *v25; // [xsp+30h] [xbp-60h]
  __int64 *v26; // [xsp+38h] [xbp-58h]
  __int64 v27; // [xsp+40h] [xbp-50h] BYREF
  __int64 *v28; // [xsp+48h] [xbp-48h]
  __int64 v29; // [xsp+50h] [xbp-40h]
  __int64 v30; // [xsp+58h] [xbp-38h]

  v4 = objc_retain(a3);
  v21.receiver = self;
  v21.super_class = (Class)&OBJC_CLASS___PAMediaConversionServiceResourceURLCollectionAccessProvider;
  v5 = -[PAMediaConversionServiceResourceURLCollectionAccessProvider init](&v21, "init");
  if ( !v5 )
    goto LABEL_12;
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionBlastDoorMediaIsImageKey")));
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionBlastDoorMediaIsImageKey")));
    v5->_isImageMedia = (unsigned __int8)objc_msgSend(v7, "boolValue");
    objc_release(v7);
  }
  else
  {
    v5->_isImageMedia = 1;
  }
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionRequiresBlastDoorAccessKey")));
  v5->_blastDoorAccessRequired = (unsigned __int8)objc_msgSend(v8, "boolValue");
  objc_release(v8);
  if ( !v5->_blastDoorAccessRequired )
    goto LABEL_12;
  v27 = 0LL;
  v28 = &v27;
  v29 = 0x2050000000LL;
  v9 = (void *)qword_10004A038;
  v30 = qword_10004A038;
  if ( !qword_10004A038 )
  {
    v22 = _NSConcreteStackBlock;
    v23 = 3254779904LL;
    v24 = (__int64 (__fastcall *)())sub_100007E18;
    v25 = &unk_100040DD0;
    v26 = &v27;
    sub_100007E18(&v22);
    v9 = (void *)v28[3];
  }
  v10 = objc_retainAutorelease(v9);
  _Block_object_dispose(&v27, 8);
  v11 = objc_alloc(v10);
  v27 = 0LL;
  v28 = &v27;
  v29 = 0x2020000000LL;
  v12 = (id *)qword_10004A048;
  v30 = qword_10004A048;
  if ( !qword_10004A048 )
  {
    v22 = _NSConcreteStackBlock;
    v23 = 3254779904LL;
    v24 = sub_10000801C;
    v25 = &unk_100040DD0;
    v26 = &v27;
    v13 = (void *)sub_100006A94();
    v14 = dlsym(v13, "BlastDoorInstanceTypeHubble");
    *(_QWORD *)(v26[1] + 24) = v14;
    qword_10004A048 = *(_QWORD *)(v26[1] + 24);
    v12 = (id *)v28[3];
  }
  _Block_object_dispose(&v27, 8);
  if ( v12 )
  {
    v15 = objc_retain(*v12);
    v16 = (IMMessagesBlastDoorInterface *)objc_msgSend(v11, "initWithBlastDoorInstanceType:", v15);
    blastdoorInterface = v5->_blastdoorInterface;
    v5->_blastdoorInterface = v16;
    objc_release(blastdoorInterface);
    objc_release(v15);
LABEL_12:
    objc_release(v4);
    return v5;
  }
  v19 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  v20 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithUTF8String:](
            &OBJC_CLASS___NSString,
            "stringWithUTF8String:",
            "BlastDoorInstanceType getBlastDoorInstanceTypeHubble(void)"));
  -[NSAssertionHandler handleFailureInFunction:file:lineNumber:description:](
    v19,
    "handleFailureInFunction:file:lineNumber:description:",
    v20,
    CFSTR("PAMediaConversionServiceResourceURLCollectionAccessProvider.m"),
    35LL,
    CFSTR("%s"),
    dlerror());
  objc_release(v20);
  objc_release(v19);
  __break(1u);
  return result;
}