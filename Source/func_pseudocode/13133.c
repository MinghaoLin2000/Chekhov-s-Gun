+[NSValue valueWithCGAffineTransform:]
NSValue *__cdecl +[NSValue valueWithCGAffineTransform:](id a1, SEL a2, CGAffineTransform *a3)
{
  return (NSValue *)objc_msgSend(a1, "valueWithBytes:objCType:", a3, "{CGAffineTransform=dddddd}");
}