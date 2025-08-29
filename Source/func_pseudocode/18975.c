-[SiriNCAlertViewController init]
SiriNCAlertViewController *__cdecl -[SiriNCAlertViewController init](SiriNCAlertViewController *self, SEL a2)
{
  SiriNCAlertViewController *v2; // x0
  SiriNCAlertViewController *v3; // x19
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___SiriNCAlertViewController;
  v2 = -[SiriNCAlertViewController init](&v5, "init");
  v3 = v2;
  if ( v2 )
    -[SiriNCAlertViewController commonInit](v2, "commonInit");
  return v3;
}