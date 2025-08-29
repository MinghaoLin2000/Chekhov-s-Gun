-[CoreMLModelSecurity init]
CoreMLModelSecurity *__cdecl -[CoreMLModelSecurity init](CoreMLModelSecurity *self, SEL a2)
{
  CoreMLModelSecurity *v2; // x19
  MLFairPlayDecryptSessionManager *v3; // x0
  MLFairPlayDecryptSessionManager *decryptSessionManager; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___CoreMLModelSecurity;
  v2 = -[CoreMLModelSecurity init](&v6, "init");
  if ( v2 )
  {
    v3 = (MLFairPlayDecryptSessionManager *)objc_alloc_init((Class)&OBJC_CLASS___MLFairPlayDecryptSessionManager);
    decryptSessionManager = v2->_decryptSessionManager;
    v2->_decryptSessionManager = v3;
    objc_release(decryptSessionManager);
  }
  return v2;
}