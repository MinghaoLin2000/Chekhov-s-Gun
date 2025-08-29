+[DocumentCompressor gzipCompressor]
id __cdecl +[DocumentCompressor gzipCompressor](id a1, SEL a2)
{
  return objc_msgSend(a1, "documentCompresorForName:", CFSTR("gzip"));
}