_proc_pid_rusage
int __cdecl proc_pid_rusage(int pid, int flavor, rusage_info_t *buffer)
{
  return _proc_pid_rusage(pid, flavor, buffer);
}