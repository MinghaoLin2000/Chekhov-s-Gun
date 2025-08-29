-[INHService loadDataImageForImage:scaledWidth:scaledHeight:usingPortableImageLoader:completion:]
void __cdecl -[INHService loadDataImageForImage:scaledWidth:scaledHeight:usingPortableImageLoader:completion:](
        INHService *self,
        SEL a2,
        id a3,
        double a4,
        double a5,
        id a6,
        id a7)
{
  id v12; // x19
  id v13; // x20
  id v14; // x21
  NSXPCConnection *v15; // x24
  void *v16; // x22
  os_log_s *v17; // x23
  _QWORD v18[4]; // [xsp+8h] [xbp-A8h] BYREF
  id v19; // [xsp+28h] [xbp-88h]
  double v20; // [xsp+30h] [xbp-80h]
  double v21; // [xsp+38h] [xbp-78h]
  uint8_t buf[4]; // [xsp+40h] [xbp-70h] BYREF
  const char *v23; // [xsp+44h] [xbp-6Ch]
  __int16 v24; // [xsp+4Ch] [xbp-64h]
  id v25; // [xsp+4Eh] [xbp-62h]
  __int16 v26; // [xsp+56h] [xbp-5Ah]
  id v27; // [xsp+58h] [xbp-58h]

  v12 = objc_retain(a3);
  v13 = objc_retain(a6);
  v14 = objc_retain(a7);
  if ( v14 )
  {
    v15 = objc_retainAutoreleasedReturnValue(-[INHService servingConnection](self, "servingConnection"));
    v16 = objc_retainAutoreleasedReturnValue(
            +[INHelperServiceAccessSpecifier accessSpecifierAppropriateForXPCConnection:](
              &OBJC_CLASS___INHelperServiceAccessSpecifier,
              "accessSpecifierAppropriateForXPCConnection:",
              v15));
    objc_release(v15);
    v17 = (os_log_s *)INSiriLogContextIntents;
    if ( os_log_type_enabled(INSiriLogContextIntents, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315650;
      v23 = "-[INHService loadDataImageForImage:scaledWidth:scaledHeight:usingPortableImageLoader:completion:]";
      v24 = 2112;
      v25 = v12;
      v26 = 2112;
      v27 = v13;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v17,
        OS_LOG_TYPE_INFO,
        "%s Loading image %@ with portable image loader %@",
        buf,
        0x20u);
    }
    v18[0] = _NSConcreteStackBlock;
    v18[1] = 3254779904LL;
    v18[2] = sub_100005EE8;
    v18[3] = &unk_100008220;
    v19 = objc_retain(v14);
    v20 = a4;
    v21 = a5;
    objc_msgSend(v13, "loadImageDataFromImage:accessSpecifier:completion:", v12, v16, v18);
    objc_release(v19);
    objc_release(v16);
  }
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
}