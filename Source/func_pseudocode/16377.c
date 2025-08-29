-[EAFirmwareUpdater firmwareUpdateComplete:error:]
void __cdecl -[EAFirmwareUpdater firmwareUpdateComplete:error:](EAFirmwareUpdater *self, SEL a2, id a3, id a4)
{
  dispatch_queue_s *eaNotificationDispatchQueue; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( a4 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[EAFirmwareUpdater updateComplete:error:](self, "updateComplete:error:");
  }
  else
  {
    self->_firmwareUpdateComplete = 1;
    if ( self->_isMultiAssetSession
      || -[iAUPServer iAUPVersion](self->_iAUPServer, "iAUPVersion") == 2
      || self->_closeEASession )
    {
      -[EAFirmwareUpdater updateComplete:error:](self, "updateComplete:error:", a3, 0LL);
      eaNotificationDispatchQueue = (dispatch_queue_s *)self->_eaNotificationDispatchQueue;
      block[0] = _NSConcreteStackBlock;
      block[1] = 3254779904LL;
      block[2] = sub_10000C668;
      block[3] = &unk_1000315C0;
      block[4] = self;
      dispatch_async(eaNotificationDispatchQueue, block);
    }
  }
}