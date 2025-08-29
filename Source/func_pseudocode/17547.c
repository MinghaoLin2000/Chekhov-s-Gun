-[CGPDFPageImpl rectForBox:]
CGRect __cdecl -[CGPDFPageImpl rectForBox:](CGPDFPageImpl *self, SEL a2, int a3)
{
  return CGPDFPageGetBoxRect(self->_cgPage, (CGPDFBox)a3);
}