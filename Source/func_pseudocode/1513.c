-[DeviceFooterViewController updateButtonsState]
void __cdecl -[DeviceFooterViewController updateButtonsState](DeviceFooterViewController *self, SEL a2)
{
  _BOOL8 v3; // x21
  AMPCapacityBarViewController *v4; // x19
  void *v5; // x22
  AMPProgressBarViewController *v6; // x19
  void *v7; // x21
  _BOOL8 v8; // x21
  NSButton *v9; // x19
  _BOOL8 v10; // x21
  NSButton *v11; // x19
  _BOOL8 v12; // x21
  NSButton *v13; // x19
  _BOOL8 v14; // x21
  NSButton *v15; // x19
  NSString *v16; // x19
  NSButton *v17; // x21
  NSString *v18; // x19
  NSButton *v19; // x21
  NSString *v20; // x19
  NSString *v21; // x19
  NSButton *v22; // x21
  NSString *v23; // x19
  NSString *v24; // x19
  NSButton *v25; // x21
  NSButton *v26; // x19
  double v27; // d8
  NSButton *v28; // x21
  NSLayoutConstraint *v29; // x19
  NSLayoutConstraint *v30; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = -[DeviceFooterViewController isHiddenCapacityBar](self, "isHiddenCapacityBar")
    || -[DeviceFooterViewController isShowingProgressBar](self, "isShowingProgressBar");
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController capacityBarViewController](self, "capacityBarViewController"));
  v5 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarViewController view](v4, "view"));
  objc_msgSend(v5, "setHidden:", v3);
  objc_release(v5);
  objc_release(v4);
  LODWORD(v5) = -[DeviceFooterViewController isShowingProgressBar](self, "isShowingProgressBar");
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressBarViewController](self, "progressBarViewController"));
  v7 = objc_retainAutoreleasedReturnValue(-[AMPProgressBarViewController view](v6, "view"));
  objc_msgSend(v7, "setHidden:", (unsigned int)v5 ^ 1);
  objc_release(v7);
  objc_release(v6);
  v8 = -[DeviceFooterViewController isHiddenPrimaryButton](self, "isHiddenPrimaryButton");
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryButton](self, "primaryButton"));
  -[NSButton setHidden:](v9, "setHidden:", v8);
  objc_release(v9);
  v10 = -[DeviceFooterViewController isHiddenSecondaryButton](self, "isHiddenSecondaryButton");
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryButton](self, "secondaryButton"));
  -[NSButton setHidden:](v11, "setHidden:", v10);
  objc_release(v11);
  v12 = -[DeviceFooterViewController isEnabledPrimaryButton](self, "isEnabledPrimaryButton");
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryButton](self, "primaryButton"));
  -[NSButton setEnabled:](v13, "setEnabled:", v12);
  objc_release(v13);
  v14 = -[DeviceFooterViewController isEnabledSecondaryButton](self, "isEnabledSecondaryButton");
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryButton](self, "secondaryButton"));
  -[NSButton setEnabled:](v15, "setEnabled:", v14);
  objc_release(v15);
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryButtonKeyEquivalent](self, "primaryButtonKeyEquivalent"));
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryButton](self, "primaryButton"));
  -[NSButton setKeyEquivalent:](v17, "setKeyEquivalent:", v16);
  objc_release(v17);
  objc_release(v16);
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryButtonKeyEquivalent](self, "secondaryButtonKeyEquivalent"));
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryButton](self, "secondaryButton"));
  -[NSButton setKeyEquivalent:](v19, "setKeyEquivalent:", v18);
  objc_release(v19);
  objc_release(v18);
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryButtonTitle](self, "primaryButtonTitle"));
  objc_release(v20);
  if ( v20 )
  {
    v21 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryButtonTitle](self, "primaryButtonTitle"));
    v22 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryButton](self, "primaryButton"));
    -[NSButton setTitle:](v22, "setTitle:", v21);
    objc_release(v22);
    objc_release(v21);
  }
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryButtonTitle](self, "secondaryButtonTitle"));
  objc_release(v23);
  if ( v23 )
  {
    v24 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryButtonTitle](self, "secondaryButtonTitle"));
    v25 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryButton](self, "secondaryButton"));
    -[NSButton setTitle:](v25, "setTitle:", v24);
    objc_release(v25);
    objc_release(v24);
  }
  v26 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryButton](self, "primaryButton"));
  v27 = -20.0;
  if ( (unsigned int)-[NSButton isHidden](v26, "isHidden") )
  {
    v28 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryButton](self, "secondaryButton"));
    if ( (unsigned int)-[NSButton isHidden](v28, "isHidden") )
      v27 = 0.0;
    else
      v27 = -20.0;
    objc_release(v28);
  }
  objc_release(v26);
  v29 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController capacityViewTrailingConstraint](self, "capacityViewTrailingConstraint"));
  -[NSLayoutConstraint setConstant:](v29, "setConstant:", v27);
  objc_release(v29);
  v30 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressBarViewTrailingConstraint](self, "progressBarViewTrailingConstraint"));
  -[NSLayoutConstraint setConstant:](v30, "setConstant:", v27);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v30);
}