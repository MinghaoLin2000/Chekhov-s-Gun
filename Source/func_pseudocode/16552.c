-[UARPUpdateFirmwareAnalyticsEvent description]
id __cdecl -[UARPUpdateFirmwareAnalyticsEvent description](UARPUpdateFirmwareAnalyticsEvent *self, SEL a2)
{
  id v3; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableString);
  objc_msgSend(v3, "appendFormat:", CFSTR("<Model Name = %@>, "), self->_modelName);
  objc_msgSend(v3, "appendFormat:", CFSTR("<Active Firmware Version = %@>, "), self->_activeFirmwareVersion);
  objc_msgSend(v3, "appendFormat:", CFSTR("<Download URL = %@>"), self->_downloadURL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return +[NSString stringWithString:](&OBJC_CLASS___NSString, "stringWithString:", v3);
}