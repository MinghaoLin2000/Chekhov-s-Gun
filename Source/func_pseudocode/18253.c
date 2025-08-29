-[INHService retrieveImageWithIdentifier:completion:]
void __cdecl -[INHService retrieveImageWithIdentifier:completion:](INHService *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x21
  os_log_s *v8; // x22
  int v9; // [xsp+0h] [xbp-40h] BYREF
  const char *v10; // [xsp+4h] [xbp-3Ch]
  __int16 v11; // [xsp+Ch] [xbp-34h]
  id v12; // [xsp+Eh] [xbp-32h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (os_log_s *)INSiriLogContextIntents;
  if ( os_log_type_enabled(INSiriLogContextIntents, OS_LOG_TYPE_INFO) )
  {
    v9 = 136315394;
    v10 = "-[INHService retrieveImageWithIdentifier:completion:]";
    v11 = 2112;
    v12 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_INFO,
      "%s Retrieving image with identifier %@ with INImageFilePersistence",
      (uint8_t *)&v9,
      0x16u);
  }
  -[INImageFilePersistence retrieveImageWithIdentifier:completion:](
    self->_filePersistence,
    "retrieveImageWithIdentifier:completion:",
    v6,
    v7);
  objc_release(v7);
  objc_release(v6);
}