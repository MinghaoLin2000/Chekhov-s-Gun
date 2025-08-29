-[SFUZipEntry dataOffset]
unsigned __int64 __cdecl -[SFUZipEntry dataOffset](SFUZipEntry *self, SEL a2)
{
  void *v3; // x20
  int *v4; // x8
  int v5; // w10
  __int64 v6; // x9
  __int64 v7; // x10
  unsigned __int64 mOffset; // x11
  os_log_s *v10; // x21
  int *v11; // [xsp+8h] [xbp-38h] BYREF

  if ( self->mHasDataOffset )
    return self->mDataOffset;
  objc_sync_enter(self);
  if ( self->mHasDataOffset )
  {
LABEL_7:
    objc_sync_exit(self);
    return self->mDataOffset;
  }
  v3 = -[SFUZipArchiveDataRepresentation bufferedInputStreamWithOffset:length:](
         self->mArchiveDataRepresentation,
         "bufferedInputStreamWithOffset:length:",
         self->mOffset,
         30LL);
  v11 = 0LL;
  if ( objc_msgSend(v3, "readToOwnBuffer:size:", &v11, 30LL) != (void *)30 )
    +[SFUZipException raise:format:](
      &OBJC_CLASS___SFUZipException,
      "raise:format:",
      CFSTR("SFUZipEntryError"),
      CFSTR("Could not read local header."));
  v4 = v11;
  v5 = *v11++;
  if ( v5 == 67324752 )
  {
    v6 = *((unsigned __int16 *)v4 + 13);
    v7 = *((unsigned __int16 *)v4 + 14);
    mOffset = self->mOffset;
    v11 = (int *)((char *)v4 + 30);
    self->mDataOffset = v6 + v7 + 30 + mOffset;
    __dmb(0xBu);
    self->mHasDataOffset = 1;
    objc_msgSend(v3, "close");
    goto LABEL_7;
  }
  if ( TSUErrorCat_init_token != -1 )
    dispatch_once(&TSUErrorCat_init_token, &stru_1001DDA30);
  v10 = (os_log_s *)TSUErrorCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUErrorCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_100170BE0(v10);
  __dmb(0xBu);
  self->mHasDataOffset = 1;
  objc_msgSend(v3, "close");
  objc_sync_exit(self);
  return 0LL;
}