-[ECTIHelperApp sendEvent:]
void __cdecl -[ECTIHelperApp sendEvent:](ECTIHelperApp *self, SEL a2, id a3)
{
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___ECTIHelperApp;
  -[ECTIHelperApp sendEvent:](&v5, "sendEvent:");
  if ( ((unsigned __int64)objc_msgSend(a3, "type") & 0xFFFFFFFFFFFFFFFELL) == 0xA )
    objc_msgSend(-[ECTIHelperApp delegate](self, "delegate"), "keyEvent");
}