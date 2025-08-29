-[EAFirmwareUpdater writeData:]
id __cdecl -[EAFirmwareUpdater writeData:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  _BYTE *v5; // x0
  __int64 v6; // x8
  NSMutableData *outputData; // x0
  NSMutableData *v8; // x0
  const __CFString *v9; // x2
  __int64 v10; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a3 )
  {
    -[EAFirmwareUpdater log:format:](
      self,
      "log:format:",
      5LL,
      CFSTR("%s %@"),
      "-[EAFirmwareUpdater writeData:]",
      objc_autorelease(
        objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___NSString),
          "initWithFormat:",
          CFSTR("- writing %u bytes"),
          objc_msgSend(a3, "length"))));
    if ( !-[EAFirmwareUpdater isMultiAssetSession](self, "isMultiAssetSession") && !self->_closeEASession )
    {
      v5 = objc_msgSend(a3, "bytes");
      v6 = 3LL;
      if ( !self->_byteEscape )
        v6 = 4LL;
      if ( v5[v6] == 65 && !self->_skipReconnect )
        -[EAFirmwareUpdater startReconnectTimer:](self, "startReconnectTimer:", 2LL);
    }
    outputData = self->_outputData;
    if ( outputData )
    {
      -[NSMutableData appendData:](outputData, "appendData:", a3);
LABEL_12:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return -[EAFirmwareUpdater flushOutput](self, "flushOutput");
    }
    v8 = (NSMutableData *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableData), "initWithData:", a3);
    self->_outputData = v8;
    if ( v8 )
      goto LABEL_12;
    v9 = CFSTR("Couldn't allocate NSMutableData object to store bytes to be written");
    v10 = 16LL;
  }
  else
  {
    v9 = CFSTR("No data to write");
    v10 = 18LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (id)sub_100009A6C(0LL, v10, v9);
}