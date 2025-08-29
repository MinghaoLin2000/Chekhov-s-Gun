-[RemoteViewController _remotePreferredSizeChanged:]
void __cdecl -[RemoteViewController _remotePreferredSizeChanged:](RemoteViewController *self, SEL a2, CGSize a3)
{
  double height; // d9
  double width; // d8
  NSLayoutConstraint *v6; // x20
  double v7; // d0
  double v8; // d10
  NSLayoutConstraint *v9; // x20
  double v10; // d0
  double v11; // d11
  bool v13; // w9
  bool v14; // w8
  NSLayoutConstraint *v15; // x20
  NSLayoutConstraint *v16; // x20
  void *v17; // x19
  void *v18; // x20
  void *v19; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  height = a3.height;
  width = a3.width;
  v6 = objc_retainAutoreleasedReturnValue(-[RemoteViewController heightConstraint](self, "heightConstraint"));
  -[NSLayoutConstraint constant](v6, "constant");
  v8 = v7;
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(-[RemoteViewController widthConstraint](self, "widthConstraint"));
  -[NSLayoutConstraint constant](v9, "constant");
  v11 = v10;
  objc_release(v9);
  if ( v8 != height || v11 != width )
  {
    v13 = v8 != height;
    if ( SiriUISAEWindowMaxHeight == -1.0 )
    {
      v13 = 0;
      v14 = 0;
    }
    else
    {
      v14 = v11 != width;
    }
    if ( v13 && height > SiriUISAEWindowMaxHeight )
      height = SiriUISAEWindowMaxHeight;
    if ( v14 && width > SiriUISAEWindowMaxHeight )
      width = SiriUISAEWindowMaxHeight;
    v15 = objc_retainAutoreleasedReturnValue(-[RemoteViewController widthConstraint](self, "widthConstraint"));
    -[NSLayoutConstraint setConstant:](v15, "setConstant:", width);
    objc_release(v15);
    v16 = objc_retainAutoreleasedReturnValue(-[RemoteViewController heightConstraint](self, "heightConstraint"));
    -[NSLayoutConstraint setConstant:](v16, "setConstant:", height);
    objc_release(v16);
    v17 = objc_retainAutoreleasedReturnValue(-[RemoteViewController view](self, "view"));
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "window"));
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "contentView"));
    objc_msgSend(v19, "layoutSubtreeIfNeeded");
    objc_release(v19);
    objc_release(v18);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v17);
  }
}