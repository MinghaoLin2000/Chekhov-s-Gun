-[VideoConversionTask initWithSourceBookmarkDictionary:outputURLCollection:options:requestTracker:]
VideoConversionTask *__cdecl -[VideoConversionTask initWithSourceBookmarkDictionary:outputURLCollection:options:requestTracker:](
        VideoConversionTask *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x21
  id v13; // x23
  VideoConversionTask *v14; // x0
  VideoConversionTask *v15; // x22
  NSMutableDictionary *v16; // x24
  void *v17; // x24
  objc_super v19; // [xsp+0h] [xbp-50h] BYREF

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v19.receiver = self;
  v19.super_class = (Class)&OBJC_CLASS___VideoConversionTask;
  v14 = -[VideoConversionTask init](&v19, "init");
  v15 = v14;
  if ( v14 )
  {
    -[VideoConversionTask setRequestTracker:](v14, "setRequestTracker:", v13);
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSMutableDictionary dictionaryWithDictionary:](
              &OBJC_CLASS___NSMutableDictionary,
              "dictionaryWithDictionary:",
              v12));
    -[VideoConversionTask setOptions:](v15, "setOptions:", v16);
    objc_release(v16);
    -[VideoConversionTask resolveSourceBookmarkDictionary:](v15, "resolveSourceBookmarkDictionary:", v10);
    -[VideoConversionTask setOutputURLCollection:](v15, "setOutputURLCollection:", v11);
    v17 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    -[VideoConversionTask setResultInformation:](v15, "setResultInformation:", v17);
    objc_release(v17);
  }
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  return v15;
}