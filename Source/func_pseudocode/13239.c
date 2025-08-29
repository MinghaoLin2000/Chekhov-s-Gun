-[SFUZipArchive readEntries]
void __cdecl -[SFUZipArchive readEntries](SFUZipArchive *self, SEL a2)
{
  SFUZipRecordInputStream *v3; // x0
  const char *v4; // x1
  unsigned __int64 v5; // x26
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x24
  const char *v9; // x20
  id v10; // x27
  __int64 v11; // x25
  __int64 v12; // x28
  __int64 v13; // x21
  __int64 v14; // x22
  __int64 v15; // x24
  id v16; // x20
  __int64 v17; // x22
  void *context; // [xsp+0h] [xbp-80h]
  SFUZipRecordInputStream *v19; // [xsp+10h] [xbp-70h]
  unsigned __int64 v20; // [xsp+18h] [xbp-68h] BYREF
  __int64 v21; // [xsp+20h] [xbp-60h]
  __int64 v22; // [xsp+28h] [xbp-58h]

  context = objc_autoreleasePoolPush();
  v3 = objc_autorelease(
         -[SFUZipRecordInputStream initWithDataRepresentation:](
           objc_alloc(&OBJC_CLASS___SFUZipRecordInputStream),
           "initWithDataRepresentation:",
           self->mDataRepresentation));
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v19 = v3;
  objc_msgSend_readEndOfCentralDirectoryFromInputStream_(&v20, self, v4);
  if ( v20 )
  {
    v5 = 0LL;
    v6 = v22;
    v7 = v21 + v22;
    v8 = 46LL;
    do
    {
      v9 = -[SFUZipRecordInputStream dataAtOffset:size:end:](v19, "dataAtOffset:size:end:", v6, v8, v7, context);
      if ( *(_DWORD *)v9 != 33639248 )
        +[SFUZipException raise:format:](
          &OBJC_CLASS___SFUZipException,
          "raise:format:",
          CFSTR("SFUZipCentralDirectoryError"),
          CFSTR("Central file header record signature not found"));
      v10 = -[SFUZipEntry initFromCentralFileHeader:dataRepresentation:](
              objc_alloc(&OBJC_CLASS___SFUZipEntry),
              "initFromCentralFileHeader:dataRepresentation:",
              v9 + 4,
              self->mDataRepresentation);
      v11 = *((unsigned __int16 *)v9 + 14);
      v12 = *((unsigned __int16 *)v9 + 15);
      v13 = v8;
      v14 = v8 + v6;
      v15 = *((unsigned __int16 *)v9 + 16);
      v16 = -[SFUZipArchive readFilenameFromBuffer:size:](
              self,
              "readFilenameFromBuffer:size:",
              -[SFUZipRecordInputStream dataAtOffset:size:end:](v19, "dataAtOffset:size:end:", v14, v11, v7),
              v11);
      v17 = v14 + v11;
      if ( (_DWORD)v12 )
      {
        -[SFUZipArchive readExtraFieldFromBuffer:size:entry:](
          self,
          "readExtraFieldFromBuffer:size:entry:",
          -[SFUZipRecordInputStream dataAtOffset:size:end:](v19, "dataAtOffset:size:end:", v17, v12, v7),
          v12,
          v10);
        v17 += v12;
      }
      -[NSMutableDictionary setObject:forKey:](self->mEntries, "setObject:forKey:", v10, v16);
      v6 = v17 + v15;
      objc_release(v10);
      v8 = v13;
      ++v5;
    }
    while ( v5 < v20 );
  }
  objc_autoreleasePoolPop(context);
}