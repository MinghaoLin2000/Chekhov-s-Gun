-[CGPDFPageImpl drawWithBox:size:colorSpace:options:completion:]
void __cdecl -[CGPDFPageImpl drawWithBox:size:colorSpace:options:completion:](
        CGPDFPageImpl *self,
        SEL a2,
        int a3,
        CGSize a4,
        id a5,
        id a6,
        id a7)
{
  CGFloat height; // d8
  CGFloat width; // d9
  id v13; // x23
  id v14; // x20
  id v15; // x19
  NSOperationQueue *requestQueue; // x24
  id v17; // x21
  id v18; // x20
  id v19; // x19
  _QWORD v20[4]; // [xsp+8h] [xbp-98h] BYREF
  id v21; // [xsp+28h] [xbp-78h]
  CGPDFPageImpl *v22; // [xsp+30h] [xbp-70h]
  id v23; // [xsp+38h] [xbp-68h]
  id v24; // [xsp+40h] [xbp-60h]
  CGFloat v25; // [xsp+48h] [xbp-58h]
  CGFloat v26; // [xsp+50h] [xbp-50h]
  int v27; // [xsp+58h] [xbp-48h]

  height = a4.height;
  width = a4.width;
  v13 = objc_retain(a5);
  v14 = objc_retain(a6);
  v15 = objc_retain(a7);
  requestQueue = self->_requestQueue;
  v20[0] = _NSConcreteStackBlock;
  v20[1] = 3254779904LL;
  v20[2] = __64__CGPDFPageImpl_drawWithBox_size_colorSpace_options_completion___block_invoke;
  v20[3] = &__block_descriptor_84_ea8_32s40s48s56bs_e5_v8__0l;
  v25 = width;
  v26 = height;
  v21 = v13;
  v22 = self;
  v27 = a3;
  v23 = v14;
  v24 = v15;
  v17 = objc_retain(v14);
  v18 = objc_retain(v15);
  v19 = objc_retain(v13);
  -[NSOperationQueue addOperationWithBlock:](requestQueue, "addOperationWithBlock:", v20);
  objc_release(v23);
  objc_release(v24);
  objc_release(v21);
  objc_release(v17);
  objc_release(v18);
  objc_release(v19);
}