-[SFUMemoryOutputStream initWithData:]
SFUMemoryOutputStream *__cdecl -[SFUMemoryOutputStream initWithData:](SFUMemoryOutputStream *self, SEL a2, id a3)
{
  SFUMemoryOutputStream *v4; // x19

  v4 = -[SFUMemoryOutputStream init](self, "init");
  if ( v4 )
    v4->mData = (NSMutableData *)objc_retain(a3);
  return v4;
}