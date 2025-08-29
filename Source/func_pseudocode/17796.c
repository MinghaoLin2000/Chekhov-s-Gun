-[CoreMLModelSecurity dealloc]
void __cdecl -[CoreMLModelSecurity dealloc](CoreMLModelSecurity *self, SEL a2)
{
  objc_super v3; // [xsp+10h] [xbp-20h] BYREF

  -[CoreMLModelSecurity setTxn:](self, "setTxn:", 0LL);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___CoreMLModelSecurity;
  -[CoreMLModelSecurity dealloc](&v3, "dealloc");
}