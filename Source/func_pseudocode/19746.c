__Z11isColorPageP9CGPDFPage
bool __fastcall isColorPage(CGPDFPage *a1)
{
  void *v2; // x19
  ColorInfo *v3; // x20
  CGPDFContentStreamRef v4; // x0
  CGPDFContentStream *v5; // x21
  NSString *v6; // x21

  v2 = objc_autoreleasePoolPush();
  v3 = objc_alloc_init(&OBJC_CLASS___ColorInfo);
  v4 = CGPDFContentStreamCreateWithPage(a1);
  v5 = v4;
  if ( v4 )
  {
    sub_10000E320((int)v4, v3);
    CGPDFContentStreamRelease(v5);
  }
  else
  {
    -[ColorInfo setColorReason:](v3, "setColorReason:", CFSTR("Could not create PDF page stream"));
  }
  v6 = objc_retainAutoreleasedReturnValue(-[ColorInfo colorReason](v3, "colorReason"));
  objc_release(v3);
  objc_release(v6);
  objc_autoreleasePoolPop(v2);
  return v6 != 0LL;
}