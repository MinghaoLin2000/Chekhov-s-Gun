-[SFUDataRepresentation uint32Hash]
unsigned int __cdecl -[SFUDataRepresentation uint32Hash](SFUDataRepresentation *self, SEL a2)
{
  void *v3; // x20
  signed __int64 v4; // x21
  id v5; // x23
  __int64 v6; // x22
  char *v7; // x0

  if ( !self->mHasHash && -[SFUDataRepresentation isReadable](self, "isReadable") )
  {
    objc_sync_enter(self);
    if ( !self->mHasHash && -[SFUDataRepresentation isReadable](self, "isReadable") )
    {
      v3 = objc_autoreleasePoolPush();
      v4 = -[SFUDataRepresentation dataLength](self, "dataLength");
      v5 = -[SFUDataRepresentation inputStream](self, "inputStream");
      v6 = (__int64)malloc_type_malloc(0x1008uLL, 0xDD5B720BuLL);
      if ( !v6 )
        +[NSException raise:format:](
          &OBJC_CLASS___NSException,
          "raise:format:",
          NSMallocException,
          CFSTR("Failed to allocate hash buffer for SFEData"));
      v7 = (char *)objc_msgSend(v5, "readToBuffer:size:", v6, 4096LL);
      *(_QWORD *)&v7[v6] = v4;
      self->mHash = SFUHash(v6, (__int64)(v7 + 8));
      free((void *)v6);
      __dmb(0xBu);
      self->mHasHash = 1;
      objc_autoreleasePoolPop(v3);
    }
    objc_sync_exit(self);
  }
  return self->mHash;
}