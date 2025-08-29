-[IPPBrowseInfo session]
IPPSession *__cdecl -[IPPBrowseInfo session](IPPBrowseInfo *self, SEL a2)
{
  return (IPPSession *)objc_getProperty(self, a2, 8LL, 1);
}