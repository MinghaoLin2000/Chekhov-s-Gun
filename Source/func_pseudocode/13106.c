-[SFUFileDataRepresentation fileType]
unsigned int __cdecl -[SFUFileDataRepresentation fileType](SFUFileDataRepresentation *self, SEL a2)
{
  -[SFUFileDataRepresentation readFileAttributes](self, "readFileAttributes");
  return self->mFileType;
}