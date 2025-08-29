-[CoreMLModelSecurity startDecryptionOfModelAtPath:usingKeyBlob:usesCodeSigningIdentityForEncryption:completionBlock:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[CoreMLModelSecurity startDecryptionOfModelAtPath:usingKeyBlob:usesCodeSigningIdentityForEncryption:completionBlock:](
        CoreMLModelSecurity *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id a6)
{
  _BOOL8 v7; // x22
  id v10; // x19
  id v11; // x20
  void (__fastcall **v12)(id, id); // x21
  id v13; // x22
  id v14; // x0
  void *v15; // x23
  MLFairPlayDecryptSessionManager *v16; // x25
  unsigned __int8 v17; // w26
  id v18; // x24
  id v19; // [xsp+0h] [xbp-50h] BYREF
  id v20; // [xsp+8h] [xbp-48h] BYREF

  v7 = a5;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = (void (__fastcall **)(id, id))objc_retain(a6);
  v20 = 0LL;
  v13 = objc_retainAutoreleasedReturnValue((id)sub_100009B00(v7, &v20));
  v14 = objc_retain(v20);
  v15 = v14;
  if ( v13 )
  {
    v16 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurity decryptSessionManager](self, "decryptSessionManager"));
    v19 = v15;
    v17 = (unsigned __int8)-[MLFairPlayDecryptSessionManager startDecryptionOfModelAtPath:usingKeyBlob:teamIdentifier:error:](
                             v16,
                             "startDecryptionOfModelAtPath:usingKeyBlob:teamIdentifier:error:",
                             v10,
                             v11,
                             v13,
                             &v19);
    v18 = objc_retain(v19);
    objc_release(v15);
    objc_release(v16);
    if ( (v17 & 1) == 0 )
      v12[2](v12, v18);
    v12[2](v12, 0LL);
  }
  else
  {
    v18 = v14;
    v12[2](v12, v14);
  }
  objc_release(v13);
  objc_release(v18);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}