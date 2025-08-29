-[AMPProgressBarView drawIndeterminateProgress]
void __cdecl -[AMPProgressBarView drawIndeterminateProgress](AMPProgressBarView *self, SEL a2)
{
  NSAffineTransform *v3; // x0
  const char *v4; // x1
  NSAffineTransform *v5; // x19
  double v6; // d3
  double v7; // d8
  double indeterminateBarberOffset; // d9
  NSColor *v9; // x21
  double v10; // d9
  double v11; // d2
  _OWORD v12[3]; // [xsp+0h] [xbp-A0h] BYREF
  __int128 v13; // [xsp+30h] [xbp-70h] BYREF
  __int128 v14; // [xsp+40h] [xbp-60h]
  __int128 v15; // [xsp+50h] [xbp-50h]

  +[NSGraphicsContext saveGraphicsState](&OBJC_CLASS___NSGraphicsContext, "saveGraphicsState");
  v3 = objc_retainAutoreleasedReturnValue(+[NSAffineTransform transform](&OBJC_CLASS___NSAffineTransform, "transform"));
  v5 = v3;
  v14 = 0u;
  v15 = 0u;
  v13 = 0u;
  if ( v3 )
    objc_msgSend_transformStruct(&v13, v3, v4);
  *(_QWORD *)&v14 = 0xBFF0000000000000LL;
  v12[1] = v14;
  v12[2] = v15;
  v12[0] = v13;
  -[NSAffineTransform setTransformStruct:](v5, "setTransformStruct:", v12);
  -[NSAffineTransform concat](v5, "concat");
  -[AMPProgressBarView bounds](self, "bounds");
  v7 = v6;
  indeterminateBarberOffset = self->_indeterminateBarberOffset;
  v9 = objc_retainAutoreleasedReturnValue(+[NSColor lightGrayColor](&OBJC_CLASS___NSColor, "lightGrayColor"));
  -[NSColor setFill](v9, "setFill");
  v10 = indeterminateBarberOffset - v7;
  objc_release(v9);
  while ( 1 )
  {
    -[AMPProgressBarView bounds](self, "bounds");
    if ( v10 >= v7 + v11 )
      break;
    +[NSBezierPath fillRect:](&OBJC_CLASS___NSBezierPath, "fillRect:", v10, 0.0, v7, v7);
    v10 = v10 + v7 * 2.0;
  }
  +[NSGraphicsContext restoreGraphicsState](&OBJC_CLASS___NSGraphicsContext, "restoreGraphicsState");
  objc_release(v5);
}