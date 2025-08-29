-[INHService purgeExpiredImagesInEphemeralStore]
void __cdecl -[INHService purgeExpiredImagesInEphemeralStore](INHService *self, SEL a2)
{
  os_log_s *v3; // x20
  int v4; // [xsp+0h] [xbp-30h] BYREF
  const char *v5; // [xsp+4h] [xbp-2Ch]

  v3 = (os_log_s *)INSiriLogContextIntents;
  if ( os_log_type_enabled(INSiriLogContextIntents, OS_LOG_TYPE_INFO) )
  {
    v4 = 136315138;
    v5 = "-[INHService purgeExpiredImagesInEphemeralStore]";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_INFO,
      "%s Purging all expired ephemeral images in INImageFilePersistence",
      (uint8_t *)&v4,
      0xCu);
  }
  -[INImageFilePersistence purgeExpiredImagesInEphemeralStore](
    self->_filePersistence,
    "purgeExpiredImagesInEphemeralStore");
}