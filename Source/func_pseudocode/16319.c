-[LegacyAudioAccessory progress:]
void __cdecl -[LegacyAudioAccessory progress:](LegacyAudioAccessory *self, SEL a2, double a3)
{
  OS_os_log *log; // x19
  NSString *activeDeviceClass; // x8
  int v7; // [xsp+0h] [xbp-50h] BYREF
  const char *v8; // [xsp+4h] [xbp-4Ch]
  __int16 v9; // [xsp+Ch] [xbp-44h]
  NSString *v10; // [xsp+Eh] [xbp-42h]
  __int16 v11; // [xsp+16h] [xbp-3Ah]
  double v12; // [xsp+18h] [xbp-38h]

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    activeDeviceClass = self->_activeDeviceClass;
    v7 = 136315650;
    v8 = "-[LegacyAudioAccessory progress:]";
    v9 = 2112;
    v10 = activeDeviceClass;
    v11 = 2048;
    v12 = a3;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_DEFAULT,
      "%s: deviceClass=%@, progress=%f",
      (uint8_t *)&v7,
      0x20u);
  }
}