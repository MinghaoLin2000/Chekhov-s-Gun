-[SFUMemoryOutputStream offset]
signed __int64 __cdecl -[SFUMemoryOutputStream offset](SFUMemoryOutputStream *self, SEL a2)
{
  return -[NSMutableData length](self->mData, "length");
}