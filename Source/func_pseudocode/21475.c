-[LSRAudioDump close]
void __cdecl -[LSRAudioDump close](LSRAudioDump *self, SEL a2)
{
  OpaqueExtAudioFile *extendedFile; // x0
  OpaqueAudioFileID *fileID; // x0
  os_log_s *v5; // x20
  NSURL *url; // x8
  int v7; // [xsp+0h] [xbp-30h] BYREF
  const char *v8; // [xsp+4h] [xbp-2Ch]
  __int16 v9; // [xsp+Ch] [xbp-24h]
  NSURL *v10; // [xsp+Eh] [xbp-22h]

  extendedFile = self->_extendedFile;
  if ( extendedFile )
    ExtAudioFileDispose(extendedFile);
  fileID = self->_fileID;
  if ( fileID )
    AudioFileClose(fileID);
  v5 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
  {
    url = self->_url;
    v7 = 136315394;
    v8 = "-[LSRAudioDump close]";
    v9 = 2112;
    v10 = url;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_INFO,
      "%s Closed audio dump file at: %@",
      (uint8_t *)&v7,
      0x16u);
  }
}