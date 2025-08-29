-[TSUContainedZipArchive isValid]
bool __cdecl -[TSUContainedZipArchive isValid](TSUContainedZipArchive *self, SEL a2)
{
  return -[TSUZipArchive isValid](self->_zipArchive, "isValid");
}