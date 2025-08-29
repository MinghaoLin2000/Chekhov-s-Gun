-[CGPDFDocumentImpl initWithData:requestQueue:]
CGPDFDocumentImpl *__cdecl -[CGPDFDocumentImpl initWithData:requestQueue:](
        CGPDFDocumentImpl *self,
        SEL a2,
        id a3,
        id a4)
{
  const __CFData *v6; // x19
  id v7; // x20
  CGPDFDocumentImpl *v8; // x0
  CGPDFDocumentImpl *v9; // x21
  __int64 v10; // x0
  OS_os_transaction *transaction; // x8
  CGDataProviderRef v12; // x0
  CGDataProviderRef v13; // x22
  CGPDFDocument *v14; // x0
  CGPDFDocument *mCFObject; // x8
  size_t NumberOfPages; // x0
  CGPDFDocumentImpl *v17; // x22
  id v19[2]; // [xsp+0h] [xbp-50h] BYREF
  objc_super v20; // [xsp+10h] [xbp-40h] BYREF

  v6 = (const __CFData *)objc_retain(a3);
  v7 = objc_retain(a4);
  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___CGPDFDocumentImpl;
  v8 = -[CGPDFDocumentImpl init](&v20, "init");
  v9 = v8;
  if ( !v8 )
    goto LABEL_7;
  objc_storeStrong((id *)&v8->_requestQueue, a4);
  v10 = os_transaction_create("com.apple.CoreGraphics.CGPDFService.transaction");
  transaction = v9->_transaction;
  v9->_transaction = (OS_os_transaction *)v10;
  objc_release(transaction);
  v12 = CGDataProviderCreateWithCFData(v6);
  v13 = v12;
  v19[1] = v12;
  if ( !v12 )
  {
    NSLog(&CFSTR("Failed to create CGDataProvoder").isa);
LABEL_10:
    v17 = 0LL;
    goto LABEL_11;
  }
  v14 = CGPDFDocumentCreateWithProvider(v12);
  mCFObject = v9->_cgDocument.mCFObject;
  v9->_cgDocument.mCFObject = v14;
  if ( mCFObject )
  {
    CFRelease(mCFObject);
    v14 = v9->_cgDocument.mCFObject;
  }
  if ( !v14 )
  {
    NSLog(&CFSTR("Failed to create CGPDFDocument").isa);
    CFRelease(v13);
    goto LABEL_10;
  }
  NumberOfPages = CGPDFDocumentGetNumberOfPages(v14);
  v19[0] = 0LL;
  std::vector<CGPDFPageImpl * {__strong}>::resize(&v9->_pages, NumberOfPages, v19);
  objc_release(v19[0]);
  CFRelease(v13);
LABEL_7:
  v17 = objc_retain(v9);
LABEL_11:
  objc_release(v7);
  objc_release(v6);
  objc_release(v9);
  return v17;
}