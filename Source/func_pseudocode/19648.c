-[IPPEndpoint session]
IPPSession *__cdecl -[IPPEndpoint session](IPPEndpoint *self, SEL a2)
{
  return (IPPSession *)objc_getProperty(self, a2, 8LL, 1);
}