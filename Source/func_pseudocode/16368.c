-[EAFirmwareUpdater handleSessionError:message:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[EAFirmwareUpdater handleSessionError:message:](EAFirmwareUpdater *self, SEL a2, unsigned int a3, id a4)
{
  __int64 v5; // x20
  dispatch_queue_s *eaNotificationDispatchQueue; // x0
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  const __CFString *v8; // [xsp+28h] [xbp-28h] BYREF
  const __CFString *v9; // [xsp+30h] [xbp-20h] BYREF

  v5 = sub_100009A6C(0LL, *(_QWORD *)&a3, a4);
  eaNotificationDispatchQueue = (dispatch_queue_s *)self->_eaNotificationDispatchQueue;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_10000B3A8;
  v7[3] = &unk_1000315C0;
  v7[4] = self;
  dispatch_async(eaNotificationDispatchQueue, v7);
  v8 = CFSTR("Event");
  v9 = CFSTR("com.apple.fud.updateFailed");
  -[EAFirmwareUpdater updateComplete:error:](
    self,
    "updateComplete:error:",
    +[NSDictionary dictionaryWithObjects:forKeys:count:](
      &OBJC_CLASS___NSDictionary,
      "dictionaryWithObjects:forKeys:count:",
      &v9,
      &v8,
      1LL),
    v5);
}