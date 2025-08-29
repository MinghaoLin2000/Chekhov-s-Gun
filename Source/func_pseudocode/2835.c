-[DeviceOptionsViewController viewWillLayout]
void __cdecl -[DeviceOptionsViewController viewWillLayout](DeviceOptionsViewController *self, SEL a2)
{
  NSStackView *v3; // x20
  double v4; // d0
  double v5; // d8
  NSButton *v6; // x21
  double v7; // d0
  double v8; // d8
  NSPopUpButton *v9; // x22
  double v10; // d0
  double v11; // d9
  NSStackView *v12; // x20
  double v13; // d2
  double v14; // d8
  NSStackView *v15; // x20
  NSView *v16; // x21
  NSStackView *v17; // x20
  NSStackView *v18; // x21
  NSStackView *v19; // x20
  NSStackView *v20; // x20
  NSLayoutConstraint *v21; // x0
  NSLayoutConstraint *v22; // x19
  __int64 v23; // x2
  NSStackView *v24; // x20
  NSStackView *v25; // x21
  NSStackView *v26; // x20
  NSStackView *v27; // x20
  NSLayoutConstraint *v28; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertStackView](self, "convertStackView"));
  -[NSStackView spacing](v3, "spacing");
  v5 = v4;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertHigherBitRateSongsToCheckBox](self, "convertHigherBitRateSongsToCheckBox"));
  -[NSButton fittingSize](v6, "fittingSize");
  v8 = v5 + v7;
  v9 = objc_retainAutoreleasedReturnValue(
         -[DeviceOptionsViewController convertHigherBitRateSongsToPopUpButton](
           self,
           "convertHigherBitRateSongsToPopUpButton"));
  -[NSPopUpButton fittingSize](v9, "fittingSize");
  v11 = v8 + v10;
  objc_release(v9);
  objc_release(v6);
  objc_release(v3);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController deviceOptionsStackView](self, "deviceOptionsStackView"));
  -[NSStackView frame](v12, "frame");
  v14 = v13;
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController deviceOptionsStackView](self, "deviceOptionsStackView"));
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController viewBeforeConvert](self, "viewBeforeConvert"));
  if ( v11 >= v14 )
  {
    -[NSStackView setCustomSpacing:afterView:](v15, "setCustomSpacing:afterView:", v16, 8.0);
    objc_release(v16);
    objc_release(v15);
    v24 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController deviceOptionsStackView](self, "deviceOptionsStackView"));
    v25 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertStackView](self, "convertStackView"));
    -[NSStackView setCustomSpacing:afterView:](v24, "setCustomSpacing:afterView:", v25, 8.0);
    objc_release(v25);
    objc_release(v24);
    v26 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertStackView](self, "convertStackView"));
    -[NSStackView setOrientation:](v26, "setOrientation:", 1LL);
    objc_release(v26);
    v27 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertStackView](self, "convertStackView"));
    -[NSStackView setAlignment:](v27, "setAlignment:", 5LL);
    objc_release(v27);
    v28 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertPopUpLeadingConstraint](self, "convertPopUpLeadingConstraint"));
    -[NSLayoutConstraint setConstant:](v28, "setConstant:", 16.0);
    objc_release(v28);
    v21 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertPopUpLeadingConstraint](self, "convertPopUpLeadingConstraint"));
    v22 = v21;
    v23 = 1LL;
  }
  else
  {
    -[NSStackView setCustomSpacing:afterView:](v15, "setCustomSpacing:afterView:", v16, 5.0);
    objc_release(v16);
    objc_release(v15);
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController deviceOptionsStackView](self, "deviceOptionsStackView"));
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertStackView](self, "convertStackView"));
    -[NSStackView setCustomSpacing:afterView:](v17, "setCustomSpacing:afterView:", v18, 4.0);
    objc_release(v18);
    objc_release(v17);
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertStackView](self, "convertStackView"));
    -[NSStackView setOrientation:](v19, "setOrientation:", 0LL);
    objc_release(v19);
    v20 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertStackView](self, "convertStackView"));
    -[NSStackView setAlignment:](v20, "setAlignment:", 12LL);
    objc_release(v20);
    v21 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertPopUpLeadingConstraint](self, "convertPopUpLeadingConstraint"));
    v22 = v21;
    v23 = 0LL;
  }
  -[NSLayoutConstraint setActive:](v21, "setActive:", v23);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v22);
}