-[CGPDFPageImpl rotation]
signed __int64 __cdecl -[CGPDFPageImpl rotation](CGPDFPageImpl *self, SEL a2)
{
  int v2; // w8

  v2 = CGPDFPageGetRotationAngle(self->_cgPage) % 360;
  if ( v2 >= 0 )
    return (unsigned int)v2;
  else
    return (unsigned int)(v2 + 360);
}