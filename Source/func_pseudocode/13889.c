_xmlReaderForIO
xmlTextReaderPtr __cdecl xmlReaderForIO(
        xmlInputReadCallback ioread,
        xmlInputCloseCallback ioclose,
        void *ioctx,
        const char *URL,
        const char *encoding,
        int options)
{
  return _xmlReaderForIO(ioread, ioclose, ioctx, URL, encoding, options);
}