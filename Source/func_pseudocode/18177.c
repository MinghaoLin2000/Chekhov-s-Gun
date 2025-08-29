_kevent
int __cdecl kevent(
        int kq,
        const kevent *changelist,
        int nchanges,
        kevent *eventlist,
        int nevents,
        const timespec *timeout)
{
  return _kevent(kq, changelist, nchanges, eventlist, nevents, timeout);
}