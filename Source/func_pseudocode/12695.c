-[SFUMemoryOutputStream writeBuffer:size:]
void __cdecl -[SFUMemoryOutputStream writeBuffer:size:](
        SFUMemoryOutputStream *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4)
{
  -[NSMutableData appendBytes:length:](self->mData, "appendBytes:length:", a3, a4);
}