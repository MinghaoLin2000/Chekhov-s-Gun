-[RemoteViewBridgeServiceContainer setFrame:]
void __cdecl -[RemoteViewBridgeServiceContainer setFrame:](RemoteViewBridgeServiceContainer *self, SEL a2, CGRect a3)
{
  double height; // d8
  double width; // d9
  double y; // d10
  double x; // d11
  double v8; // d2
  double v9; // d12
  double v10; // d3
  double v11; // d13
  bool v12; // zf
  RemoteViewBridgeServiceContainerDelegate *v13; // x20
  int v14; // w0
  double v15; // d0
  NSAnimationContext *v16; // x21
  RemoteViewBridgeSendRight *v17; // x21
  void *v18; // x21
  void *v19; // x22
  void *v20; // x23
  id v21; // x21
  void *v22; // x21
  void *v23; // x22
  objc_super v24; // [xsp+8h] [xbp-B8h] BYREF
  _QWORD v25[5]; // [xsp+18h] [xbp-A8h] BYREF
  objc_super v26; // [xsp+40h] [xbp-80h] BYREF
  objc_super v27; // [xsp+50h] [xbp-70h] BYREF

  height = a3.size.height;
  width = a3.size.width;
  y = a3.origin.y;
  x = a3.origin.x;
  -[RemoteViewBridgeServiceContainer frame](self, "frame");
  v9 = v8;
  v11 = v10;
  if ( !-[RemoteViewBridgeServiceContainer sendFrameChangesToHost](self, "sendFrameChangesToHost")
    && (width == v9 ? (v12 = height == v11) : (v12 = 0), v12) )
  {
    if ( !-[RemoteViewBridgeServiceContainer inSetFrame](self, "inSetFrame") )
    {
      -[RemoteViewBridgeServiceContainer setInSetFrame:](self, "setInSetFrame:", 1LL);
      if ( +[CATransaction disableActions](&OBJC_CLASS___CATransaction, "disableActions") )
      {
        v26.receiver = self;
        v26.super_class = (Class)&OBJC_CLASS___RemoteViewBridgeServiceContainer;
        -[RemoteViewBridgeServiceContainer setFrame:](&v26, "setFrame:", x, y, width, height);
        v13 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceContainer delegate](self, "delegate"));
        -[RemoteViewBridgeServiceContainerDelegate remoteContainerView:requestSizeChange:fenceRight:](
          v13,
          "remoteContainerView:requestSizeChange:fenceRight:",
          self,
          0LL,
          width,
          height);
      }
      else
      {
        +[CATransaction begin](&OBJC_CLASS___CATransaction, "begin");
        v14 = CGSInputModifierKeyState(0LL, 1LL);
        v15 = 0.25;
        if ( v14 )
          v15 = 4.0;
        +[CATransaction setAnimationDuration:](&OBJC_CLASS___CATransaction, "setAnimationDuration:", v15);
        v13 = objc_retainAutoreleasedReturnValue(
                +[CAMediaTimingFunction functionWithName:](
                  &OBJC_CLASS___CAMediaTimingFunction,
                  "functionWithName:",
                  kCAMediaTimingFunctionEaseInEaseOut));
        +[CATransaction setAnimationTimingFunction:](&OBJC_CLASS___CATransaction, "setAnimationTimingFunction:", v13);
        v16 = objc_retainAutoreleasedReturnValue(+[NSAnimationContext currentContext](&OBJC_CLASS___NSAnimationContext, "currentContext"));
        -[NSAnimationContext setAllowsImplicitAnimation:](v16, "setAllowsImplicitAnimation:", 1LL);
        objc_release(v16);
        v17 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceContainer currentFence](self, "currentFence"));
        objc_release(v17);
        if ( !v17 )
        {
          v18 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceContainer layer](self, "layer"));
          v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "context"));
          v20 = objc_msgSend(v19, "createFencePort");
          objc_release(v19);
          objc_release(v18);
          v21 = objc_retainAutoreleasedReturnValue(
                  +[RemoteViewBridgeSendRight wrapSendRight:transferOwnership:](
                    &OBJC_CLASS___RemoteViewBridgeSendRight,
                    "wrapSendRight:transferOwnership:",
                    v20,
                    1LL));
          -[RemoteViewBridgeServiceContainer setCurrentFence:](self, "setCurrentFence:", v21);
          objc_release(v21);
          v22 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceContainer layer](self, "layer"));
          v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "context"));
          v25[0] = _NSConcreteStackBlock;
          v25[1] = 3254779904LL;
          v25[2] = sub_100003434;
          v25[3] = &unk_100020670;
          v25[4] = self;
          objc_msgSend(v23, "setFencePort:commitHandler:", v20, v25);
          objc_release(v23);
          objc_release(v22);
        }
        v24.receiver = self;
        v24.super_class = (Class)&OBJC_CLASS___RemoteViewBridgeServiceContainer;
        -[RemoteViewBridgeServiceContainer setFrame:](&v24, "setFrame:", x, y, width, height);
        -[RemoteViewBridgeServiceContainer layoutSubtreeIfNeeded](self, "layoutSubtreeIfNeeded");
        +[CATransaction commit](&OBJC_CLASS___CATransaction, "commit");
      }
      objc_release(v13);
      -[RemoteViewBridgeServiceContainer setInSetFrame:](self, "setInSetFrame:", 0LL);
    }
  }
  else
  {
    v27.receiver = self;
    v27.super_class = (Class)&OBJC_CLASS___RemoteViewBridgeServiceContainer;
    -[RemoteViewBridgeServiceContainer setFrame:](&v27, "setFrame:", x, y, width, height);
  }
}