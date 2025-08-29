+[NSValue valueWithCGPoint:]
NSValue *__cdecl +[NSValue valueWithCGPoint:](id a1, SEL a2, CGPoint a3)
{
  CGPoint v4; // [xsp+0h] [xbp-10h] BYREF

  v4 = a3;
  return (NSValue *)objc_msgSend(a1, "valueWithBytes:objCType:", &v4, "{CGPoint=dd}");
}