-[SiriNCService _receivedNotification:]
void __cdecl -[SiriNCService _receivedNotification:](SiriNCService *self, SEL a2, id a3)
{
  id v5; // x19
  void *v6; // x22
  void *v7; // x23
  unsigned int v8; // w24
  void *v9; // x23
  SiriNCAlertViewController *v10; // x22
  NSRunningApplication *v11; // x23
  NSString *v12; // x24
  unsigned int v13; // w25
  void *v14; // x24
  unsigned int v15; // w25
  void *v16; // x21
  unsigned int v17; // w22
  void *v18; // x24
  int v19; // w25
  NSAssertionHandler *v20; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "name"));
  if ( (unsigned int)objc_msgSend(v6, "isEqualToString:", CFSTR("com.apple.HIToolbox.beginMenuTrackingNotification")) )
  {
    objc_release(v6);
LABEL_4:
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "userInfo"));
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("ToolboxMessageEventData")));
    objc_release(v9);
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSRunningApplication runningApplicationWithProcessIdentifier:](
              &OBJC_CLASS___NSRunningApplication,
              "runningApplicationWithProcessIdentifier:",
              -[SiriNCAlertViewController intValue](v10, "intValue")));
    v12 = objc_retainAutoreleasedReturnValue(-[NSRunningApplication bundleIdentifier](v11, "bundleIdentifier"));
    v13 = -[NSString isEqualToString:](v12, "isEqualToString:", CFSTR("com.apple.notificationcenterui"));
    objc_release(v12);
    if ( v13 )
    {
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "name"));
      v15 = (unsigned int)objc_msgSend(
                            v14,
                            "isEqualToString:",
                            CFSTR("com.apple.HIToolbox.beginMenuTrackingNotification"));
      objc_release(v14);
      if ( v15 )
      {
        -[SiriNCService _notificationCenterOpened](self, "_notificationCenterOpened");
      }
      else
      {
        v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "name"));
        v19 = (unsigned __int8)objc_msgSend(
                                 v18,
                                 "isEqualToString:",
                                 CFSTR("com.apple.HIToolbox.endMenuTrackingNotification"));
        objc_release(v18);
        if ( (v19 & 1) == 0 )
        {
          v20 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
          -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
            v20,
            "handleFailureInMethod:object:file:lineNumber:description:",
            a2,
            self,
            CFSTR("SiriNCService.m"),
            252LL,
            CFSTR("Unexpected notification name"));
          objc_release(v20);
        }
        -[SiriNCService _notificationCenterClosed](self, "_notificationCenterClosed");
      }
    }
    objc_release(v11);
    goto LABEL_13;
  }
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "name"));
  v8 = (unsigned int)objc_msgSend(v7, "isEqualToString:", CFSTR("com.apple.HIToolbox.endMenuTrackingNotification"));
  objc_release(v7);
  objc_release(v6);
  if ( v8 )
    goto LABEL_4;
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "name"));
  v17 = (unsigned int)objc_msgSend(v16, "isEqualToString:", CFSTR("SiriObservationDoCancelListening"));
  objc_release(v16);
  if ( !v17 )
    goto LABEL_14;
  v10 = objc_retainAutoreleasedReturnValue(-[SiriNCService alertViewController](self, "alertViewController"));
  -[SiriNCAlertViewController handleUserCancel](v10, "handleUserCancel");
LABEL_13:
  objc_release(v10);
LABEL_14:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}