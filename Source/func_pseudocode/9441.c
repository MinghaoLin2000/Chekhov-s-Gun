-[TSPPackage keyFromPassword:]
id __cdecl -[TSPPackage keyFromPassword:](TSPPackage *self, SEL a2, id a3)
{
  id v4; // x19
  NSData *v5; // x20
  id v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[TSPPackage passwordVerifier](self, "passwordVerifier"));
  v6 = objc_retainAutoreleasedReturnValue(-[TSPPackage keyFromPassword:passwordVerifier:](self, "keyFromPassword:passwordVerifier:", v4, v5));
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}