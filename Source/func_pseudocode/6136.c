-[ClientRequest connectionIdentifier]
NSUUID *__cdecl -[ClientRequest connectionIdentifier](ClientRequest *self, SEL a2)
{
  return (NSUUID *)objc_getProperty(self, a2, 48LL, 1);
}