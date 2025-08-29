-[PKSecTrustWrapper dealloc]
void __cdecl -[PKSecTrustWrapper dealloc](PKSecTrustWrapper *self, SEL a2)
{
  objc_super v3; // [xsp+10h] [xbp-20h] BYREF

  CFRelease(self->_trustRef);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___PKSecTrustWrapper;
  -[PKSecTrustWrapper dealloc](&v3, "dealloc");
}