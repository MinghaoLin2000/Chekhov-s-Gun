_proc_listpids
int __cdecl proc_listpids(uint32_t type, uint32_t typeinfo, void *buffer, int buffersize)
{
  return _proc_listpids(type, typeinfo, buffer, buffersize);
}