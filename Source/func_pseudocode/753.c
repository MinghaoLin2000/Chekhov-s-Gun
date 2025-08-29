-[DeviceBlueButton drawRect:]
void __cdecl -[DeviceBlueButton drawRect:](DeviceBlueButton *self, SEL a2, CGRect a3)
{
  double height; // d8
  double width; // d9
  double y; // d10
  double x; // d11
  NSBezierPath *v8; // x20
  id v9; // x21
  objc_super v10; // [xsp+0h] [xbp-50h] BYREF

  height = a3.size.height;
  width = a3.size.width;
  y = a3.origin.y;
  x = a3.origin.x;
  -[DeviceBlueButton bounds](self, "bounds");
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSBezierPath bezierPathWithRoundedRect:xRadius:yRadius:](
           &OBJC_CLASS___NSBezierPath,
           "bezierPathWithRoundedRect:xRadius:yRadius:"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceBlueButton currentFillColor](self, "currentFillColor"));
  objc_msgSend(v9, "setFill");
  objc_release(v9);
  -[NSBezierPath fill](v8, "fill");
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___DeviceBlueButton;
  -[DeviceBlueButton drawRect:](&v10, "drawRect:", x, y, width, height);
  objc_release(v8);
}