-[DocumentCompressor compressChunk:completionHandler:]
bool __cdecl -[DocumentCompressor compressChunk:completionHandler:](DocumentCompressor *self, SEL a2, id a3, id a4)
{
  id v6; // x22
  id v7; // x20
  id v8; // x19

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutorelease(v6);
  LOBYTE(self) = -[DocumentCompressor compressChunk:length:completionHandler:](
                   self,
                   "compressChunk:length:completionHandler:",
                   objc_msgSend(v8, "bytes"),
                   objc_msgSend(v8, "length"),
                   v7);
  objc_release(v7);
  objc_release(v8);
  return (char)self;
}