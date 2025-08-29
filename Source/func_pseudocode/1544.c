-[DeviceFooterViewController setCurrentSyncOperation:]
void __cdecl -[DeviceFooterViewController setCurrentSyncOperation:](
        DeviceFooterViewController *self,
        SEL a2,
        unsigned int a3)
{
  NSString *v5; // x20
  NSString *v6; // x20
  id v7; // x20
  unsigned int currentSyncOperation; // w22
  NSBundle *v9; // x0
  NSBundle *v10; // x20
  NSString *v11; // x0
  NSString *v12; // x20
  NSString *v13; // x20
  id v14; // x20
  NSString *v15; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( -[DeviceFooterViewController currentSyncOperation](self, "currentSyncOperation") != a3 )
  {
    self->_currentSyncOperation = a3;
    if ( a3 == 1768779892 || a3 == 1651209584 )
    {
      v5 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController previousSecondaryButtonTitle](self, "previousSecondaryButtonTitle"));
      objc_release(v5);
      if ( !v5 )
      {
        v6 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryButtonTitle](self, "secondaryButtonTitle"));
        -[DeviceFooterViewController setPreviousSecondaryButtonTitle:](self, "setPreviousSecondaryButtonTitle:", v6);
        objc_release(v6);
        v7 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryButtonTarget](self, "secondaryButtonTarget"));
        -[DeviceFooterViewController setPreviousSecondaryButtonTarget:](self, "setPreviousSecondaryButtonTarget:", v7);
        objc_release(v7);
        -[DeviceFooterViewController setPreviousSecondaryButtonAction:](
          self,
          "setPreviousSecondaryButtonAction:",
          -[DeviceFooterViewController secondaryButtonAction](self, "secondaryButtonAction"));
      }
      currentSyncOperation = self->_currentSyncOperation;
      v9 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v10 = v9;
      if ( currentSyncOperation == 1768779892 )
        v11 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v9,
                  "localizedStringForKey:value:table:",
                  CFSTR("Skip Photos"),
                  &stru_1000BA220,
                  0LL));
      else
        v11 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v9,
                  "localizedStringForKey:value:table:",
                  CFSTR("Skip Backup"),
                  &stru_1000BA220,
                  0LL));
      v15 = v11;
      -[DeviceFooterViewController setSecondaryButtonTitle:](self, "setSecondaryButtonTitle:", v11);
      objc_release(v15);
      objc_release(v10);
      -[DeviceFooterViewController setEnabledSecondaryButton:](self, "setEnabledSecondaryButton:", 1LL);
      -[DeviceFooterViewController setHiddenSecondaryButton:](self, "setHiddenSecondaryButton:", 0LL);
      -[DeviceFooterViewController setSecondaryButtonTarget:](self, "setSecondaryButtonTarget:", self);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      -[DeviceFooterViewController setSecondaryButtonAction:](
        self,
        "setSecondaryButtonAction:",
        "clickSkipSyncOperationButton:");
    }
    else
    {
      v12 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController previousSecondaryButtonTitle](self, "previousSecondaryButtonTitle"));
      objc_release(v12);
      if ( v12 )
      {
        v13 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController previousSecondaryButtonTitle](self, "previousSecondaryButtonTitle"));
        -[DeviceFooterViewController setSecondaryButtonTitle:](self, "setSecondaryButtonTitle:", v13);
        objc_release(v13);
        v14 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController previousSecondaryButtonTarget](self, "previousSecondaryButtonTarget"));
        -[DeviceFooterViewController setSecondaryButtonTarget:](self, "setSecondaryButtonTarget:", v14);
        objc_release(v14);
        -[DeviceFooterViewController setSecondaryButtonAction:](
          self,
          "setSecondaryButtonAction:",
          -[DeviceFooterViewController previousSecondaryButtonAction](self, "previousSecondaryButtonAction"));
        -[DeviceFooterViewController setEnabledSecondaryButton:](self, "setEnabledSecondaryButton:", 0LL);
        -[DeviceFooterViewController setHiddenSecondaryButton:](self, "setHiddenSecondaryButton:", 1LL);
        -[DeviceFooterViewController setPreviousSecondaryButtonTitle:](self, "setPreviousSecondaryButtonTitle:", 0LL);
        -[DeviceFooterViewController setPreviousSecondaryButtonTarget:](self, "setPreviousSecondaryButtonTarget:", 0LL);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        -[DeviceFooterViewController setPreviousSecondaryButtonAction:](self, "setPreviousSecondaryButtonAction:", 0LL);
      }
    }
  }
}