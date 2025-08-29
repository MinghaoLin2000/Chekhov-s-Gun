-[DeviceModeUnpairedViewController stoppedPairingWithError:]
void __cdecl -[DeviceModeUnpairedViewController stoppedPairingWithError:](
        DeviceModeUnpairedViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSString *v5; // x21
  NSTextField *v6; // x22
  NSBundle *v7; // x22
  NSString *v8; // x23
  NSTextField *v9; // x22
  NSTextField *v10; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  -[DeviceModeUnpairedViewController hideProgress:](self, "hideProgress:", 0LL);
  if ( v4 )
  {
    if ( objc_msgSend(v4, "code") == (void *)-402653035LL )
    {
      v5 = (NSString *)objc_retainAutoreleasedReturnValue(
                         -[DeviceViewController deviceStringForStringParameterizedKey:](
                           self,
                           "deviceStringForStringParameterizedKey:",
                           CFSTR("Trust request was denied. Disconnect and reconnect your %@.")));
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController errorLabel](self, "errorLabel"));
      -[NSTextField setStringValue:](v6, "setStringValue:", v5);
      objc_release(v6);
LABEL_10:
      objc_release(v5);
      v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController errorLabel](self, "errorLabel"));
      -[NSTextField setHidden:](v10, "setHidden:", 0LL);
      objc_release(v10);
      goto LABEL_11;
    }
    v5 = (NSString *)AMDCopyErrorText(objc_msgSend(v4, "code"));
    if ( -[NSString hasPrefix:](v5, "hasPrefix:", CFSTR("kAMD")) )
    {
      objc_release(v5);
    }
    else if ( v5 )
    {
LABEL_9:
      v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController errorLabel](self, "errorLabel"));
      -[NSTextField setStringValue:](v9, "setStringValue:", v5);
      objc_release(v9);
      -[DeviceModeUnpairedViewController readyForPairing](self, "readyForPairing");
      goto LABEL_10;
    }
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "localizedDescription"));
    if ( !v5 )
    {
      v7 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v8 = objc_retainAutoreleasedReturnValue(
             -[NSBundle localizedStringForKey:value:table:](
               v7,
               "localizedStringForKey:value:table:",
               CFSTR("Trust request error (%d)"),
               &stru_1000BA220,
               0LL));
      v5 = objc_retainAutoreleasedReturnValue(
             +[NSString localizedStringWithFormat:](
               &OBJC_CLASS___NSString,
               "localizedStringWithFormat:",
               v8,
               objc_msgSend(v4, "code")));
      objc_release(v8);
      objc_release(v7);
    }
    goto LABEL_9;
  }
LABEL_11:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}