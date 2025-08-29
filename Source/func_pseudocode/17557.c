___64-[CGPDFPageImpl drawWithBox:size:colorSpace:options:completion:]_block_invoke
void __fastcall __64__CGPDFPageImpl_drawWithBox_size_colorSpace_options_completion___block_invoke(__int64 a1)
{
  const void *v2; // x0
  CGColorSpaceRef v3; // x19
  __int64 v4; // x0
  CGContext *v5; // x21
  void *Data; // x0
  dispatch_data_t v7; // x22
  void *v8; // x23
  size_t size; // [xsp+10h] [xbp-40h] BYREF
  CGColorSpaceRef v10; // [xsp+18h] [xbp-38h]

  v10 = 0LL;
  v2 = *(const void **)(a1 + 32);
  if ( !v2 || (v3 = CGColorSpaceCreateWithPropertyList(v2), (v10 = v3) == 0LL) )
  {
    v3 = CGColorSpaceCreateWithName(kCGColorSpaceSRGB);
    v10 = v3;
  }
  size = 0LL;
  v4 = CGBitmapContextCreateWithShareableMappedData(
         vcvtpd_u64_f64(*(double *)(a1 + 64)),
         vcvtpd_u64_f64(*(double *)(a1 + 72)),
         v3,
         &size);
  v5 = (CGContext *)v4;
  if ( v4 )
  {
    CGContextClear(v4);
    CGContextDrawPDFPageWithOptions(
      v5,
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL),
      *(unsigned int *)(a1 + 80),
      *(_QWORD *)(a1 + 48),
      *(double *)(a1 + 64),
      *(double *)(a1 + 72));
    Data = CGBitmapContextGetData(v5);
    v7 = dispatch_data_create(Data, size, 0LL, _dispatch_data_destructor_munmap);
    v8 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___CGBitmapFormat), "initWithBitmapContext:", v5);
    (*(void (**)(void))(*(_QWORD *)(a1 + 56) + 16LL))();
    objc_release(v8);
    objc_release(v7);
    CFRelease(v5);
  }
  else
  {
    (*(void (**)(void))(*(_QWORD *)(a1 + 56) + 16LL))();
  }
  if ( v3 )
    CFRelease(v3);
}