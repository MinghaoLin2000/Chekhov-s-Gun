-[NDANFDecodingService decodeANFDocumentData:completion:]
void __cdecl -[NDANFDecodingService decodeANFDocumentData:completion:](
        NDANFDecodingService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x22
  id v8; // x20
  void *v9; // x21
  id v10; // [xsp+8h] [xbp-28h]
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v7 = objc_retain(a4);
  v8 = objc_retain(a3);
  v10 = (id)objc_claimAutoreleasedReturnValue(-[NDANFDecodingService anfHelper](self, "anfHelper"));
  v9 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v10, "manifestFromANFDocumentData:", v8));
  objc_release(v8);
  (*((void (__fastcall **)(id, void *, _QWORD))a4 + 2))(v7, v9, 0LL);
  objc_release(v7);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}