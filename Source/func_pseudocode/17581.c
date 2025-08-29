-[CGPDFDocumentImpl getPageAtIndex:]
id __cdecl -[CGPDFDocumentImpl getPageAtIndex:](CGPDFDocumentImpl *self, SEL a2, signed __int64 a3)
{
  __end_ **begin; // x8
  CGPDFPageImpl *Page; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a3 < 0 || (begin = self->_pages.__begin_, a3 >= self->_pages.var0 - begin) )
  {
    NSLog(&CFSTR("Out of bounds page index").isa, a2);
    Page = 0LL;
  }
  else
  {
    Page = objc_retain(begin[a3]);
    if ( !Page )
    {
      Page = (CGPDFPageImpl *)CGPDFDocumentGetPage(self->_cgDocument.mCFObject, a3 + 1);
      if ( Page )
      {
        Page = -[CGPDFPageImpl initWithCGPDFPage:requestQueue:](
                 objc_alloc(&OBJC_CLASS___CGPDFPageImpl),
                 "initWithCGPDFPage:requestQueue:",
                 Page,
                 self->_requestQueue);
        objc_storeStrong((id *)&self->_pages.__begin_[a3], Page);
      }
      else
      {
        NSLog(&CFSTR("Failed to create page at index: (%ld)").isa, a3);
      }
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(Page);
}