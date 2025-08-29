-[RemoteViewBridgeServiceViewService serviceRequestSizeChange:immediate:fenceRight:]
void __cdecl -[RemoteViewBridgeServiceViewService serviceRequestSizeChange:immediate:fenceRight:](
        RemoteViewBridgeServiceViewService *self,
        SEL a2,
        CGSize a3,
        bool a4,
        id a5)
{
  _BOOL4 v5; // w21
  double height; // d8
  double width; // d9
  id v9; // x19
  unsigned int v10; // w0
  unsigned int v11; // w22
  NSAnimationContext *v12; // x21
  int v13; // w0
  double v14; // d0
  CAMediaTimingFunction *v15; // x23
  NSAnimationContext *v16; // x24
  void *v17; // x23
  void *v18; // x24
  void *v19; // x25
  NSAnimationContext *v20; // x21
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = a4;
  height = a3.height;
  width = a3.width;
  v9 = objc_retain(a5);
  v10 = +[CATransaction disableActions](&OBJC_CLASS___CATransaction, "disableActions");
  v11 = v10;
  if ( v9 )
  {
    +[CATransaction begin](&OBJC_CLASS___CATransaction, "begin");
    if ( v5 )
    {
      if ( (v11 & 1) == 0 )
        +[CATransaction setDisableActions:](&OBJC_CLASS___CATransaction, "setDisableActions:", 1LL);
    }
    else
    {
      v13 = CGSInputModifierKeyState(0LL, 1LL);
      v14 = 0.25;
      if ( v13 )
        v14 = 4.0;
      +[CATransaction setAnimationDuration:](&OBJC_CLASS___CATransaction, "setAnimationDuration:", v14);
      v15 = objc_retainAutoreleasedReturnValue(
              +[CAMediaTimingFunction functionWithName:](
                &OBJC_CLASS___CAMediaTimingFunction,
                "functionWithName:",
                kCAMediaTimingFunctionEaseInEaseOut));
      +[CATransaction setAnimationTimingFunction:](&OBJC_CLASS___CATransaction, "setAnimationTimingFunction:", v15);
      v16 = objc_retainAutoreleasedReturnValue(+[NSAnimationContext currentContext](&OBJC_CLASS___NSAnimationContext, "currentContext"));
      -[NSAnimationContext setAllowsImplicitAnimation:](v16, "setAllowsImplicitAnimation:", 1LL);
      objc_release(v16);
      objc_release(v15);
    }
    v17 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceViewService view](self, "view"));
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "layer"));
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "context"));
    objc_msgSend(v19, "setFencePort:", objc_msgSend(v9, "sendRight"));
    objc_release(v19);
    objc_release(v18);
    objc_release(v17);
    objc_msgSend(v9, "invalidate");
    -[RemoteViewBridgeServiceViewService _remotePreferredSizeChanged:](
      self,
      "_remotePreferredSizeChanged:",
      width,
      height);
    if ( ((!v5 | v11) & 1) == 0 )
      +[CATransaction setDisableActions:](&OBJC_CLASS___CATransaction, "setDisableActions:", 0LL);
    +[CATransaction commit](&OBJC_CLASS___CATransaction, "commit");
  }
  else if ( (v10 & 1) != 0 )
  {
    +[NSAnimationContext beginGrouping](&OBJC_CLASS___NSAnimationContext, "beginGrouping");
    v12 = objc_retainAutoreleasedReturnValue(+[NSAnimationContext currentContext](&OBJC_CLASS___NSAnimationContext, "currentContext"));
    -[NSAnimationContext setAllowsImplicitAnimation:](v12, "setAllowsImplicitAnimation:", 0LL);
    objc_release(v12);
    -[RemoteViewBridgeServiceViewService _remotePreferredSizeChanged:](
      self,
      "_remotePreferredSizeChanged:",
      width,
      height);
    +[NSAnimationContext endGrouping](&OBJC_CLASS___NSAnimationContext, "endGrouping");
  }
  else
  {
    +[CATransaction setDisableActions:](&OBJC_CLASS___CATransaction, "setDisableActions:", 1LL);
    +[NSAnimationContext beginGrouping](&OBJC_CLASS___NSAnimationContext, "beginGrouping");
    v20 = objc_retainAutoreleasedReturnValue(+[NSAnimationContext currentContext](&OBJC_CLASS___NSAnimationContext, "currentContext"));
    -[NSAnimationContext setAllowsImplicitAnimation:](v20, "setAllowsImplicitAnimation:", 0LL);
    objc_release(v20);
    -[RemoteViewBridgeServiceViewService _remotePreferredSizeChanged:](
      self,
      "_remotePreferredSizeChanged:",
      width,
      height);
    +[NSAnimationContext endGrouping](&OBJC_CLASS___NSAnimationContext, "endGrouping");
    +[CATransaction setDisableActions:](&OBJC_CLASS___CATransaction, "setDisableActions:", 0LL);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}