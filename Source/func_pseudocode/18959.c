-[RemoteViewBridgeViewController setView:]
void __cdecl -[RemoteViewBridgeViewController setView:](RemoteViewBridgeViewController *self, SEL a2, id a3)
{
  id v4; // x20
  id v5; // x19
  double v6; // d0
  double v7; // d0
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___RemoteViewBridgeViewController;
  -[RemoteViewBridgeViewController setView:](&v8, "setView:", v4);
  v5 = objc_retain(v4);
  LODWORD(v6) = 1132068864;
  objc_msgSend(v5, "setContentCompressionResistancePriority:forOrientation:", 0LL, v6);
  LODWORD(v7) = 1132068864;
  objc_msgSend(v5, "setContentCompressionResistancePriority:forOrientation:", 1LL, v7);
  objc_release(v5);
  objc_release(v5);
}