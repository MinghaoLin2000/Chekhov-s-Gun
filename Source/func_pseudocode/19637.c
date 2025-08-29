-[PKSecTrustWrapper initWithTrust:]
PKSecTrustWrapper *__cdecl -[PKSecTrustWrapper initWithTrust:](PKSecTrustWrapper *self, SEL a2, __SecTrust *a3)
{
  PKSecTrustWrapper *v4; // x0
  PKSecTrustWrapper *v5; // x21
  objc_super v7; // [xsp+0h] [xbp-30h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___PKSecTrustWrapper;
  v4 = -[PKSecTrustWrapper init](&v7, "init");
  v5 = v4;
  if ( v4 )
  {
    v4->_trustRef = a3;
    CFRetain(a3);
  }
  return v5;
}