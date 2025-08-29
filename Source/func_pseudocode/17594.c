-[CGPDFDocumentImpl .cxx_destruct]
void __cdecl -[CGPDFDocumentImpl .cxx_destruct](CGPDFDocumentImpl *self, SEL a2)
{
  CGPDFDocument *mCFObject; // x0
  vector<CGPDFPageImpl *, std::allocator<CGPDFPageImpl *>> *p_pages; // [xsp+8h] [xbp-18h] BYREF

  p_pages = &self->_pages;
  std::vector<CGPDFPageImpl * {__strong}>::__destroy_vector::operator()[abi:ne180100](&p_pages, a2);
  mCFObject = self->_cgDocument.mCFObject;
  if ( mCFObject )
    CFRelease(mCFObject);
  objc_storeStrong((id *)&self->_transaction, 0LL);
  objc_storeStrong((id *)&self->_requestQueue, 0LL);
}