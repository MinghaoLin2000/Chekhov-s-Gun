-[INHService filePathForImage:usingPortableImageLoader:completion:]
void __cdecl -[INHService filePathForImage:usingPortableImageLoader:completion:](
        INHService *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  id v9; // x21
  os_log_s *v10; // x22
  int v11; // [xsp+0h] [xbp-50h] BYREF
  const char *v12; // [xsp+4h] [xbp-4Ch]
  __int16 v13; // [xsp+Ch] [xbp-44h]
  id v14; // [xsp+Eh] [xbp-42h]
  __int16 v15; // [xsp+16h] [xbp-3Ah]
  id v16; // [xsp+18h] [xbp-38h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  if ( v9 )
  {
    v10 = (os_log_s *)INSiriLogContextIntents;
    if ( os_log_type_enabled(INSiriLogContextIntents, OS_LOG_TYPE_INFO) )
    {
      v11 = 136315650;
      v12 = "-[INHService filePathForImage:usingPortableImageLoader:completion:]";
      v13 = 2112;
      v14 = v7;
      v15 = 2112;
      v16 = v8;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v10,
        OS_LOG_TYPE_INFO,
        "%s Loading image file path for %@ with portable image loader %@",
        (uint8_t *)&v11,
        0x20u);
    }
    objc_msgSend(v8, "filePathForImage:completion:", v7, v9);
  }
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
}