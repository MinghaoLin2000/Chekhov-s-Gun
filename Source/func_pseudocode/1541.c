-[DeviceFooterViewController stopProgressDisplayWithProgressDisplayType:]
void __cdecl -[DeviceFooterViewController stopProgressDisplayWithProgressDisplayType:](
        DeviceFooterViewController *self,
        SEL a2,
        unsigned __int64 a3)
{
  NSProgress *v5; // x19
  int v6; // w22
  NSProgress *v7; // x21
  char v8; // w8
  NSProgress *v9; // x0
  _BOOL4 v10; // w21
  AMPProgressBarViewController *v11; // x21
  NSTextField *v12; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( -[DeviceFooterViewController secondaryProgressWasPrimary](self, "secondaryProgressWasPrimary")
    && -[DeviceFooterViewController secondaryProgressDisplayType](self, "secondaryProgressDisplayType") == a3
    || a3 > 5
    || ((1LL << a3) & 0x2E) == 0 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryProgress](self, "secondaryProgress"));
    v6 = 0;
    if ( !v5 )
      goto LABEL_11;
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryProgress](self, "primaryProgress"));
    v6 = 1;
    if ( !v5 )
      goto LABEL_11;
  }
  -[DeviceFooterViewController removeProgressObservers:](self, "removeProgressObservers:", v5);
  if ( v6 )
  {
    -[DeviceFooterViewController setPrimaryProgress:](self, "setPrimaryProgress:", 0LL);
    -[DeviceFooterViewController setPrimaryProgressDisplayType:](self, "setPrimaryProgressDisplayType:", 0LL);
  }
  else
  {
    -[DeviceFooterViewController setSecondaryProgress:](self, "setSecondaryProgress:", 0LL);
    -[DeviceFooterViewController setSecondaryProgressDisplayType:](self, "setSecondaryProgressDisplayType:", 0LL);
  }
LABEL_11:
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryProgress](self, "secondaryProgress"));
  objc_release(v7);
  v8 = v6 ^ 1;
  if ( !v7 )
    v8 = 1;
  if ( (v8 & 1) != 0 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryProgress](self, "primaryProgress"));
    v10 = v9 != 0LL;
    objc_release(v9);
    if ( (v10 & ~v6 & 1) == 0 )
    {
      -[DeviceFooterViewController setShowingProgressBar:](self, "setShowingProgressBar:", 0LL);
      v11 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressBarViewController](self, "progressBarViewController"));
      -[AMPProgressBarViewController setFractionCompleted:](v11, "setFractionCompleted:", 0.0);
      objc_release(v11);
      v12 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
      -[NSTextField setHidden:](v12, "setHidden:", 1LL);
      objc_release(v12);
    }
  }
  else
  {
    -[DeviceFooterViewController updateProgressDisplay:](self, "updateProgressDisplay:", 0LL);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}