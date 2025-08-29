-[CGPDFDocumentImpl getIsEncrypted:]
void __cdecl -[CGPDFDocumentImpl getIsEncrypted:](CGPDFDocumentImpl *self, SEL a2, id a3)
{
  id v4; // x0
  NSOperationQueue *requestQueue; // x20
  id v6; // x19
  _QWORD v7[5]; // [xsp+0h] [xbp-40h] BYREF
  id v8; // [xsp+28h] [xbp-18h]

  v4 = objc_retain(a3);
  requestQueue = self->_requestQueue;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = __36__CGPDFDocumentImpl_getIsEncrypted___block_invoke;
  v7[3] = &__block_descriptor_48_ea8_32s40bs_e5_v8__0l;
  v7[4] = self;
  v8 = v4;
  v6 = objc_retain(v4);
  -[NSOperationQueue addOperationWithBlock:](requestQueue, "addOperationWithBlock:", v7);
  objc_release(v8);
  objc_release(v6);
}