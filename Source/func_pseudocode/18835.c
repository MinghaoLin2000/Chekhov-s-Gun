-[RemoteViewController hostRequestSizeChange:fenceRight:]
void __cdecl -[RemoteViewController hostRequestSizeChange:fenceRight:](
        RemoteViewController *self,
        SEL a2,
        CGSize a3,
        id a4)
{
  double height; // d8
  double width; // d9
  id v7; // x19
  int v8; // w0
  double v9; // d0
  CAMediaTimingFunction *v10; // x21
  NSAnimationContext *v11; // x22
  void *v12; // x22
  void *v13; // x23
  void *v14; // x24
  NSAnimationContext *v15; // x21
  NSAnimationContext *v16; // x21
  __int64 vars8; // [xsp+58h] [xbp+8h]

  height = a3.height;
  width = a3.width;
  v7 = objc_retain(a4);
  if ( v7 )
  {
    +[CATransaction begin](&OBJC_CLASS___CATransaction, "begin");
    v8 = CGSInputModifierKeyState(0LL, 1LL);
    v9 = 0.25;
    if ( v8 )
      v9 = 4.0;
    +[CATransaction setAnimationDuration:](&OBJC_CLASS___CATransaction, "setAnimationDuration:", v9);
    v10 = objc_retainAutoreleasedReturnValue(
            +[CAMediaTimingFunction functionWithName:](
              &OBJC_CLASS___CAMediaTimingFunction,
              "functionWithName:",
              kCAMediaTimingFunctionEaseInEaseOut));
    +[CATransaction setAnimationTimingFunction:](&OBJC_CLASS___CATransaction, "setAnimationTimingFunction:", v10);
    v11 = objc_retainAutoreleasedReturnValue(+[NSAnimationContext currentContext](&OBJC_CLASS___NSAnimationContext, "currentContext"));
    -[NSAnimationContext setAllowsImplicitAnimation:](v11, "setAllowsImplicitAnimation:", 1LL);
    objc_release(v11);
    v12 = objc_retainAutoreleasedReturnValue(-[RemoteViewController view](self, "view"));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "layer"));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "context"));
    objc_msgSend(v14, "setFencePort:", objc_msgSend(v7, "sendRight"));
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
    objc_msgSend(v7, "invalidate");
    -[RemoteViewController _remotePreferredSizeChanged:](self, "_remotePreferredSizeChanged:", width, height);
    +[CATransaction commit](&OBJC_CLASS___CATransaction, "commit");
    objc_release(v10);
  }
  else if ( +[CATransaction disableActions](&OBJC_CLASS___CATransaction, "disableActions") )
  {
    +[NSAnimationContext beginGrouping](&OBJC_CLASS___NSAnimationContext, "beginGrouping");
    v15 = objc_retainAutoreleasedReturnValue(+[NSAnimationContext currentContext](&OBJC_CLASS___NSAnimationContext, "currentContext"));
    -[NSAnimationContext setAllowsImplicitAnimation:](v15, "setAllowsImplicitAnimation:", 0LL);
    objc_release(v15);
    -[RemoteViewController _remotePreferredSizeChanged:](self, "_remotePreferredSizeChanged:", width, height);
    +[NSAnimationContext endGrouping](&OBJC_CLASS___NSAnimationContext, "endGrouping");
  }
  else
  {
    +[CATransaction setDisableActions:](&OBJC_CLASS___CATransaction, "setDisableActions:", 1LL);
    +[NSAnimationContext beginGrouping](&OBJC_CLASS___NSAnimationContext, "beginGrouping");
    v16 = objc_retainAutoreleasedReturnValue(+[NSAnimationContext currentContext](&OBJC_CLASS___NSAnimationContext, "currentContext"));
    -[NSAnimationContext setAllowsImplicitAnimation:](v16, "setAllowsImplicitAnimation:", 0LL);
    objc_release(v16);
    -[RemoteViewController _remotePreferredSizeChanged:](self, "_remotePreferredSizeChanged:", width, height);
    +[NSAnimationContext endGrouping](&OBJC_CLASS___NSAnimationContext, "endGrouping");
    +[CATransaction setDisableActions:](&OBJC_CLASS___CATransaction, "setDisableActions:", 0LL);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}