-[EAFirmwareUpdater createEndOfUpdateEventDict:error:]
id __cdecl -[EAFirmwareUpdater createEndOfUpdateEventDict:error:](EAFirmwareUpdater *self, SEL a2, id a3, id a4)
{
  void *v7; // x0
  void *v8; // x20
  double v9; // d0
  double v10; // d8
  void *v11; // x0
  void *v12; // x24
  __int64 v13; // x23
  float v14; // s0
  __int64 v15; // x24
  NSNumber *v16; // x23
  NSNumber *v17; // x26
  const __CFString *v18; // x0
  NSNumber *cumulativeProgressPercent; // x9
  NSNumber *currentSessionTimeTaken; // x8
  NSNumber *cumulativeTimeTaken; // x9
  NSNumber *cumulativeCloakTime; // x8
  NSMutableDictionary *v23; // x21
  const __CFString *v24; // x3
  NSNumber *v26; // [xsp+28h] [xbp-E8h]
  _QWORD v27[7]; // [xsp+30h] [xbp-E0h] BYREF
  _QWORD v28[7]; // [xsp+68h] [xbp-A8h] BYREF

  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater createEndOfUpdateEventDict:error:]",
    objc_autorelease(objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:", &stru_1000353D0)));
  v7 = objc_msgSend(a3, "objectForKey:", CFSTR("Event"));
  if ( !v7 )
  {
    -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("Event = NULL"));
    v23 = 0LL;
    goto LABEL_23;
  }
  v8 = v7;
  if ( self->_updateStartTime )
  {
    -[NSDate timeIntervalSinceDate:](
      +[NSDate date](&OBJC_CLASS___NSDate, "date"),
      "timeIntervalSinceDate:",
      self->_updateStartTime);
    v10 = v9;
    self->_currentSessionTimeTaken = +[NSNumber numberWithUnsignedInt:](
                                       &OBJC_CLASS___NSNumber,
                                       "numberWithUnsignedInt:",
                                       (unsigned int)v9);
  }
  else
  {
    v10 = 0.0;
  }
  v11 = objc_msgSend(
          -[iAUPServer getNumberOfBytesDownloadedInCurrentSession](
            self->_iAUPServer,
            "getNumberOfBytesDownloadedInCurrentSession"),
          "unsignedIntValue");
  v12 = v11;
  if ( v10 == 0.0 )
    v26 = (NSNumber *)&off_100038E40;
  else
    v26 = +[NSNumber numberWithUnsignedInt:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedInt:",
            (unsigned int)((double)(unsigned int)(8 * (_DWORD)v11) / v10));
  v13 = -[NSNumber unsignedIntValue](self->_cumulativeBytesDownloaded, "unsignedIntValue") + (unsigned int)v12;
  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("_cumulativeBytesDownloaded = %d (= %d earlier + %d current session)"),
    v13,
    -[NSNumber unsignedIntValue](self->_cumulativeBytesDownloaded, "unsignedIntValue"),
    v12);
  self->_cumulativeBytesDownloaded = +[NSNumber numberWithUnsignedInt:](
                                       &OBJC_CLASS___NSNumber,
                                       "numberWithUnsignedInt:",
                                       v13);
  if ( -[NSNumber unsignedIntValue](self->_totalBytesForCompleteUpdate, "unsignedIntValue") )
  {
    -[NSNumber floatValue](self->_totalBytesForCompleteUpdate, "floatValue");
    v15 = (unsigned int)(float)((float)((float)(unsigned int)v13 / v14) * 100.0);
    self->_cumulativeProgressPercent = +[NSNumber numberWithUnsignedInt:](
                                         &OBJC_CLASS___NSNumber,
                                         "numberWithUnsignedInt:",
                                         v15);
  }
  else
  {
    v15 = 0LL;
  }
  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("_totalBytesForCompleteUpdate = %d, So _cumulativeProgressPercent = %d [ = (%d / %d) * 100 ]"),
    -[NSNumber unsignedIntValue](self->_totalBytesForCompleteUpdate, "unsignedIntValue"),
    v15,
    v13,
    -[NSNumber unsignedIntValue](self->_totalBytesForCompleteUpdate, "unsignedIntValue"));
  self->_cumulativeTimeTaken = +[NSNumber numberWithUnsignedInt:](
                                 &OBJC_CLASS___NSNumber,
                                 "numberWithUnsignedInt:",
                                 -[NSNumber unsignedIntValue](self->_currentSessionTimeTaken, "unsignedIntValue")
                               + -[NSNumber unsignedIntValue](self->_cumulativeTimeTaken, "unsignedIntValue"));
  self->_cumulativeCloakTime = +[NSNumber numberWithUnsignedInt:](
                                 &OBJC_CLASS___NSNumber,
                                 "numberWithUnsignedInt:",
                                 -[NSNumber unsignedIntValue](self->_currentSessionCloakTime, "unsignedIntValue")
                               + -[NSNumber unsignedIntValue](self->_cumulativeCloakTime, "unsignedIntValue"));
  v16 = +[NSNumber numberWithUnsignedInt:](
          &OBJC_CLASS___NSNumber,
          "numberWithUnsignedInt:",
          -[NSNumber unsignedIntValue](self->_resumeCount, "unsignedIntValue") + 1);
  if ( a4 )
  {
    v17 = v26;
    if ( objc_msgSend(a4, "userInfo")
      && objc_msgSend(objc_msgSend(a4, "userInfo"), "objectForKey:", NSLocalizedDescriptionKey) )
    {
      v18 = (const __CFString *)objc_msgSend(objc_msgSend(a4, "userInfo"), "objectForKey:", NSLocalizedDescriptionKey);
    }
    else
    {
      v18 = CFSTR("Unknown");
    }
  }
  else
  {
    v18 = CFSTR("Unknown");
    v17 = v26;
  }
  cumulativeProgressPercent = self->_cumulativeProgressPercent;
  v27[0] = CFSTR("cumulativeProgressPercent");
  v27[1] = CFSTR("currentSessionTimeTaken");
  currentSessionTimeTaken = self->_currentSessionTimeTaken;
  v28[0] = cumulativeProgressPercent;
  v28[1] = currentSessionTimeTaken;
  cumulativeTimeTaken = self->_cumulativeTimeTaken;
  v27[2] = CFSTR("cumulativeTimeTaken");
  v27[3] = CFSTR("cumulativeCloakingTime");
  cumulativeCloakTime = self->_cumulativeCloakTime;
  v28[2] = cumulativeTimeTaken;
  v28[3] = cumulativeCloakTime;
  v27[4] = CFSTR("averageBitRate");
  v27[5] = CFSTR("totalSessionCount");
  v28[4] = v17;
  v28[5] = v16;
  v27[6] = CFSTR("error");
  v28[6] = v18;
  v23 = +[NSMutableDictionary dictionaryWithDictionary:](
          &OBJC_CLASS___NSMutableDictionary,
          "dictionaryWithDictionary:",
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v28,
            v27,
            7LL));
  if ( ((unsigned int)objc_msgSend(v8, "isEqualToString:", CFSTR("com.apple.fud.updateCompleted")) & 1) == 0 )
  {
    if ( (unsigned int)objc_msgSend(v8, "isEqualToString:", CFSTR("com.apple.fud.updateInterrupted")) )
    {
      v24 = CFSTR("interruptedState");
LABEL_22:
      -[NSMutableDictionary setObject:forKey:](v23, "setObject:forKey:", CFSTR("FailureStateApply"), v24);
      goto LABEL_23;
    }
    if ( (unsigned int)objc_msgSend(v8, "isEqualToString:", CFSTR("com.apple.fud.updateFailed")) )
    {
      v24 = CFSTR("failureState");
      goto LABEL_22;
    }
  }
LABEL_23:
  -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("Event dict = %@"), v23);
  return v23;
}