-[CGPDFPageImpl initWithCGPDFPage:requestQueue:]
CGPDFPageImpl *__cdecl -[CGPDFPageImpl initWithCGPDFPage:requestQueue:](
        CGPDFPageImpl *self,
        SEL a2,
        CGPDFPage *a3,
        id a4)
{
  id v7; // x19
  CGPDFPageImpl *v8; // x0
  CGPDFPageImpl *v9; // x21
  NSUUID *v10; // x0
  NSUUID *uuid; // x8
  objc_super v13; // [xsp+0h] [xbp-40h] BYREF

  v7 = objc_retain(a4);
  v13.receiver = self;
  v13.super_class = (Class)&OBJC_CLASS___CGPDFPageImpl;
  v8 = -[CGPDFPageImpl init](&v13, "init");
  v9 = v8;
  if ( v8 )
  {
    objc_storeStrong((id *)&v8->_requestQueue, a4);
    v10 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
    uuid = v9->_uuid;
    v9->_uuid = v10;
    objc_release(uuid);
    v9->_cgPage = CGPDFPageRetain(a3);
  }
  objc_release(v7);
  return v9;
}