-[AMPCapacityBarView crosshatchRect:withColor:]
void __cdecl -[AMPCapacityBarView crosshatchRect:withColor:](AMPCapacityBarView *self, SEL a2, CGRect a3, id a4)
{
  double height; // d8
  double width; // d10
  double y; // d9
  double x; // d11
  id v8; // x19
  double v9; // d12
  double i; // d11
  __int64 vars8; // [xsp+58h] [xbp+8h]

  height = a3.size.height;
  width = a3.size.width;
  y = a3.origin.y;
  x = a3.origin.x;
  v8 = objc_retain(a4);
  +[NSGraphicsContext saveGraphicsState](&OBJC_CLASS___NSGraphicsContext, "saveGraphicsState");
  objc_msgSend(v8, "setStroke");
  if ( width > 1.0 )
  {
    +[NSBezierPath clipRect:](&OBJC_CLASS___NSBezierPath, "clipRect:", x, y, width, height);
    v9 = x - height;
    for ( i = x + width; v9 < i; v9 = v9 + 7.0 )
      +[NSBezierPath strokeLineFromPoint:toPoint:](
        &OBJC_CLASS___NSBezierPath,
        "strokeLineFromPoint:toPoint:",
        v9,
        y,
        height + v9,
        y + height);
  }
  +[NSGraphicsContext restoreGraphicsState](&OBJC_CLASS___NSGraphicsContext, "restoreGraphicsState");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}