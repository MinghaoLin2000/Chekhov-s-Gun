-[EAFirmwareUpdater stitchManifestInSuperBinary:withManifest:withId:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[EAFirmwareUpdater stitchManifestInSuperBinary:withManifest:withId:](
        EAFirmwareUpdater *self,
        SEL a2,
        id a3,
        id a4,
        unsigned int a5)
{
  const __CFString *v7; // x3
  __int64 v10; // x0
  unsigned __int16 *v11; // x20
  unsigned __int8 v12; // w8
  int v13; // w19
  __int64 v14; // x25
  void *v15; // x23
  bool v16; // w19
  const __CFString *v18; // x3
  EAFirmwareUpdater *v19; // [xsp+8h] [xbp-58h]

  v7 = CFSTR("Error null data to stitchManifestInSuperBinary");
  if ( !a3 || !a4 )
    goto LABEL_18;
  v10 = parseSuperBinaryAndPayloadHeaders(objc_msgSend(a3, "bytes"), objc_msgSend(a3, "length"));
  if ( !v10 )
  {
    v7 = CFSTR("Error could not parse SuperBinary headers");
LABEL_18:
    -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, v7, *(_QWORD *)&a5);
    v16 = 0;
    v15 = 0LL;
    goto LABEL_11;
  }
  v11 = (unsigned __int16 *)v10;
  if ( *(_WORD *)(v10 + 16) )
  {
    v19 = self;
    v12 = 0;
    while ( 1 )
    {
      v13 = v12;
      v14 = (__int64)&v11[10 * v12 + 10];
      v15 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithBytes:length:encoding:", v14, 4LL, 4LL);
      if ( (unsigned int)objc_msgSend(v15, "isEqualToString:", CFSTR("IM4M")) )
      {
        if ( (*(_DWORD *)&v11[10 * v13 + 12] & a5) != 0 )
          break;
      }
      objc_release(v15);
      v12 = v13 + 1;
      if ( v11[8] <= (unsigned int)(unsigned __int8)(v13 + 1) )
        goto LABEL_9;
    }
    if ( (unsigned __int64)objc_msgSend(a4, "length") > *(unsigned int *)&v11[10 * v13 + 18] )
    {
      v18 = CFSTR("Error manifest too large for SuperBinary payload");
    }
    else
    {
      if ( (updateSuperBinaryPayload(
              objc_msgSend(a3, "mutableBytes"),
              objc_msgSend(a3, "length"),
              v14,
              objc_msgSend(a4, "bytes"),
              objc_msgSend(a4, "length")) & 1) != 0 )
      {
        v16 = 1;
        goto LABEL_10;
      }
      v18 = CFSTR("Error could not update Manifest size in SuperBinary header");
    }
    -[EAFirmwareUpdater log:format:](v19, "log:format:", 5LL, v18);
    v16 = 0;
    goto LABEL_10;
  }
LABEL_9:
  v16 = 0;
  v15 = 0LL;
LABEL_10:
  free(v11);
LABEL_11:
  objc_release(v15);
  return v16;
}