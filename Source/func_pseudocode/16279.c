-[FudPersonalizer freePersonalizationData]
void __cdecl -[FudPersonalizer freePersonalizationData](FudPersonalizer *self, SEL a2)
{
  __CFDictionary *manifestDict; // x0
  __CFDictionary *objectsDict; // x0
  __CFDictionary *serverRequestDict; // x0
  __CFDictionary *serverResponseDict; // x0
  __CFData *responseData; // x0
  __AMAuthInstall *amai; // x0
  __CFString *ticketName; // x0

  manifestDict = self->_manifestDict;
  if ( manifestDict )
  {
    CFRelease(manifestDict);
    self->_manifestDict = 0LL;
  }
  objectsDict = self->_objectsDict;
  if ( objectsDict )
  {
    CFRelease(objectsDict);
    self->_objectsDict = 0LL;
  }
  serverRequestDict = self->_serverRequestDict;
  if ( serverRequestDict )
  {
    CFRelease(serverRequestDict);
    self->_serverRequestDict = 0LL;
  }
  serverResponseDict = self->_serverResponseDict;
  if ( serverResponseDict )
  {
    CFRelease(serverResponseDict);
    self->_serverResponseDict = 0LL;
  }
  responseData = self->_responseData;
  if ( responseData )
  {
    CFRelease(responseData);
    self->_responseData = 0LL;
  }
  amai = self->_amai;
  if ( amai )
  {
    CFRelease(amai);
    self->_amai = 0LL;
  }
  ticketName = self->_ticketName;
  if ( ticketName )
  {
    CFRelease(ticketName);
    self->_ticketName = 0LL;
  }
}