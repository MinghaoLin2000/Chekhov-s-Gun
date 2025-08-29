-[TSUStreamCompression didFinishProcessing]
bool __cdecl -[TSUStreamCompression didFinishProcessing](TSUStreamCompression *self, SEL a2)
{
  return -[TSUStreamCompression processBytes:size:flags:](self, "processBytes:size:flags:", &unk_1001F7FFC, 0LL, 1LL);
}