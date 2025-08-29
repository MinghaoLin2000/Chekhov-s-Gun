-[CGPDFService newPDFDocumentWithData:withReply:]
void __cdecl -[CGPDFService newPDFDocumentWithData:withReply:](CGPDFService *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x0
  NSOperationQueue *requestQueue; // x19
  id v9; // x20
  id v10; // x21
  _QWORD v11[4]; // [xsp+8h] [xbp-58h] BYREF
  id v12; // [xsp+28h] [xbp-38h]
  CGPDFService *v13; // [xsp+30h] [xbp-30h]
  id v14; // [xsp+38h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  requestQueue = self->_requestQueue;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = __49__CGPDFService_newPDFDocumentWithData_withReply___block_invoke;
  v11[3] = &__block_descriptor_56_e8_32s40s48bs_e5_v8__0l;
  v12 = v6;
  v13 = self;
  v14 = v7;
  v9 = objc_retain(v7);
  v10 = objc_retain(v6);
  -[NSOperationQueue addOperationWithBlock:](requestQueue, "addOperationWithBlock:", v11);
  objc_release(v14);
  objc_release(v12);
  objc_release(v9);
  objc_release(v10);
}