_proc_pidpath
int __cdecl proc_pidpath(int pid, void *buffer, uint32_t buffersize)
{
  return _proc_pidpath(pid, buffer, buffersize);
}