-[EAFirmwareUpdater handleInputData]
void __cdecl -[EAFirmwareUpdater handleInputData](EAFirmwareUpdater *self, SEL a2)
{
  EASession *session; // x0
  NSInputStream *v4; // x0
  NSInputStream *v5; // x20
  __int64 v6; // x22
  unsigned __int8 *v7; // x24
  unsigned int v8; // t1
  _BYTE v9[128]; // [xsp+8h] [xbp-B8h] BYREF

  -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("%s"), "-[EAFirmwareUpdater handleInputData]");
  if ( self->_iAUPServer )
  {
    session = self->_session;
    if ( session )
    {
      v4 = -[EASession inputStream](session, "inputStream");
      if ( v4 )
      {
        v5 = v4;
        if ( -[NSInputStream hasBytesAvailable](v4, "hasBytesAvailable") )
        {
          do
          {
            v6 = -[NSInputStream read:maxLength:](v5, "read:maxLength:", v9, 128LL);
            -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("read %d bytes\n"), v6);
            if ( v6 >= 1 )
            {
              v7 = v9;
              do
              {
                v8 = *v7++;
                -[iAUPServer processInByte:](self->_iAUPServer, "processInByte:", v8);
                --v6;
              }
              while ( v6 );
            }
          }
          while ( -[NSInputStream hasBytesAvailable](v5, "hasBytesAvailable") );
        }
      }
    }
  }
}