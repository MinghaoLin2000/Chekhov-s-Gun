-[DeviceFooterViewController installProgressBarViewController]
void __cdecl -[DeviceFooterViewController installProgressBarViewController](DeviceFooterViewController *self, SEL a2)
{
  AMPProgressBarViewController *v3; // x19
  __int64 v4; // x1
  void *v5; // x19
  void *v6; // x19
  AMPProgressBarViewController *v7; // x22
  void *v8; // x20
  void *v9; // x22
  void *v10; // x23
  void *v11; // x24
  void *v12; // x22
  NSStackView *v13; // x23
  void *v14; // x24
  void *v15; // x25
  NSLayoutConstraint *v16; // x22
  void *v17; // x22
  void *v18; // x23
  void *v19; // x24
  id v20; // x22
  void *v21; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressBarViewController](self, "progressBarViewController"));
  objc_release(v3);
  if ( !v3 )
  {
    v5 = (void *)objc_opt_new(&OBJC_CLASS___AMPProgressBarViewController, v4);
    -[DeviceFooterViewController setProgressBarViewController:](self, "setProgressBarViewController:", v5);
    objc_release(v5);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController view](self, "view"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressBarViewController](self, "progressBarViewController"));
  v8 = objc_retainAutoreleasedReturnValue(-[AMPProgressBarViewController view](v7, "view"));
  objc_release(v7);
  objc_msgSend(v6, "addSubview:", v8);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "leadingAnchor"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "leadingAnchor"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "constraintEqualToAnchor:constant:", v10, 20.0));
  objc_msgSend(v11, "setActive:", 1LL);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "trailingAnchor"));
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController buttonStack](self, "buttonStack"));
  v14 = objc_retainAutoreleasedReturnValue(-[NSStackView leadingAnchor](v13, "leadingAnchor"));
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "constraintEqualToAnchor:constant:", v14, 0.0));
  -[DeviceFooterViewController setProgressBarViewTrailingConstraint:](
    self,
    "setProgressBarViewTrailingConstraint:",
    v15);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressBarViewTrailingConstraint](self, "progressBarViewTrailingConstraint"));
  -[NSLayoutConstraint setActive:](v16, "setActive:", 1LL);
  objc_release(v16);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "centerYAnchor"));
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "centerYAnchor"));
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "constraintEqualToAnchor:constant:", v18, 0.0));
  objc_msgSend(v19, "setActive:", 1LL);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  v20 = objc_alloc((Class)&OBJC_CLASS___NSTrackingArea);
  objc_msgSend(v8, "bounds");
  v21 = objc_msgSend(v20, "initWithRect:options:owner:userInfo:", 641LL, self, 0LL);
  objc_msgSend(v6, "addTrackingArea:", v21);
  objc_release(v21);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}