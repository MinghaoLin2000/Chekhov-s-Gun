-[RemoteViewBridgeHostContainer setFrame:]
void __cdecl -[RemoteViewBridgeHostContainer setFrame:](RemoteViewBridgeHostContainer *self, SEL a2, CGRect a3)
{
  double height; // d8
  double width; // d9
  double y; // d10
  double x; // d11
  double v8; // d3
  double v9; // d2
  unsigned __int8 v11; // w20
  RemoteViewBridgeSendRight *v12; // x21
  void *v13; // x21
  void *v14; // x22
  void *v15; // x23
  id v16; // x21
  void *v17; // x21
  void *v18; // x22
  objc_super v19; // [xsp+8h] [xbp-A8h] BYREF
  objc_super v20; // [xsp+18h] [xbp-98h] BYREF
  _QWORD v21[7]; // [xsp+28h] [xbp-88h] BYREF

  height = a3.size.height;
  width = a3.size.width;
  y = a3.origin.y;
  x = a3.origin.x;
  -[RemoteViewBridgeHostContainer frame](self, "frame");
  if ( width == v9 && height == v8 )
  {
    v19.receiver = self;
    v19.super_class = (Class)&OBJC_CLASS___RemoteViewBridgeHostContainer;
    -[RemoteViewBridgeHostContainer setFrame:](&v19, "setFrame:", x, y, width, height);
  }
  else if ( !-[RemoteViewBridgeHostContainer inSetFrame](self, "inSetFrame") )
  {
    -[RemoteViewBridgeHostContainer setInSetFrame:](self, "setInSetFrame:", 1LL);
    v11 = +[CATransaction disableActions](&OBJC_CLASS___CATransaction, "disableActions");
    +[CATransaction begin](&OBJC_CLASS___CATransaction, "begin");
    if ( (v11 & 1) == 0 )
      +[CATransaction setDisableActions:](&OBJC_CLASS___CATransaction, "setDisableActions:", 1LL);
    v12 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeHostContainer currentFence](self, "currentFence"));
    objc_release(v12);
    if ( !v12 )
    {
      v13 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeHostContainer layer](self, "layer"));
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "context"));
      v15 = objc_msgSend(v14, "createFencePort");
      objc_release(v14);
      objc_release(v13);
      v16 = objc_retainAutoreleasedReturnValue(
              +[RemoteViewBridgeSendRight wrapSendRight:transferOwnership:](
                &OBJC_CLASS___RemoteViewBridgeSendRight,
                "wrapSendRight:transferOwnership:",
                v15,
                1LL));
      -[RemoteViewBridgeHostContainer setCurrentFence:](self, "setCurrentFence:", v16);
      objc_release(v16);
      v17 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeHostContainer layer](self, "layer"));
      v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "context"));
      v21[0] = _NSConcreteStackBlock;
      v21[1] = 3254779904LL;
      v21[2] = sub_10000BEE4;
      v21[3] = &unk_1000209A0;
      v21[4] = self;
      *(double *)&v21[5] = width;
      *(double *)&v21[6] = height;
      objc_msgSend(v18, "setFencePort:commitHandler:", v15, v21);
      objc_release(v18);
      objc_release(v17);
    }
    v20.receiver = self;
    v20.super_class = (Class)&OBJC_CLASS___RemoteViewBridgeHostContainer;
    -[RemoteViewBridgeHostContainer setFrame:](&v20, "setFrame:", x, y, width, height);
    -[RemoteViewBridgeHostContainer layoutSubtreeIfNeeded](self, "layoutSubtreeIfNeeded");
    if ( (v11 & 1) == 0 )
      +[CATransaction setDisableActions:](&OBJC_CLASS___CATransaction, "setDisableActions:", 0LL);
    +[CATransaction commit](&OBJC_CLASS___CATransaction, "commit");
    -[RemoteViewBridgeHostContainer setInSetFrame:](self, "setInSetFrame:", 0LL);
  }
}