-[DeviceActivationFailedViewController updateUI]
void __cdecl -[DeviceActivationFailedViewController updateUI](DeviceActivationFailedViewController *self, SEL a2)
{
  NSBundle *v3; // x22
  const __CFString *v4; // x21
  NSString *v5; // x20
  NSTextField *v6; // x22
  NSTextField *v7; // x22
  NSError *v8; // x23
  NSDictionary *v9; // x24
  __CFString *v10; // x22
  const __CFString *v11; // x23
  NSTextField *v12; // x25
  NSTextField *v13; // x23
  NSError *v14; // x23
  NSDictionary *v15; // x24
  __CFString *v16; // x25
  __int64 v17; // x23
  NSTextField *v18; // x24
  NSTextField *v19; // x19
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( (unsigned int)-[DeviceActivationFailedViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v4 = &stru_1000BA220;
    v5 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v3,
             "localizedStringForKey:value:table:",
             CFSTR("Activation Failed"),
             &stru_1000BA220,
             0LL));
    objc_release(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceActivationFailedViewController activationFailedTextField](self, "activationFailedTextField"));
    -[NSTextField setStringValue:](v6, "setStringValue:", v5);
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceActivationFailedViewController activationFailedTextField](self, "activationFailedTextField"));
    -[NSTextField setHidden:](v7, "setHidden:", 0LL);
    objc_release(v7);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceActivationFailedViewController activationError](self, "activationError"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSError userInfo](v8, "userInfo"));
    v10 = (__CFString *)objc_retainAutoreleasedReturnValue(
                          -[NSDictionary objectForKeyedSubscript:](
                            v9,
                            "objectForKeyedSubscript:",
                            NSLocalizedDescriptionKey));
    objc_release(v9);
    objc_release(v8);
    if ( v10 )
      v11 = v10;
    else
      v11 = &stru_1000BA220;
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceActivationFailedViewController activationErrorTextField](self, "activationErrorTextField"));
    -[NSTextField setStringValue:](v12, "setStringValue:", v11);
    objc_release(v12);
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceActivationFailedViewController activationErrorTextField](self, "activationErrorTextField"));
    -[NSTextField setHidden:](v13, "setHidden:", v10 == 0LL);
    objc_release(v13);
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceActivationFailedViewController activationError](self, "activationError"));
    v15 = objc_retainAutoreleasedReturnValue(-[NSError userInfo](v14, "userInfo"));
    v16 = (__CFString *)objc_retainAutoreleasedReturnValue(
                          -[NSDictionary objectForKeyedSubscript:](
                            v15,
                            "objectForKeyedSubscript:",
                            NSLocalizedRecoverySuggestionErrorKey));
    objc_release(v15);
    objc_release(v14);
    if ( v16 )
    {
      v4 = v16;
      v17 = 0LL;
    }
    else
    {
      v17 = 1LL;
    }
    v18 = objc_retainAutoreleasedReturnValue(
            -[DeviceActivationFailedViewController activationExplanationTextField](
              self,
              "activationExplanationTextField"));
    -[NSTextField setStringValue:](v18, "setStringValue:", v4);
    objc_release(v18);
    v19 = objc_retainAutoreleasedReturnValue(
            -[DeviceActivationFailedViewController activationExplanationTextField](
              self,
              "activationExplanationTextField"));
    -[NSTextField setHidden:](v19, "setHidden:", v17);
    objc_release(v19);
    objc_release(v16);
    objc_release(v10);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v5);
  }
}