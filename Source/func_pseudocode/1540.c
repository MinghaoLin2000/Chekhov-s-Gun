-[DeviceFooterViewController startProgressDisplay:withProgressDisplayType:]
void __cdecl -[DeviceFooterViewController startProgressDisplay:withProgressDisplayType:](
        DeviceFooterViewController *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  id v6; // x19
  NSProgress *v7; // x22
  NSProgress *v8; // x23
  NSProgress *v9; // x22
  NSProgress *v10; // x0
  __int64 v11; // x21
  NSProgress *v12; // x22
  NSProgress *v13; // x22
  char v14; // w8
  NSProgress *v15; // x0
  _BOOL4 v16; // w22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  if ( -[DeviceFooterViewController primaryProgressDisplayType](self, "primaryProgressDisplayType") == a4
    || -[DeviceFooterViewController secondaryProgressDisplayType](self, "secondaryProgressDisplayType") == a4 )
  {
    goto LABEL_23;
  }
  if ( a4 > 5 || ((1LL << a4) & 0x2E) == 0 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryProgress](self, "secondaryProgress"));
    objc_release(v12);
    if ( v12 )
    {
      v11 = 0LL;
      goto LABEL_15;
    }
    -[DeviceFooterViewController setSecondaryProgress:](self, "setSecondaryProgress:", v6);
    -[DeviceFooterViewController setSecondaryProgressDisplayType:](self, "setSecondaryProgressDisplayType:", a4);
    v11 = 0LL;
LABEL_14:
    -[DeviceFooterViewController addProgressObservers:](self, "addProgressObservers:", v6);
    goto LABEL_15;
  }
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryProgress](self, "primaryProgress"));
  if ( v7 )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryProgress](self, "secondaryProgress"));
    objc_release(v8);
    objc_release(v7);
    if ( !v8 )
    {
      v9 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryProgress](self, "primaryProgress"));
      -[DeviceFooterViewController setSecondaryProgress:](self, "setSecondaryProgress:", v9);
      objc_release(v9);
      -[DeviceFooterViewController setSecondaryProgressDisplayType:](
        self,
        "setSecondaryProgressDisplayType:",
        -[DeviceFooterViewController primaryProgressDisplayType](self, "primaryProgressDisplayType"));
      -[DeviceFooterViewController setPrimaryProgress:](self, "setPrimaryProgress:", 0LL);
      -[DeviceFooterViewController setPrimaryProgressDisplayType:](self, "setPrimaryProgressDisplayType:", 0LL);
      -[DeviceFooterViewController setSecondaryProgressWasPrimary:](self, "setSecondaryProgressWasPrimary:", 1LL);
    }
  }
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryProgress](self, "primaryProgress"));
  if ( !v10 )
  {
    -[DeviceFooterViewController setPrimaryProgress:](self, "setPrimaryProgress:", v6);
    -[DeviceFooterViewController setPrimaryProgressDisplayType:](self, "setPrimaryProgressDisplayType:", a4);
    v11 = 1LL;
    goto LABEL_14;
  }
  objc_release(v10);
  v11 = 1LL;
LABEL_15:
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryProgress](self, "secondaryProgress"));
  objc_release(v13);
  v14 = v11 ^ 1;
  if ( !v13 )
    v14 = 1;
  if ( (v14 & 1) != 0 )
  {
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryProgress](self, "primaryProgress"));
    v16 = v15 != 0LL;
    objc_release(v15);
    if ( (v16 & ~(_DWORD)v11 & 1) == 0 )
    {
      -[DeviceFooterViewController setShowingProgressBar:](self, "setShowingProgressBar:", 1LL);
      -[DeviceFooterViewController updateProgressDisplay:](self, "updateProgressDisplay:", v11);
      -[DeviceFooterViewController updateButtonsState](self, "updateButtonsState");
    }
  }
  else
  {
    if ( -[DeviceFooterViewController isHoveringOverProgress](self, "isHoveringOverProgress") )
      -[DeviceFooterViewController setHoveringOverProgress:](self, "setHoveringOverProgress:", 0LL);
    -[DeviceFooterViewController updateProgressDisplay:](self, "updateProgressDisplay:", 1LL);
  }
LABEL_23:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}