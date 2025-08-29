-[RemoteViewBridgeServiceWindow setFrame:display:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[RemoteViewBridgeServiceWindow setFrame:display:](
        RemoteViewBridgeServiceWindow *self,
        SEL a2,
        CGRect a3,
        bool a4)
{
  _BOOL8 v4; // x19
  double height; // d10
  double width; // d8
  double y; // d11
  double x; // d9
  __int64 v10; // d0 OVERLAPPED
  double v13; // d3
  double v14; // d4
  double v15; // d11
  objc_super v16; // [xsp+0h] [xbp-40h] BYREF
  NSRect v17; // 0:d4.8,8:d5.8,16:d6.8,24:d7.8

  v4 = a4;
  height = a3.size.height;
  width = a3.size.width;
  y = a3.origin.y;
  x = a3.origin.x;
  -[RemoteViewBridgeServiceWindow frame](self, "frame");
  v14 = height - v13;
  if ( v13 == height )
    v14 = -0.0;
  v15 = y + v14;
  if ( v13 != height )
    height = v13;
  v17.origin.x = x;
  v17.origin.y = v15;
  v17.size.width = width;
  v17.size.height = height;
  if ( !NSEqualRects(*(NSRect *)&v10, v17) )
  {
    v16.receiver = self;
    v16.super_class = (Class)&OBJC_CLASS___RemoteViewBridgeServiceWindow;
    -[RemoteViewBridgeServiceWindow setFrame:display:](&v16, "setFrame:display:", v4, x, v15, width, height);
  }
}