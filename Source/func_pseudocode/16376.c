-[EAFirmwareUpdater handleFirmwareUpdateStatus:]
void __cdecl -[EAFirmwareUpdater handleFirmwareUpdateStatus:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  void *v5; // x22
  float v6; // s0
  float v7; // s8
  float v8; // s0
  NSNumber *resumedFromPercentNum; // x9
  NSNumber *resumeCount; // x8
  NSDictionary *v11; // x1
  void (__fastcall **updateHandler)(id, NSDictionary *); // x0
  _QWORD v13[4]; // [xsp+8h] [xbp-98h] BYREF
  _QWORD v14[4]; // [xsp+28h] [xbp-78h] BYREF

  if ( a3 )
  {
    v5 = objc_msgSend(a3, "objectForKey:", CFSTR("Event"));
    if ( ((unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("com.apple.fud.updateStarted")) & 1) != 0
      || (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("com.apple.fud.updateResumed")) )
    {
      self->_updateStartTime = objc_retain(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
      self->_cumulativeBytesDownloaded = (NSNumber *)objc_msgSend(
                                                       a3,
                                                       "objectForKeyedSubscript:",
                                                       CFSTR("totalBytesDownloadedSoFar"));
      self->_totalBytesForCompleteUpdate = (NSNumber *)objc_msgSend(
                                                         a3,
                                                         "objectForKeyedSubscript:",
                                                         CFSTR("totalBytesForCompleteUpdate"));
      -[NSNumber floatValue](self->_cumulativeBytesDownloaded, "floatValue");
      v7 = v6;
      -[NSNumber floatValue](self->_totalBytesForCompleteUpdate, "floatValue");
      self->_resumedFromPercentNum = +[NSNumber numberWithUnsignedInt:](
                                       &OBJC_CLASS___NSNumber,
                                       "numberWithUnsignedInt:",
                                       (unsigned int)(float)((float)(v7 / v8) * 100.0));
      self->_resumeCount = (NSNumber *)objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("resumeCount"));
      self->_cumulativeCloakTime = (NSNumber *)objc_msgSend(
                                                 a3,
                                                 "objectForKeyedSubscript:",
                                                 CFSTR("cumulativeCloakTime"));
      self->_cumulativeTimeTaken = (NSNumber *)objc_msgSend(
                                                 a3,
                                                 "objectForKeyedSubscript:",
                                                 CFSTR("cumulativeUpdateTime"));
      v13[0] = CFSTR("Event");
      v13[1] = CFSTR("transportType");
      v14[0] = v5;
      v14[1] = CFSTR("EATransport");
      resumedFromPercentNum = self->_resumedFromPercentNum;
      v13[2] = CFSTR("resumingFromPercent");
      v13[3] = CFSTR("resumeCount");
      resumeCount = self->_resumeCount;
      v14[2] = resumedFromPercentNum;
      v14[3] = resumeCount;
      v11 = +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v14,
              v13,
              4LL);
    }
    else
    {
      v11 = 0LL;
    }
    updateHandler = (void (__fastcall **)(id, NSDictionary *))self->_updateHandler;
    if ( updateHandler )
      updateHandler[2](updateHandler, v11);
  }
}