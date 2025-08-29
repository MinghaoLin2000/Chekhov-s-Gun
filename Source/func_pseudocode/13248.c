-[SFUZipRecordInputStream initWithDataRepresentation:]
SFUZipRecordInputStream *__cdecl -[SFUZipRecordInputStream initWithDataRepresentation:](
        SFUZipRecordInputStream *self,
        SEL a2,
        id a3)
{
  self->mInput = (SFUBufferedInputStream *)objc_retain(objc_msgSend(a3, "bufferedInputStream"));
  return self;
}