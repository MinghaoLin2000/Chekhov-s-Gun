-[RemoteViewBridgeServiceViewService _remotePreferredSizeChanged:]
void __cdecl -[RemoteViewBridgeServiceViewService _remotePreferredSizeChanged:](
        RemoteViewBridgeServiceViewService *self,
        SEL a2,
        CGSize a3)
{
  double height; // d8
  double width; // d9
  NSLayoutConstraint *v6; // x20
  NSLayoutConstraint *v7; // x20
  void *v8; // x19
  void *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  height = a3.height;
  width = a3.width;
  v6 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService widthConstraint](self, "widthConstraint"));
  -[NSLayoutConstraint setConstant:](v6, "setConstant:", width);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService heightConstraint](self, "heightConstraint"));
  -[NSLayoutConstraint setConstant:](v7, "setConstant:", height);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService view](self, "view"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "window"));
  objc_msgSend(v9, "layoutIfNeeded");
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}