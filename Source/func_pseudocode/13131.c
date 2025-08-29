+[NSValue valueWithCGSize:]
NSValue *__cdecl +[NSValue valueWithCGSize:](id a1, SEL a2, CGSize a3)
{
  CGSize v4; // [xsp+0h] [xbp-10h] BYREF

  v4 = a3;
  return (NSValue *)objc_msgSend(a1, "valueWithBytes:objCType:", &v4, "{CGSize=dd}");
}