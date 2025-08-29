+[TSUZipFileArchive isZipSignatureAllZerosAtURL:]
bool __cdecl +[TSUZipFileArchive isZipSignatureAllZerosAtURL:](id a1, SEL a2, id a3)
{
  void *v3; // x20
  int v4; // w19
  ssize_t v5; // x0
  uint8x8_t v6; // d0
  bool v7; // zf
  bool v8; // w20
  __int32 v10; // [xsp+Ch] [xbp-14h] BYREF

  v3 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "path")));
  v4 = open((const char *)objc_msgSend(v3, "fileSystemRepresentation"), 0, 0LL);
  objc_release(v3);
  if ( v4 < 0 )
    return 0;
  v5 = read(v4, &v10, 4uLL);
  v6.i32[0] = v10;
  if ( vmovn_s16((int16x8_t)vmovl_u8(v6)).u32[0] )
    v7 = 0;
  else
    v7 = v5 == 4;
  v8 = v7;
  close(v4);
  return v8;
}