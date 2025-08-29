-[EAFirmwareUpdater stream:handleEvent:]
void __cdecl -[EAFirmwareUpdater stream:handleEvent:](EAFirmwareUpdater *self, SEL a2, id a3, unsigned __int64 a4)
{
  dispatch_queue_s *eaNotificationDispatchQueue; // x0
  _QWORD *v6; // x1
  _QWORD block[5]; // [xsp+10h] [xbp-60h] BYREF
  _QWORD v8[5]; // [xsp+38h] [xbp-38h] BYREF

  switch ( a4 )
  {
    case 0uLL:
      -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("stream %@ event none"), a3);
      break;
    case 1uLL:
      -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("stream %@ event open completed"), a3);
      break;
    case 2uLL:
      -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("stream %@ event bytes available"), a3);
      eaNotificationDispatchQueue = (dispatch_queue_s *)self->_eaNotificationDispatchQueue;
      if ( eaNotificationDispatchQueue )
      {
        v8[0] = _NSConcreteStackBlock;
        v8[1] = 3254779904LL;
        v8[2] = sub_10000CB10;
        v8[3] = &unk_1000315C0;
        v8[4] = self;
        v6 = v8;
        goto LABEL_10;
      }
      break;
    case 3uLL:
    case 5uLL:
    case 6uLL:
    case 7uLL:
      return;
    case 4uLL:
      -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("stream %@ event space available"), a3);
      eaNotificationDispatchQueue = (dispatch_queue_s *)self->_eaNotificationDispatchQueue;
      if ( eaNotificationDispatchQueue )
      {
        block[0] = _NSConcreteStackBlock;
        block[1] = 3254779904LL;
        block[2] = sub_10000CB18;
        block[3] = &unk_1000315C0;
        block[4] = self;
        v6 = block;
LABEL_10:
        dispatch_async(eaNotificationDispatchQueue, v6);
      }
      break;
    case 8uLL:
      -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("stream %@ event error"), a3);
      break;
    default:
      if ( a4 == 16 )
        -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("stream %@ event end encountered"), a3);
      break;
  }
}