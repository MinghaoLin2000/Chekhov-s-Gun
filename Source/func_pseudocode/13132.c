+[NSValue valueWithCGRect:]
NSValue *__cdecl +[NSValue valueWithCGRect:](id a1, SEL a2, CGRect a3)
{
  CGRect v4; // [xsp+0h] [xbp-20h] BYREF

  v4 = a3;
  return (NSValue *)objc_msgSend(a1, "valueWithBytes:objCType:", &v4, "{CGRect={CGPoint=dd}{CGSize=dd}}");
}