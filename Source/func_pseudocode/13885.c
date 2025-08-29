_xmlCreatePushParserCtxt
xmlParserCtxtPtr __cdecl xmlCreatePushParserCtxt(
        xmlSAXHandlerPtr sax,
        void *user_data,
        const char *chunk,
        int size,
        const char *filename)
{
  return _xmlCreatePushParserCtxt(sax, user_data, chunk, size, filename);
}