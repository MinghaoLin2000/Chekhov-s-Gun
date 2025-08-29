-[CGPDFPageImpl getBoxRect:completion:]
void __cdecl -[CGPDFPageImpl getBoxRect:completion:](CGPDFPageImpl *self, SEL a2, int a3, id a4)
{
  id v6; // x0
  NSOperationQueue *requestQueue; // x21
  id v8; // x19
  _QWORD v9[5]; // [xsp+8h] [xbp-58h] BYREF
  id v10; // [xsp+30h] [xbp-30h]
  int v11; // [xsp+38h] [xbp-28h]

  v6 = objc_retain(a4);
  requestQueue = self->_requestQueue;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = __39__CGPDFPageImpl_getBoxRect_completion___block_invoke;
  v9[3] = &__block_descriptor_52_ea8_32s40bs_e5_v8__0l;
  v9[4] = self;
  v10 = v6;
  v11 = a3;
  v8 = objc_retain(v6);
  -[NSOperationQueue addOperationWithBlock:](requestQueue, "addOperationWithBlock:", v9);
  objc_release(v10);
  objc_release(v8);
}