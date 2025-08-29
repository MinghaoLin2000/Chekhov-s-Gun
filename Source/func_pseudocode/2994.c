-[ITLibrary isMediaDomainLoaded:]
bool __cdecl -[ITLibrary isMediaDomainLoaded:](ITLibrary *self, SEL a2, unsigned __int64 a3)
{
  return (a3 & ~(unsigned __int64)-[ITLibrary loadedMediaDomains](self, "loadedMediaDomains")) == 0;
}