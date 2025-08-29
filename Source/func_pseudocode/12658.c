-[TSUZipFileArchive reopenWithTemporaryURL:error:]
bool __cdecl -[TSUZipFileArchive reopenWithTemporaryURL:error:](TSUZipFileArchive *self, SEL a2, id a3, id *a4)
{
  unsigned __int64 archiveLength; // x27
  id *p_fdWrapper; // x20
  TSUZipFileDescriptorWrapper *fdWrapper; // x21
  TSUZipFileDescriptorWrapper *v10; // x22
  id v11; // x25
  id v12; // x24
  bool v13; // w23

  archiveLength = self->_archiveLength;
  p_fdWrapper = (id *)&self->_fdWrapper;
  fdWrapper = self->_fdWrapper;
  v10 = objc_retain(fdWrapper);
  self->_archiveLength = 0LL;
  v11 = *p_fdWrapper;
  *p_fdWrapper = 0LL;
  v12 = objc_retain(a3);
  objc_release(v11);
  v13 = -[TSUZipFileArchive openWithURL:error:](self, "openWithURL:error:", v12, a4);
  objc_release(v12);
  if ( !v13 )
  {
    self->_archiveLength = archiveLength;
    objc_storeStrong(p_fdWrapper, fdWrapper);
  }
  objc_release(v10);
  return v13;
}