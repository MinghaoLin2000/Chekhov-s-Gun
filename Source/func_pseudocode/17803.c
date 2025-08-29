-[CoreMLModelSecurity stopDecryptionOfModelAtPath:completionBlock:]
void __cdecl -[CoreMLModelSecurity stopDecryptionOfModelAtPath:completionBlock:](
        CoreMLModelSecurity *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, id); // x20
  MLFairPlayDecryptSessionManager *v8; // x22
  unsigned __int8 v9; // w23
  id v10; // x21
  id v11; // [xsp+8h] [xbp-38h] BYREF

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, id))objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurity decryptSessionManager](self, "decryptSessionManager"));
  v11 = 0LL;
  v9 = (unsigned __int8)-[MLFairPlayDecryptSessionManager stopDecryptionOfModelAtPath:error:](
                          v8,
                          "stopDecryptionOfModelAtPath:error:",
                          v6,
                          &v11);
  v10 = objc_retain(v11);
  objc_release(v8);
  if ( (v9 & 1) == 0 )
    v7[2](v7, v10);
  v7[2](v7, 0LL);
  objc_release(v10);
  objc_release(v7);
  objc_release(v6);
}