-[CGPDFPageImpl dealloc]
void __cdecl -[CGPDFPageImpl dealloc](CGPDFPageImpl *self, SEL a2)
{
  objc_super v3; // [xsp+10h] [xbp-20h] BYREF

  CGPDFPageRelease(self->_cgPage);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___CGPDFPageImpl;
  -[CGPDFPageImpl dealloc](&v3, "dealloc");
}