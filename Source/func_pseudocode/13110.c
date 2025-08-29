-[SFUFileDataRepresentation encodedLength]
signed __int64 __cdecl -[SFUFileDataRepresentation encodedLength](SFUFileDataRepresentation *self, SEL a2)
{
  -[SFUFileDataRepresentation readFileAttributes](self, "readFileAttributes");
  return self->mFileLength;
}