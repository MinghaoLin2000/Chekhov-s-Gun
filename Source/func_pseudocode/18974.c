-[SiriNCAlertViewController initWithCoder:]
SiriNCAlertViewController *__cdecl -[SiriNCAlertViewController initWithCoder:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3)
{
  SiriNCAlertViewController *v3; // x0
  SiriNCAlertViewController *v4; // x19
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___SiriNCAlertViewController;
  v3 = -[SiriNCAlertViewController initWithCoder:](&v6, "initWithCoder:", a3);
  v4 = v3;
  if ( v3 )
    -[SiriNCAlertViewController commonInit](v3, "commonInit");
  return v4;
}