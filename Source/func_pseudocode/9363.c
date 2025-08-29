-[TSPDatabase closeWithError:]
bool __cdecl -[TSPDatabase closeWithError:](TSPDatabase *self, SEL a2, id *a3)
{
  bool v4; // w20
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___TSPDatabase;
  v4 = -[TSUDatabase closeWithError:](&v6, "closeWithError:");
  if ( !v4 )
    sub_100027CD4(a3);
  return v4;
}