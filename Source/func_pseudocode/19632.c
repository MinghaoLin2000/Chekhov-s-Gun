+[DocumentCompressor deflateCompressor]
id __cdecl +[DocumentCompressor deflateCompressor](id a1, SEL a2)
{
  return objc_msgSend(a1, "documentCompresorForName:", CFSTR("deflate"));
}