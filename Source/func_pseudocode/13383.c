-[SFUFileInputStream p_init]
id __cdecl -[SFUFileInputStream p_init](SFUFileInputStream *self, SEL a2)
{
  id result; // x0
  objc_super v3; // [xsp+0h] [xbp-10h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUFileInputStream;
  result = -[SFUFileInputStream init](&v3, "init");
  if ( result )
    *((_DWORD *)result + 2) = -1;
  return result;
}