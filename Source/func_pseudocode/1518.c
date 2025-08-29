-[DeviceFooterViewController installProgressTextField]
void __cdecl -[DeviceFooterViewController installProgressTextField](DeviceFooterViewController *self, SEL a2)
{
  NSTextField *v3; // x19
  NSTextField *v4; // x19
  NSFont *v5; // x19
  NSTextField *v6; // x21
  NSTextField *v7; // x19
  NSTextField *v8; // x19
  void *v9; // x19
  NSTextField *v10; // x21
  NSTextField *v11; // x21
  void *v12; // x22
  void *v13; // x23
  void *v14; // x24
  NSTextField *v15; // x21
  void *v16; // x22
  NSStackView *v17; // x23
  void *v18; // x24
  void *v19; // x25
  NSTextField *v20; // x21
  double v21; // d0
  NSTextField *v22; // x21
  void *v23; // x22
  void *v24; // x23
  void *v25; // x24
  NSTextField *v26; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
  objc_release(v3);
  if ( !v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSTextField labelWithString:](&OBJC_CLASS___NSTextField, "labelWithString:", &stru_1000BA220));
    -[DeviceFooterViewController setProgressTextField:](self, "setProgressTextField:", v4);
    objc_release(v4);
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSFont monospacedDigitSystemFontOfSize:weight:](
             &OBJC_CLASS___NSFont,
             "monospacedDigitSystemFontOfSize:weight:",
             10.0,
             NSFontWeightRegular));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
    -[NSTextField setFont:](v6, "setFont:", v5);
    objc_release(v6);
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
    -[NSTextField setTranslatesAutoresizingMaskIntoConstraints:](
      v7,
      "setTranslatesAutoresizingMaskIntoConstraints:",
      0LL);
    objc_release(v7);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
    -[NSTextField setLineBreakMode:](v8, "setLineBreakMode:", 4LL);
    objc_release(v8);
  }
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController view](self, "view"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
  objc_msgSend(v9, "addSubview:", v10);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
  v12 = objc_retainAutoreleasedReturnValue(-[NSTextField leadingAnchor](v11, "leadingAnchor"));
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "leadingAnchor"));
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "constraintEqualToAnchor:constant:", v13, 22.0));
  objc_msgSend(v14, "setActive:", 1LL);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
  v16 = objc_retainAutoreleasedReturnValue(-[NSTextField trailingAnchor](v15, "trailingAnchor"));
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController buttonStack](self, "buttonStack"));
  v18 = objc_retainAutoreleasedReturnValue(-[NSStackView trailingAnchor](v17, "trailingAnchor"));
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "constraintEqualToAnchor:constant:", v18, 0.0));
  objc_msgSend(v19, "setActive:", 1LL);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
  LODWORD(v21) = 1132003328;
  -[NSTextField setContentHuggingPriority:forOrientation:](v20, "setContentHuggingPriority:forOrientation:", 0LL, v21);
  objc_release(v20);
  v22 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
  v23 = objc_retainAutoreleasedReturnValue(-[NSTextField bottomAnchor](v22, "bottomAnchor"));
  v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "bottomAnchor"));
  v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "constraintEqualToAnchor:constant:", v24, -4.0));
  objc_msgSend(v25, "setActive:", 1LL);
  objc_release(v25);
  objc_release(v24);
  objc_release(v23);
  objc_release(v22);
  v26 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
  -[NSTextField setHidden:](v26, "setHidden:", 1LL);
  objc_release(v26);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}