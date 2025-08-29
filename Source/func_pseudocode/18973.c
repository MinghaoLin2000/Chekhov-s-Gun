-[SiriNCAlertViewController initWithNibName:bundle:]
SiriNCAlertViewController *__cdecl -[SiriNCAlertViewController initWithNibName:bundle:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  SiriNCAlertViewController *v4; // x0
  SiriNCAlertViewController *v5; // x19
  objc_super v7; // [xsp+0h] [xbp-20h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___SiriNCAlertViewController;
  v4 = -[SiriNCAlertViewController initWithNibName:bundle:](&v7, "initWithNibName:bundle:", a3, a4);
  v5 = v4;
  if ( v4 )
    -[SiriNCAlertViewController commonInit](v4, "commonInit");
  return v5;
}